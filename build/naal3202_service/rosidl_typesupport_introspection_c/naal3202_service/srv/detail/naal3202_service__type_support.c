// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from naal3202_service:srv/Naal3202Service.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "naal3202_service/srv/detail/naal3202_service__rosidl_typesupport_introspection_c.h"
#include "naal3202_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "naal3202_service/srv/detail/naal3202_service__functions.h"
#include "naal3202_service/srv/detail/naal3202_service__struct.h"


// Include directives for member types
// Member `text`
#include "std_msgs/msg/string.h"
// Member `text`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void naal3202_service__srv__Naal3202Service_Request__rosidl_typesupport_introspection_c__Naal3202Service_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  naal3202_service__srv__Naal3202Service_Request__init(message_memory);
}

void naal3202_service__srv__Naal3202Service_Request__rosidl_typesupport_introspection_c__Naal3202Service_Request_fini_function(void * message_memory)
{
  naal3202_service__srv__Naal3202Service_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember naal3202_service__srv__Naal3202Service_Request__rosidl_typesupport_introspection_c__Naal3202Service_Request_message_member_array[1] = {
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naal3202_service__srv__Naal3202Service_Request, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers naal3202_service__srv__Naal3202Service_Request__rosidl_typesupport_introspection_c__Naal3202Service_Request_message_members = {
  "naal3202_service__srv",  // message namespace
  "Naal3202Service_Request",  // message name
  1,  // number of fields
  sizeof(naal3202_service__srv__Naal3202Service_Request),
  naal3202_service__srv__Naal3202Service_Request__rosidl_typesupport_introspection_c__Naal3202Service_Request_message_member_array,  // message members
  naal3202_service__srv__Naal3202Service_Request__rosidl_typesupport_introspection_c__Naal3202Service_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  naal3202_service__srv__Naal3202Service_Request__rosidl_typesupport_introspection_c__Naal3202Service_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t naal3202_service__srv__Naal3202Service_Request__rosidl_typesupport_introspection_c__Naal3202Service_Request_message_type_support_handle = {
  0,
  &naal3202_service__srv__Naal3202Service_Request__rosidl_typesupport_introspection_c__Naal3202Service_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_naal3202_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, naal3202_service, srv, Naal3202Service_Request)() {
  naal3202_service__srv__Naal3202Service_Request__rosidl_typesupport_introspection_c__Naal3202Service_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  if (!naal3202_service__srv__Naal3202Service_Request__rosidl_typesupport_introspection_c__Naal3202Service_Request_message_type_support_handle.typesupport_identifier) {
    naal3202_service__srv__Naal3202Service_Request__rosidl_typesupport_introspection_c__Naal3202Service_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &naal3202_service__srv__Naal3202Service_Request__rosidl_typesupport_introspection_c__Naal3202Service_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "naal3202_service/srv/detail/naal3202_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "naal3202_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "naal3202_service/srv/detail/naal3202_service__functions.h"
// already included above
// #include "naal3202_service/srv/detail/naal3202_service__struct.h"


// Include directives for member types
// Member `reverse`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void naal3202_service__srv__Naal3202Service_Response__rosidl_typesupport_introspection_c__Naal3202Service_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  naal3202_service__srv__Naal3202Service_Response__init(message_memory);
}

void naal3202_service__srv__Naal3202Service_Response__rosidl_typesupport_introspection_c__Naal3202Service_Response_fini_function(void * message_memory)
{
  naal3202_service__srv__Naal3202Service_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember naal3202_service__srv__Naal3202Service_Response__rosidl_typesupport_introspection_c__Naal3202Service_Response_message_member_array[2] = {
  {
    "reverse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naal3202_service__srv__Naal3202Service_Response, reverse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naal3202_service__srv__Naal3202Service_Response, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers naal3202_service__srv__Naal3202Service_Response__rosidl_typesupport_introspection_c__Naal3202Service_Response_message_members = {
  "naal3202_service__srv",  // message namespace
  "Naal3202Service_Response",  // message name
  2,  // number of fields
  sizeof(naal3202_service__srv__Naal3202Service_Response),
  naal3202_service__srv__Naal3202Service_Response__rosidl_typesupport_introspection_c__Naal3202Service_Response_message_member_array,  // message members
  naal3202_service__srv__Naal3202Service_Response__rosidl_typesupport_introspection_c__Naal3202Service_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  naal3202_service__srv__Naal3202Service_Response__rosidl_typesupport_introspection_c__Naal3202Service_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t naal3202_service__srv__Naal3202Service_Response__rosidl_typesupport_introspection_c__Naal3202Service_Response_message_type_support_handle = {
  0,
  &naal3202_service__srv__Naal3202Service_Response__rosidl_typesupport_introspection_c__Naal3202Service_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_naal3202_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, naal3202_service, srv, Naal3202Service_Response)() {
  if (!naal3202_service__srv__Naal3202Service_Response__rosidl_typesupport_introspection_c__Naal3202Service_Response_message_type_support_handle.typesupport_identifier) {
    naal3202_service__srv__Naal3202Service_Response__rosidl_typesupport_introspection_c__Naal3202Service_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &naal3202_service__srv__Naal3202Service_Response__rosidl_typesupport_introspection_c__Naal3202Service_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "naal3202_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "naal3202_service/srv/detail/naal3202_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers naal3202_service__srv__detail__naal3202_service__rosidl_typesupport_introspection_c__Naal3202Service_service_members = {
  "naal3202_service__srv",  // service namespace
  "Naal3202Service",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // naal3202_service__srv__detail__naal3202_service__rosidl_typesupport_introspection_c__Naal3202Service_Request_message_type_support_handle,
  NULL  // response message
  // naal3202_service__srv__detail__naal3202_service__rosidl_typesupport_introspection_c__Naal3202Service_Response_message_type_support_handle
};

static rosidl_service_type_support_t naal3202_service__srv__detail__naal3202_service__rosidl_typesupport_introspection_c__Naal3202Service_service_type_support_handle = {
  0,
  &naal3202_service__srv__detail__naal3202_service__rosidl_typesupport_introspection_c__Naal3202Service_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, naal3202_service, srv, Naal3202Service_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, naal3202_service, srv, Naal3202Service_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_naal3202_service
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, naal3202_service, srv, Naal3202Service)() {
  if (!naal3202_service__srv__detail__naal3202_service__rosidl_typesupport_introspection_c__Naal3202Service_service_type_support_handle.typesupport_identifier) {
    naal3202_service__srv__detail__naal3202_service__rosidl_typesupport_introspection_c__Naal3202Service_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)naal3202_service__srv__detail__naal3202_service__rosidl_typesupport_introspection_c__Naal3202Service_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, naal3202_service, srv, Naal3202Service_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, naal3202_service, srv, Naal3202Service_Response)()->data;
  }

  return &naal3202_service__srv__detail__naal3202_service__rosidl_typesupport_introspection_c__Naal3202Service_service_type_support_handle;
}
