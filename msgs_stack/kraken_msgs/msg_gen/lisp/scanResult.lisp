; Auto-generated. Do not edit!


(cl:in-package kraken_msgs-msg)


;//! \htmlinclude scanResult.msg.html

(cl:defclass <scanResult> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass scanResult (<scanResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <scanResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'scanResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name kraken_msgs-msg:<scanResult> is deprecated: use kraken_msgs-msg:scanResult instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <scanResult>) ostream)
  "Serializes a message object of type '<scanResult>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <scanResult>) istream)
  "Deserializes a message object of type '<scanResult>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<scanResult>)))
  "Returns string type for a message object of type '<scanResult>"
  "kraken_msgs/scanResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'scanResult)))
  "Returns string type for a message object of type 'scanResult"
  "kraken_msgs/scanResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<scanResult>)))
  "Returns md5sum for a message object of type '<scanResult>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'scanResult)))
  "Returns md5sum for a message object of type 'scanResult"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<scanResult>)))
  "Returns full string definition for message of type '<scanResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#result~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'scanResult)))
  "Returns full string definition for message of type 'scanResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#result~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <scanResult>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <scanResult>))
  "Converts a ROS message object to a list"
  (cl:list 'scanResult
))