// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naal3202_service:srv/Naal3202Service.idl
// generated code does not contain a copyright notice

#ifndef NAAL3202_SERVICE__SRV__DETAIL__NAAL3202_SERVICE__STRUCT_H_
#define NAAL3202_SERVICE__SRV__DETAIL__NAAL3202_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in srv/Naal3202Service in the package naal3202_service.
typedef struct naal3202_service__srv__Naal3202Service_Request
{
  std_msgs__msg__String text;
} naal3202_service__srv__Naal3202Service_Request;

// Struct for a sequence of naal3202_service__srv__Naal3202Service_Request.
typedef struct naal3202_service__srv__Naal3202Service_Request__Sequence
{
  naal3202_service__srv__Naal3202Service_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naal3202_service__srv__Naal3202Service_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'reverse'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Naal3202Service in the package naal3202_service.
typedef struct naal3202_service__srv__Naal3202Service_Response
{
  rosidl_runtime_c__String reverse;
  double time;
} naal3202_service__srv__Naal3202Service_Response;

// Struct for a sequence of naal3202_service__srv__Naal3202Service_Response.
typedef struct naal3202_service__srv__Naal3202Service_Response__Sequence
{
  naal3202_service__srv__Naal3202Service_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naal3202_service__srv__Naal3202Service_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAAL3202_SERVICE__SRV__DETAIL__NAAL3202_SERVICE__STRUCT_H_
