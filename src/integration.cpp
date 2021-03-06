#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <std_msgs/String.h>
#include <kraken_msgs/center_color.h>

#include <resources/topicHeader.h>

#include <vw_detect.h>
using namespace std;
using namespace cv;

enum color_enum
{
    black = 1, yellow = 2, green = 3, red = 4, other = 5
};

typedef struct point_
{
    int x, y;
    color_enum color;
}
point;

Mat image[15];
Mat colour_detect[15];
vw_detect *detector;
ros::NodeHandle nh;
image_transport::ImageTransport it(nh);
image_transport::Publisher *ml_pub;

color_enum getColor(int x, int y, Mat image)
{
    Vec3b &Color = image.at<Vec3b>(x, y);

    if (Color[0] == 0 && Color[1] == 0 && Color[2] == 0)
        return 1;
    if (Color[0] == 0 && Color[1] == 255 && Color[2] == 255) // Yellow pixel
        return 2;

    if (Color[0] == 0 && Color[1] == 255 && Color[2] == 0) // GREEN pixel
        return 3;

    if (Color[0] == 0 && Color[1] == 0 && Color[2] == 255) // RED pixel
        return 4;
    return 5;
}

void imageCallback(const sensor_msgs::ImageConstPtr& msg)
{
    cv_bridge::CvImagePtr cv_ptr;
    Mat temp1, temp2;

    try
    {
        cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
        temp1 = image[14];
        temp2 = colour_detect[14];
        for (int i = 0; i <= 13; i++)
        {
            image[i + 1] = image[i];
            colour_detect[i + 1] = colour_detect[i];
        }
        image[0] = cv_ptr->image;
    }
    catch (cv_bridge::Exception& e)
    {
        ROS_ERROR("cv_bridge exception: %s", e.what());
        return;
    }

    Mat newMat(image[0].rows, image[0].cols, CV_8UC3, Scalar(0, 0, 0));
    colour_detect[0] = newMat;
    // filters to be used before detection is done
    medianBlur(image[0], colour_detect[0], 5);


    detector->getPredictions(image[0], colour_detect[0]);
    temp1.deallocate();
    temp2.deallocate();
    cv_bridge::CvImagePtr cv_ptr_ml;
    detector->wait_for_completion();
    cv_ptr_ml->image = colour_detect[0];
    ml_pub->publish(cv_ptr_ml->toImageMsg());

    //main code (vw detect + region growing)

    Mat eroded;
    erode(colour_detect[0], eroded, Mat(), Point(-1, -1), 2);

    vector < vector <Point> > contours;
    findContours(eroded, contours, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE);
    CvMoments moments;
    vector<point> seed_points;
    for (size_t i = 0; i < contours.size(); i++)
    {
        cvMoments(contours[i], &moments);
        point current;
        //calculating the centers of the contours
        current.x = (cvGetSpatialMoment(&moments, 1, 0) / cvGetSpatialMoment(&moments, 0, 0));
        current.y = (cvGetSpatialMoment(&moments, 0, 1) / cvGetSpatialMoment(&moments, 0, 0));
        current.color = getColor(current.x, current.y, eroded);
        seed_points.push_back(current);
    }
    

}

void buoy_detect()
{
    //    image_transport::ImageTransport it(nh);
    image_transport::Subscriber sub = it.subscribe("topics::CAMERA_FRONT_RAW_IMAGE", 1, imageCallback);
    kraken_msgs::center_color center_color_object;
    ros::Publisher result = nh.advertise<kraken_msgs::center_color> ("CENTER_COLOR_IMAGE", 1);


    ros::Rate loop_rate(10);

    while (nh.ok())
    {
        image_transport::Publisher ml_image_pub = it.advertise(topics::CAMERA_FRONT_ML_IMAGE, 1);
        image_transport::Publisher final_image_pub = it.advertise(topics::CAMERA_FRONT_FINAL_IMAGE, 1);
        ml_pub = &ml_image_pub;

        loop_rate.sleep();
        ros::spinOnce();
    }


}

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        ROS_ERROR("Requires the path to vw hash");
    }
    ros::init(argc, argv, "buoy_detect integrator");

    vw_detect detector1(argv[1]);
    detector = &detector1;

    buoy_detect();
    //    ros::spin();
    return 0;
}



