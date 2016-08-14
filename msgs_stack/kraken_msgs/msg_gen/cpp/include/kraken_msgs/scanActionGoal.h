/* Auto-generated by genmsg_cpp for file /home/dyutimoy/kinetic_workspace/kraken_3.0-indigo-devel/msgs_stack/kraken_msgs/msg/scanActionGoal.msg */
#ifndef KRAKEN_MSGS_MESSAGE_SCANACTIONGOAL_H
#define KRAKEN_MSGS_MESSAGE_SCANACTIONGOAL_H
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
#include "actionlib_msgs/GoalID.h"
#include "kraken_msgs/scanGoal.h"

namespace kraken_msgs
{
template <class ContainerAllocator>
struct scanActionGoal_ {
  typedef scanActionGoal_<ContainerAllocator> Type;

  scanActionGoal_()
  : header()
  , goal_id()
  , goal()
  {
  }

  scanActionGoal_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , goal_id(_alloc)
  , goal(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
   ::actionlib_msgs::GoalID_<ContainerAllocator>  goal_id;

  typedef  ::kraken_msgs::scanGoal_<ContainerAllocator>  _goal_type;
   ::kraken_msgs::scanGoal_<ContainerAllocator>  goal;


  typedef boost::shared_ptr< ::kraken_msgs::scanActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kraken_msgs::scanActionGoal_<ContainerAllocator>  const> ConstPtr;
}; // struct scanActionGoal
typedef  ::kraken_msgs::scanActionGoal_<std::allocator<void> > scanActionGoal;

typedef boost::shared_ptr< ::kraken_msgs::scanActionGoal> scanActionGoalPtr;
typedef boost::shared_ptr< ::kraken_msgs::scanActionGoal const> scanActionGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::kraken_msgs::scanActionGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::kraken_msgs::scanActionGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace kraken_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::scanActionGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::scanActionGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::kraken_msgs::scanActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2671290f804c69165f5606e272be9bdc";
  }

  static const char* value(const  ::kraken_msgs::scanActionGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x2671290f804c6916ULL;
  static const uint64_t static_value2 = 0x5f5606e272be9bdcULL;
};

template<class ContainerAllocator>
struct DataType< ::kraken_msgs::scanActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "kraken_msgs/scanActionGoal";
  }

  static const char* value(const  ::kraken_msgs::scanActionGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::kraken_msgs::scanActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
scanGoal goal\n\
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
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: kraken_msgs/scanGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal\n\
int32 direction		# +1 for Clockwise and -1 for Counter-clockwise\n\
float32 speed\n\
\n\
\n\
";
  }

  static const char* value(const  ::kraken_msgs::scanActionGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::kraken_msgs::scanActionGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::kraken_msgs::scanActionGoal_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::kraken_msgs::scanActionGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.goal_id);
    stream.next(m.goal);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct scanActionGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kraken_msgs::scanActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::kraken_msgs::scanActionGoal_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
s << std::endl;
    Printer< ::kraken_msgs::scanGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};


} // namespace message_operations
} // namespace ros

#endif // KRAKEN_MSGS_MESSAGE_SCANACTIONGOAL_H

