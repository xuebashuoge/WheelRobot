// Generated by gencpp from file ros_service_examples/MP3InventoryService.msg
// DO NOT EDIT!


#ifndef ROS_SERVICE_EXAMPLES_MESSAGE_MP3INVENTORYSERVICE_H
#define ROS_SERVICE_EXAMPLES_MESSAGE_MP3INVENTORYSERVICE_H

#include <ros/service_traits.h>


#include <ros_service_examples/MP3InventoryServiceRequest.h>
#include <ros_service_examples/MP3InventoryServiceResponse.h>


namespace ros_service_examples
{

struct MP3InventoryService
{

typedef MP3InventoryServiceRequest Request;
typedef MP3InventoryServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MP3InventoryService
} // namespace ros_service_examples


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_service_examples::MP3InventoryService > {
  static const char* value()
  {
    return "40fcdbb3c6bede328ad95cd4459072c8";
  }

  static const char* value(const ::ros_service_examples::MP3InventoryService&) { return value(); }
};

template<>
struct DataType< ::ros_service_examples::MP3InventoryService > {
  static const char* value()
  {
    return "ros_service_examples/MP3InventoryService";
  }

  static const char* value(const ::ros_service_examples::MP3InventoryService&) { return value(); }
};


// service_traits::MD5Sum< ::ros_service_examples::MP3InventoryServiceRequest> should match 
// service_traits::MD5Sum< ::ros_service_examples::MP3InventoryService > 
template<>
struct MD5Sum< ::ros_service_examples::MP3InventoryServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_service_examples::MP3InventoryService >::value();
  }
  static const char* value(const ::ros_service_examples::MP3InventoryServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_service_examples::MP3InventoryServiceRequest> should match 
// service_traits::DataType< ::ros_service_examples::MP3InventoryService > 
template<>
struct DataType< ::ros_service_examples::MP3InventoryServiceRequest>
{
  static const char* value()
  {
    return DataType< ::ros_service_examples::MP3InventoryService >::value();
  }
  static const char* value(const ::ros_service_examples::MP3InventoryServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_service_examples::MP3InventoryServiceResponse> should match 
// service_traits::MD5Sum< ::ros_service_examples::MP3InventoryService > 
template<>
struct MD5Sum< ::ros_service_examples::MP3InventoryServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_service_examples::MP3InventoryService >::value();
  }
  static const char* value(const ::ros_service_examples::MP3InventoryServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_service_examples::MP3InventoryServiceResponse> should match 
// service_traits::DataType< ::ros_service_examples::MP3InventoryService > 
template<>
struct DataType< ::ros_service_examples::MP3InventoryServiceResponse>
{
  static const char* value()
  {
    return DataType< ::ros_service_examples::MP3InventoryService >::value();
  }
  static const char* value(const ::ros_service_examples::MP3InventoryServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_SERVICE_EXAMPLES_MESSAGE_MP3INVENTORYSERVICE_H
