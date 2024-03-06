// Generated by gencpp from file morai_msgs/FaultInjectionCtrlSrvRequest.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_FAULTINJECTIONCTRLSRVREQUEST_H
#define MORAI_MSGS_MESSAGE_FAULTINJECTIONCTRLSRVREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <morai_msgs/FaultInjection_Controller.h>

namespace morai_msgs
{
template <class ContainerAllocator>
struct FaultInjectionCtrlSrvRequest_
{
  typedef FaultInjectionCtrlSrvRequest_<ContainerAllocator> Type;

  FaultInjectionCtrlSrvRequest_()
    : request()  {
    }
  FaultInjectionCtrlSrvRequest_(const ContainerAllocator& _alloc)
    : request(_alloc)  {
  (void)_alloc;
    }



   typedef  ::morai_msgs::FaultInjection_Controller_<ContainerAllocator>  _request_type;
  _request_type request;





  typedef boost::shared_ptr< ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FaultInjectionCtrlSrvRequest_

typedef ::morai_msgs::FaultInjectionCtrlSrvRequest_<std::allocator<void> > FaultInjectionCtrlSrvRequest;

typedef boost::shared_ptr< ::morai_msgs::FaultInjectionCtrlSrvRequest > FaultInjectionCtrlSrvRequestPtr;
typedef boost::shared_ptr< ::morai_msgs::FaultInjectionCtrlSrvRequest const> FaultInjectionCtrlSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator1> & lhs, const ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.request == rhs.request;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator1> & lhs, const ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1119e5015e2782c5efa7454105a3b757";
  }

  static const char* value(const ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1119e5015e2782c5ULL;
  static const uint64_t static_value2 = 0xefa7454105a3b757ULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/FaultInjectionCtrlSrvRequest";
  }

  static const char* value(const ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "FaultInjection_Controller request\n"
"\n"
"================================================================================\n"
"MSG: morai_msgs/FaultInjection_Controller\n"
"int32 unique_id\n"
"\n"
"int32 fault_location\n"
"int32 fault_class\n"
"int32 fault_subclass\n"
;
  }

  static const char* value(const ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.request);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FaultInjectionCtrlSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::FaultInjectionCtrlSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "request: ";
    s << std::endl;
    Printer< ::morai_msgs::FaultInjection_Controller_<ContainerAllocator> >::stream(s, indent + "  ", v.request);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_FAULTINJECTIONCTRLSRVREQUEST_H
