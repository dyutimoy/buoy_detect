/* Auto-generated by genmsg_cpp for file /home/dyutimoy/kinetic_workspace/kraken_3.0-indigo-devel/msgs_stack/kraken_msgs/msg/seabotix.msg */
#ifndef KRAKEN_MSGS_MESSAGE_SEABOTIX_H
#define KRAKEN_MSGS_MESSAGE_SEABOTIX_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace kraken_msgs
{
template <class ContainerAllocator>
struct seabotix_ {
  typedef seabotix_<ContainerAllocator> Type;

  seabotix_()
  : header()
  , data()
  {
    data.assign(0);
  }

  seabotix_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , data()
  {
    data.assign(0);
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef boost::array<uint8_t, 6>  _data_type;
  boost::array<uint8_t, 6>  data;


  typedef boost::shared_ptr< ::kraken_msgs::seabotix_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kraken_msgs::seabotix_<ContainerAllocator>  const> ConstPtr;
}; // struct seabotix
typedef  ::kraken_msgs::seabotix_<std::allocator<void> > seabotix;

typedef boost::shared_ptr< ::kraken_msgs::seabotix> seabotixPtr;
typedef boost::shared_ptr< ::kraken_msgs::seabotix const> seabotixConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::kraken_msgs::seabotix_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::kraken_msgs::seabotix_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace kraken_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::seabotix_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::seabotix_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::kraken_msgs::seabotix_<ContainerAllocator> > {
  static const char* value() 
  {
    return "547ad9adde9c380787cba568af9e2cda";
  }

  static const char* value(const  ::kraken_msgs::seabotix_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x547ad9adde9c3807ULL;
  static const uint64_t static_value2 = 0x87cba568af9e2cdaULL;
};

template<class ContainerAllocator>
struct DataType< ::kraken_msgs::seabotix_<ContainerAllocator> > {
  static const char* value() 
  {
    return "kraken_msgs/seabotix";
  }

  static const char* value(const  ::kraken_msgs::seabotix_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::kraken_msgs::seabotix_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
uint8[6] data\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::kraken_msgs::seabotix_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::kraken_msgs::seabotix_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::kraken_msgs::seabotix_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::kraken_msgs::seabotix_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.data);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct seabotix_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kraken_msgs::seabotix_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::kraken_msgs::seabotix_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // KRAKEN_MSGS_MESSAGE_SEABOTIX_H
