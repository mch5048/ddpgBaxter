// Generated by gencpp from file yumi_hw/YumiGrasp.msg
// DO NOT EDIT!


#ifndef YUMI_HW_MESSAGE_YUMIGRASP_H
#define YUMI_HW_MESSAGE_YUMIGRASP_H

#include <ros/service_traits.h>


#include <yumi_hw/YumiGraspRequest.h>
#include <yumi_hw/YumiGraspResponse.h>


namespace yumi_hw
{

struct YumiGrasp
{

typedef YumiGraspRequest Request;
typedef YumiGraspResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct YumiGrasp
} // namespace yumi_hw


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::yumi_hw::YumiGrasp > {
  static const char* value()
  {
    return "26ac3d04102c2e5c0d5e4e1367d0349b";
  }

  static const char* value(const ::yumi_hw::YumiGrasp&) { return value(); }
};

template<>
struct DataType< ::yumi_hw::YumiGrasp > {
  static const char* value()
  {
    return "yumi_hw/YumiGrasp";
  }

  static const char* value(const ::yumi_hw::YumiGrasp&) { return value(); }
};


// service_traits::MD5Sum< ::yumi_hw::YumiGraspRequest> should match 
// service_traits::MD5Sum< ::yumi_hw::YumiGrasp > 
template<>
struct MD5Sum< ::yumi_hw::YumiGraspRequest>
{
  static const char* value()
  {
    return MD5Sum< ::yumi_hw::YumiGrasp >::value();
  }
  static const char* value(const ::yumi_hw::YumiGraspRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::yumi_hw::YumiGraspRequest> should match 
// service_traits::DataType< ::yumi_hw::YumiGrasp > 
template<>
struct DataType< ::yumi_hw::YumiGraspRequest>
{
  static const char* value()
  {
    return DataType< ::yumi_hw::YumiGrasp >::value();
  }
  static const char* value(const ::yumi_hw::YumiGraspRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::yumi_hw::YumiGraspResponse> should match 
// service_traits::MD5Sum< ::yumi_hw::YumiGrasp > 
template<>
struct MD5Sum< ::yumi_hw::YumiGraspResponse>
{
  static const char* value()
  {
    return MD5Sum< ::yumi_hw::YumiGrasp >::value();
  }
  static const char* value(const ::yumi_hw::YumiGraspResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::yumi_hw::YumiGraspResponse> should match 
// service_traits::DataType< ::yumi_hw::YumiGrasp > 
template<>
struct DataType< ::yumi_hw::YumiGraspResponse>
{
  static const char* value()
  {
    return DataType< ::yumi_hw::YumiGrasp >::value();
  }
  static const char* value(const ::yumi_hw::YumiGraspResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // YUMI_HW_MESSAGE_YUMIGRASP_H
