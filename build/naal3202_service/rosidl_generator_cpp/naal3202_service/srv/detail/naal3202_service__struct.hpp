// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from naal3202_service:srv/Naal3202Service.idl
// generated code does not contain a copyright notice

#ifndef NAAL3202_SERVICE__SRV__DETAIL__NAAL3202_SERVICE__STRUCT_HPP_
#define NAAL3202_SERVICE__SRV__DETAIL__NAAL3202_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'text'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__naal3202_service__srv__Naal3202Service_Request __attribute__((deprecated))
#else
# define DEPRECATED__naal3202_service__srv__Naal3202Service_Request __declspec(deprecated)
#endif

namespace naal3202_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Naal3202Service_Request_
{
  using Type = Naal3202Service_Request_<ContainerAllocator>;

  explicit Naal3202Service_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_init)
  {
    (void)_init;
  }

  explicit Naal3202Service_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _text_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _text_type text;

  // setters for named parameter idiom
  Type & set__text(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->text = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    naal3202_service::srv::Naal3202Service_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const naal3202_service::srv::Naal3202Service_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naal3202_service::srv::Naal3202Service_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naal3202_service::srv::Naal3202Service_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naal3202_service::srv::Naal3202Service_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naal3202_service::srv::Naal3202Service_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naal3202_service::srv::Naal3202Service_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naal3202_service::srv::Naal3202Service_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naal3202_service::srv::Naal3202Service_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naal3202_service::srv::Naal3202Service_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naal3202_service__srv__Naal3202Service_Request
    std::shared_ptr<naal3202_service::srv::Naal3202Service_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naal3202_service__srv__Naal3202Service_Request
    std::shared_ptr<naal3202_service::srv::Naal3202Service_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Naal3202Service_Request_ & other) const
  {
    if (this->text != other.text) {
      return false;
    }
    return true;
  }
  bool operator!=(const Naal3202Service_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Naal3202Service_Request_

// alias to use template instance with default allocator
using Naal3202Service_Request =
  naal3202_service::srv::Naal3202Service_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace naal3202_service


#ifndef _WIN32
# define DEPRECATED__naal3202_service__srv__Naal3202Service_Response __attribute__((deprecated))
#else
# define DEPRECATED__naal3202_service__srv__Naal3202Service_Response __declspec(deprecated)
#endif

namespace naal3202_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Naal3202Service_Response_
{
  using Type = Naal3202Service_Response_<ContainerAllocator>;

  explicit Naal3202Service_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reverse = "";
      this->time = 0.0;
    }
  }

  explicit Naal3202Service_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reverse(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reverse = "";
      this->time = 0.0;
    }
  }

  // field types and members
  using _reverse_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reverse_type reverse;
  using _time_type =
    double;
  _time_type time;

  // setters for named parameter idiom
  Type & set__reverse(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reverse = _arg;
    return *this;
  }
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    naal3202_service::srv::Naal3202Service_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const naal3202_service::srv::Naal3202Service_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naal3202_service::srv::Naal3202Service_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naal3202_service::srv::Naal3202Service_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naal3202_service::srv::Naal3202Service_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naal3202_service::srv::Naal3202Service_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naal3202_service::srv::Naal3202Service_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naal3202_service::srv::Naal3202Service_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naal3202_service::srv::Naal3202Service_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naal3202_service::srv::Naal3202Service_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naal3202_service__srv__Naal3202Service_Response
    std::shared_ptr<naal3202_service::srv::Naal3202Service_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naal3202_service__srv__Naal3202Service_Response
    std::shared_ptr<naal3202_service::srv::Naal3202Service_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Naal3202Service_Response_ & other) const
  {
    if (this->reverse != other.reverse) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const Naal3202Service_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Naal3202Service_Response_

// alias to use template instance with default allocator
using Naal3202Service_Response =
  naal3202_service::srv::Naal3202Service_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace naal3202_service

namespace naal3202_service
{

namespace srv
{

struct Naal3202Service
{
  using Request = naal3202_service::srv::Naal3202Service_Request;
  using Response = naal3202_service::srv::Naal3202Service_Response;
};

}  // namespace srv

}  // namespace naal3202_service

#endif  // NAAL3202_SERVICE__SRV__DETAIL__NAAL3202_SERVICE__STRUCT_HPP_
