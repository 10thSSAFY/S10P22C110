// Generated by gencpp from file morai_msgs/FaultInjectionSensorSrvRequest.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_FAULTINJECTIONSENSORSRVREQUEST_H
#define MORAI_MSGS_MESSAGE_FAULTINJECTIONSENSORSRVREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <morai_msgs/FaultInjection_Sensor.h>

namespace morai_msgs
{
template <class ContainerAllocator>
struct FaultInjectionSensorSrvRequest_
{
  typedef FaultInjectionSensorSrvRequest_<ContainerAllocator> Type;

  FaultInjectionSensorSrvRequest_()
    : request()  {
    }
  FaultInjectionSensorSrvRequest_(const ContainerAllocator& _alloc)
    : request(_alloc)  {
  (void)_alloc;
    }



   typedef  ::morai_msgs::FaultInjection_Sensor_<ContainerAllocator>  _request_type;
  _request_type request;





  typedef boost::shared_ptr< ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FaultInjectionSensorSrvRequest_

typedef ::morai_msgs::FaultInjectionSensorSrvRequest_<std::allocator<void> > FaultInjectionSensorSrvRequest;

typedef boost::shared_ptr< ::morai_msgs::FaultInjectionSensorSrvRequest > FaultInjectionSensorSrvRequestPtr;
typedef boost::shared_ptr< ::morai_msgs::FaultInjectionSensorSrvRequest const> FaultInjectionSensorSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator1> & lhs, const ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.request == rhs.request;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator1> & lhs, const ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cdcb6ce83ad332fbbad42c4b06d7ed5f";
  }

  static const char* value(const ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcdcb6ce83ad332fbULL;
  static const uint64_t static_value2 = 0xbad42c4b06d7ed5fULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/FaultInjectionSensorSrvRequest";
  }

  static const char* value(const ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "FaultInjection_Sensor request\n"
"\n"
"================================================================================\n"
"MSG: morai_msgs/FaultInjection_Sensor\n"
"int32 unique_id\n"
"int32 sensor_id\n"
"\n"
"int32 fault_class\n"
"int32 fault_subclass\n"
"\n"
"geometry_msgs/Vector3 local_position_offset\n"
"geometry_msgs/Vector3 local_rotation_offset\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.request);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FaultInjectionSensorSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::FaultInjectionSensorSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "request: ";
    s << std::endl;
    Printer< ::morai_msgs::FaultInjection_Sensor_<ContainerAllocator> >::stream(s, indent + "  ", v.request);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_FAULTINJECTIONSENSORSRVREQUEST_H
