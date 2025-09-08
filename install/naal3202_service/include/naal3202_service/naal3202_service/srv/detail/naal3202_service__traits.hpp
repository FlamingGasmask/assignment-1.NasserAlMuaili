// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from naal3202_service:srv/Naal3202Service.idl
// generated code does not contain a copyright notice

#ifndef NAAL3202_SERVICE__SRV__DETAIL__NAAL3202_SERVICE__TRAITS_HPP_
#define NAAL3202_SERVICE__SRV__DETAIL__NAAL3202_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "naal3202_service/srv/detail/naal3202_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'text'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace naal3202_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const Naal3202Service_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: text
  {
    out << "text: ";
    to_flow_style_yaml(msg.text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Naal3202Service_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text:\n";
    to_block_style_yaml(msg.text, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Naal3202Service_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace naal3202_service

namespace rosidl_generator_traits
{

[[deprecated("use naal3202_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naal3202_service::srv::Naal3202Service_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  naal3202_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naal3202_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const naal3202_service::srv::Naal3202Service_Request & msg)
{
  return naal3202_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<naal3202_service::srv::Naal3202Service_Request>()
{
  return "naal3202_service::srv::Naal3202Service_Request";
}

template<>
inline const char * name<naal3202_service::srv::Naal3202Service_Request>()
{
  return "naal3202_service/srv/Naal3202Service_Request";
}

template<>
struct has_fixed_size<naal3202_service::srv::Naal3202Service_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<naal3202_service::srv::Naal3202Service_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<naal3202_service::srv::Naal3202Service_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace naal3202_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const Naal3202Service_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: reverse
  {
    out << "reverse: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Naal3202Service_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reverse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reverse: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Naal3202Service_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace naal3202_service

namespace rosidl_generator_traits
{

[[deprecated("use naal3202_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naal3202_service::srv::Naal3202Service_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  naal3202_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naal3202_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const naal3202_service::srv::Naal3202Service_Response & msg)
{
  return naal3202_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<naal3202_service::srv::Naal3202Service_Response>()
{
  return "naal3202_service::srv::Naal3202Service_Response";
}

template<>
inline const char * name<naal3202_service::srv::Naal3202Service_Response>()
{
  return "naal3202_service/srv/Naal3202Service_Response";
}

template<>
struct has_fixed_size<naal3202_service::srv::Naal3202Service_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<naal3202_service::srv::Naal3202Service_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<naal3202_service::srv::Naal3202Service_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<naal3202_service::srv::Naal3202Service>()
{
  return "naal3202_service::srv::Naal3202Service";
}

template<>
inline const char * name<naal3202_service::srv::Naal3202Service>()
{
  return "naal3202_service/srv/Naal3202Service";
}

template<>
struct has_fixed_size<naal3202_service::srv::Naal3202Service>
  : std::integral_constant<
    bool,
    has_fixed_size<naal3202_service::srv::Naal3202Service_Request>::value &&
    has_fixed_size<naal3202_service::srv::Naal3202Service_Response>::value
  >
{
};

template<>
struct has_bounded_size<naal3202_service::srv::Naal3202Service>
  : std::integral_constant<
    bool,
    has_bounded_size<naal3202_service::srv::Naal3202Service_Request>::value &&
    has_bounded_size<naal3202_service::srv::Naal3202Service_Response>::value
  >
{
};

template<>
struct is_service<naal3202_service::srv::Naal3202Service>
  : std::true_type
{
};

template<>
struct is_service_request<naal3202_service::srv::Naal3202Service_Request>
  : std::true_type
{
};

template<>
struct is_service_response<naal3202_service::srv::Naal3202Service_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAAL3202_SERVICE__SRV__DETAIL__NAAL3202_SERVICE__TRAITS_HPP_
