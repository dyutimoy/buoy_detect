/* Auto-generated by genmsg_cpp for file /home/dyutimoy/kinetic_workspace/kraken_3.0-indigo-devel/msgs_stack/kraken_msgs/msg/setYawAction.msg */
#ifndef KRAKEN_MSGS_MESSAGE_SETYAWACTION_H
#define KRAKEN_MSGS_MESSAGE_SETYAWACTION_H
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

#include "kraken_msgs/setYawActionGoal.h"
#include "kraken_msgs/setYawActionResult.h"
#include "kraken_msgs/setYawActionFeedback.h"

namespace kraken_msgs
{
template <class ContainerAllocator>
struct setYawAction_ {
  typedef setYawAction_<ContainerAllocator> Type;

  setYawAction_()
  : action_goal()
  , action_result()
  , action_feedback()
  {
  }

  setYawAction_(const ContainerAllocator& _alloc)
  : action_goal(_alloc)
  , action_result(_alloc)
  , action_feedback(_alloc)
  {
  }

  typedef  ::kraken_msgs::setYawActionGoal_<ContainerAllocator>  _action_goal_type;
   ::kraken_msgs::setYawActionGoal_<ContainerAllocator>  action_goal;

  typedef  ::kraken_msgs::setYawActionResult_<ContainerAllocator>  _action_result_type;
   ::kraken_msgs::setYawActionResult_<ContainerAllocator>  action_result;

  typedef  ::kraken_msgs::setYawActionFeedback_<ContainerAllocator>  _action_feedback_type;
   ::kraken_msgs::setYawActionFeedback_<ContainerAllocator>  action_feedback;


  typedef boost::shared_ptr< ::kraken_msgs::setYawAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kraken_msgs::setYawAction_<ContainerAllocator>  const> ConstPtr;
}; // struct setYawAction
typedef  ::kraken_msgs::setYawAction_<std::allocator<void> > setYawAction;

typedef boost::shared_ptr< ::kraken_msgs::setYawAction> setYawActionPtr;
typedef boost::shared_ptr< ::kraken_msgs::setYawAction const> setYawActionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::kraken_msgs::setYawAction_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::kraken_msgs::setYawAction_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace kraken_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::setYawAction_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::setYawAction_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::kraken_msgs::setYawAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e3eb2f5154a19588da8dd33aaf392389";
  }

  static const char* value(const  ::kraken_msgs::setYawAction_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe3eb2f5154a19588ULL;
  static const uint64_t static_value2 = 0xda8dd33aaf392389ULL;
};

template<class ContainerAllocator>
struct DataType< ::kraken_msgs::setYawAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "kraken_msgs/setYawAction";
  }

  static const char* value(const  ::kraken_msgs::setYawAction_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::kraken_msgs::setYawAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
setYawActionGoal action_goal\n\
setYawActionResult action_result\n\
setYawActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: kraken_msgs/setYawActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
setYawGoal goal\n\
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
MSG: kraken_msgs/setYawGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
  # TODO: You can change the structure of this message if you need to.\n\
# goal definition\n\
Header header\n\
float32 yaw\n\
\n\
================================================================================\n\
MSG: kraken_msgs/setYawActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
setYawResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: kraken_msgs/setYawResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# result definition\n\
Header header\n\
float32 elapsed_time\n\
\n\
================================================================================\n\
MSG: kraken_msgs/setYawActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
setYawFeedback feedback\n\
\n\
================================================================================\n\
MSG: kraken_msgs/setYawFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# feedback\n\
Header header\n\
float32 Desired_yaw\n\
float32 Current_yaw\n\
float32 Error\n\
\n\
\n\
";
  }

  static const char* value(const  ::kraken_msgs::setYawAction_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::kraken_msgs::setYawAction_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.action_goal);
    stream.next(m.action_result);
    stream.next(m.action_feedback);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct setYawAction_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kraken_msgs::setYawAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::kraken_msgs::setYawAction_<ContainerAllocator> & v) 
  {
    s << indent << "action_goal: ";
s << std::endl;
    Printer< ::kraken_msgs::setYawActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
s << std::endl;
    Printer< ::kraken_msgs::setYawActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
s << std::endl;
    Printer< ::kraken_msgs::setYawActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};


} // namespace message_operations
} // namespace ros

#endif // KRAKEN_MSGS_MESSAGE_SETYAWACTION_H

