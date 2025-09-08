// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naal3202_service:srv/Naal3202Service.idl
// generated code does not contain a copyright notice

#ifndef NAAL3202_SERVICE__SRV__DETAIL__NAAL3202_SERVICE__BUILDER_HPP_
#define NAAL3202_SERVICE__SRV__DETAIL__NAAL3202_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naal3202_service/srv/detail/naal3202_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naal3202_service
{

namespace srv
{

namespace builder
{

class Init_Naal3202Service_Request_text
{
public:
  Init_Naal3202Service_Request_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::naal3202_service::srv::Naal3202Service_Request text(::naal3202_service::srv::Naal3202Service_Request::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naal3202_service::srv::Naal3202Service_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::naal3202_service::srv::Naal3202Service_Request>()
{
  return naal3202_service::srv::builder::Init_Naal3202Service_Request_text();
}

}  // namespace naal3202_service


namespace naal3202_service
{

namespace srv
{

namespace builder
{

class Init_Naal3202Service_Response_time
{
public:
  explicit Init_Naal3202Service_Response_time(::naal3202_service::srv::Naal3202Service_Response & msg)
  : msg_(msg)
  {}
  ::naal3202_service::srv::Naal3202Service_Response time(::naal3202_service::srv::Naal3202Service_Response::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naal3202_service::srv::Naal3202Service_Response msg_;
};

class Init_Naal3202Service_Response_reverse
{
public:
  Init_Naal3202Service_Response_reverse()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Naal3202Service_Response_time reverse(::naal3202_service::srv::Naal3202Service_Response::_reverse_type arg)
  {
    msg_.reverse = std::move(arg);
    return Init_Naal3202Service_Response_time(msg_);
  }

private:
  ::naal3202_service::srv::Naal3202Service_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::naal3202_service::srv::Naal3202Service_Response>()
{
  return naal3202_service::srv::builder::Init_Naal3202Service_Response_reverse();
}

}  // namespace naal3202_service

#endif  // NAAL3202_SERVICE__SRV__DETAIL__NAAL3202_SERVICE__BUILDER_HPP_
