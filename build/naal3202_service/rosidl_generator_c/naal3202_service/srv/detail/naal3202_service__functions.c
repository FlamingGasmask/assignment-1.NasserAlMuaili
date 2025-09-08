// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from naal3202_service:srv/Naal3202Service.idl
// generated code does not contain a copyright notice
#include "naal3202_service/srv/detail/naal3202_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `text`
#include "std_msgs/msg/detail/string__functions.h"

bool
naal3202_service__srv__Naal3202Service_Request__init(naal3202_service__srv__Naal3202Service_Request * msg)
{
  if (!msg) {
    return false;
  }
  // text
  if (!std_msgs__msg__String__init(&msg->text)) {
    naal3202_service__srv__Naal3202Service_Request__fini(msg);
    return false;
  }
  return true;
}

void
naal3202_service__srv__Naal3202Service_Request__fini(naal3202_service__srv__Naal3202Service_Request * msg)
{
  if (!msg) {
    return;
  }
  // text
  std_msgs__msg__String__fini(&msg->text);
}

bool
naal3202_service__srv__Naal3202Service_Request__are_equal(const naal3202_service__srv__Naal3202Service_Request * lhs, const naal3202_service__srv__Naal3202Service_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // text
  if (!std_msgs__msg__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  return true;
}

bool
naal3202_service__srv__Naal3202Service_Request__copy(
  const naal3202_service__srv__Naal3202Service_Request * input,
  naal3202_service__srv__Naal3202Service_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // text
  if (!std_msgs__msg__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  return true;
}

naal3202_service__srv__Naal3202Service_Request *
naal3202_service__srv__Naal3202Service_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naal3202_service__srv__Naal3202Service_Request * msg = (naal3202_service__srv__Naal3202Service_Request *)allocator.allocate(sizeof(naal3202_service__srv__Naal3202Service_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(naal3202_service__srv__Naal3202Service_Request));
  bool success = naal3202_service__srv__Naal3202Service_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
naal3202_service__srv__Naal3202Service_Request__destroy(naal3202_service__srv__Naal3202Service_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    naal3202_service__srv__Naal3202Service_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
naal3202_service__srv__Naal3202Service_Request__Sequence__init(naal3202_service__srv__Naal3202Service_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naal3202_service__srv__Naal3202Service_Request * data = NULL;

  if (size) {
    data = (naal3202_service__srv__Naal3202Service_Request *)allocator.zero_allocate(size, sizeof(naal3202_service__srv__Naal3202Service_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = naal3202_service__srv__Naal3202Service_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        naal3202_service__srv__Naal3202Service_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
naal3202_service__srv__Naal3202Service_Request__Sequence__fini(naal3202_service__srv__Naal3202Service_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      naal3202_service__srv__Naal3202Service_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

naal3202_service__srv__Naal3202Service_Request__Sequence *
naal3202_service__srv__Naal3202Service_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naal3202_service__srv__Naal3202Service_Request__Sequence * array = (naal3202_service__srv__Naal3202Service_Request__Sequence *)allocator.allocate(sizeof(naal3202_service__srv__Naal3202Service_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = naal3202_service__srv__Naal3202Service_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
naal3202_service__srv__Naal3202Service_Request__Sequence__destroy(naal3202_service__srv__Naal3202Service_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    naal3202_service__srv__Naal3202Service_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
naal3202_service__srv__Naal3202Service_Request__Sequence__are_equal(const naal3202_service__srv__Naal3202Service_Request__Sequence * lhs, const naal3202_service__srv__Naal3202Service_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!naal3202_service__srv__Naal3202Service_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
naal3202_service__srv__Naal3202Service_Request__Sequence__copy(
  const naal3202_service__srv__Naal3202Service_Request__Sequence * input,
  naal3202_service__srv__Naal3202Service_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(naal3202_service__srv__Naal3202Service_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    naal3202_service__srv__Naal3202Service_Request * data =
      (naal3202_service__srv__Naal3202Service_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!naal3202_service__srv__Naal3202Service_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          naal3202_service__srv__Naal3202Service_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!naal3202_service__srv__Naal3202Service_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `reverse`
#include "rosidl_runtime_c/string_functions.h"

bool
naal3202_service__srv__Naal3202Service_Response__init(naal3202_service__srv__Naal3202Service_Response * msg)
{
  if (!msg) {
    return false;
  }
  // reverse
  if (!rosidl_runtime_c__String__init(&msg->reverse)) {
    naal3202_service__srv__Naal3202Service_Response__fini(msg);
    return false;
  }
  // time
  return true;
}

void
naal3202_service__srv__Naal3202Service_Response__fini(naal3202_service__srv__Naal3202Service_Response * msg)
{
  if (!msg) {
    return;
  }
  // reverse
  rosidl_runtime_c__String__fini(&msg->reverse);
  // time
}

bool
naal3202_service__srv__Naal3202Service_Response__are_equal(const naal3202_service__srv__Naal3202Service_Response * lhs, const naal3202_service__srv__Naal3202Service_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reverse
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reverse), &(rhs->reverse)))
  {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  return true;
}

bool
naal3202_service__srv__Naal3202Service_Response__copy(
  const naal3202_service__srv__Naal3202Service_Response * input,
  naal3202_service__srv__Naal3202Service_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // reverse
  if (!rosidl_runtime_c__String__copy(
      &(input->reverse), &(output->reverse)))
  {
    return false;
  }
  // time
  output->time = input->time;
  return true;
}

naal3202_service__srv__Naal3202Service_Response *
naal3202_service__srv__Naal3202Service_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naal3202_service__srv__Naal3202Service_Response * msg = (naal3202_service__srv__Naal3202Service_Response *)allocator.allocate(sizeof(naal3202_service__srv__Naal3202Service_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(naal3202_service__srv__Naal3202Service_Response));
  bool success = naal3202_service__srv__Naal3202Service_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
naal3202_service__srv__Naal3202Service_Response__destroy(naal3202_service__srv__Naal3202Service_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    naal3202_service__srv__Naal3202Service_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
naal3202_service__srv__Naal3202Service_Response__Sequence__init(naal3202_service__srv__Naal3202Service_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naal3202_service__srv__Naal3202Service_Response * data = NULL;

  if (size) {
    data = (naal3202_service__srv__Naal3202Service_Response *)allocator.zero_allocate(size, sizeof(naal3202_service__srv__Naal3202Service_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = naal3202_service__srv__Naal3202Service_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        naal3202_service__srv__Naal3202Service_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
naal3202_service__srv__Naal3202Service_Response__Sequence__fini(naal3202_service__srv__Naal3202Service_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      naal3202_service__srv__Naal3202Service_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

naal3202_service__srv__Naal3202Service_Response__Sequence *
naal3202_service__srv__Naal3202Service_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naal3202_service__srv__Naal3202Service_Response__Sequence * array = (naal3202_service__srv__Naal3202Service_Response__Sequence *)allocator.allocate(sizeof(naal3202_service__srv__Naal3202Service_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = naal3202_service__srv__Naal3202Service_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
naal3202_service__srv__Naal3202Service_Response__Sequence__destroy(naal3202_service__srv__Naal3202Service_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    naal3202_service__srv__Naal3202Service_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
naal3202_service__srv__Naal3202Service_Response__Sequence__are_equal(const naal3202_service__srv__Naal3202Service_Response__Sequence * lhs, const naal3202_service__srv__Naal3202Service_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!naal3202_service__srv__Naal3202Service_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
naal3202_service__srv__Naal3202Service_Response__Sequence__copy(
  const naal3202_service__srv__Naal3202Service_Response__Sequence * input,
  naal3202_service__srv__Naal3202Service_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(naal3202_service__srv__Naal3202Service_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    naal3202_service__srv__Naal3202Service_Response * data =
      (naal3202_service__srv__Naal3202Service_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!naal3202_service__srv__Naal3202Service_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          naal3202_service__srv__Naal3202Service_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!naal3202_service__srv__Naal3202Service_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
