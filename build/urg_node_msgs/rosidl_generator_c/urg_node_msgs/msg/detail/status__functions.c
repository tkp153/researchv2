// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from urg_node_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "urg_node_msgs/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
urg_node_msgs__msg__Status__init(urg_node_msgs__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // operating_mode
  // area_number
  // error_status
  // error_code
  // lockout_status
  // distance
  // angle
  return true;
}

void
urg_node_msgs__msg__Status__fini(urg_node_msgs__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // operating_mode
  // area_number
  // error_status
  // error_code
  // lockout_status
  // distance
  // angle
}

bool
urg_node_msgs__msg__Status__are_equal(const urg_node_msgs__msg__Status * lhs, const urg_node_msgs__msg__Status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // operating_mode
  if (lhs->operating_mode != rhs->operating_mode) {
    return false;
  }
  // area_number
  if (lhs->area_number != rhs->area_number) {
    return false;
  }
  // error_status
  if (lhs->error_status != rhs->error_status) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // lockout_status
  if (lhs->lockout_status != rhs->lockout_status) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
urg_node_msgs__msg__Status__copy(
  const urg_node_msgs__msg__Status * input,
  urg_node_msgs__msg__Status * output)
{
  if (!input || !output) {
    return false;
  }
  // operating_mode
  output->operating_mode = input->operating_mode;
  // area_number
  output->area_number = input->area_number;
  // error_status
  output->error_status = input->error_status;
  // error_code
  output->error_code = input->error_code;
  // lockout_status
  output->lockout_status = input->lockout_status;
  // distance
  output->distance = input->distance;
  // angle
  output->angle = input->angle;
  return true;
}

urg_node_msgs__msg__Status *
urg_node_msgs__msg__Status__create()
{
  urg_node_msgs__msg__Status * msg = (urg_node_msgs__msg__Status *)malloc(sizeof(urg_node_msgs__msg__Status));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(urg_node_msgs__msg__Status));
  bool success = urg_node_msgs__msg__Status__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
urg_node_msgs__msg__Status__destroy(urg_node_msgs__msg__Status * msg)
{
  if (msg) {
    urg_node_msgs__msg__Status__fini(msg);
  }
  free(msg);
}


bool
urg_node_msgs__msg__Status__Sequence__init(urg_node_msgs__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  urg_node_msgs__msg__Status * data = NULL;
  if (size) {
    data = (urg_node_msgs__msg__Status *)calloc(size, sizeof(urg_node_msgs__msg__Status));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = urg_node_msgs__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        urg_node_msgs__msg__Status__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
urg_node_msgs__msg__Status__Sequence__fini(urg_node_msgs__msg__Status__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      urg_node_msgs__msg__Status__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

urg_node_msgs__msg__Status__Sequence *
urg_node_msgs__msg__Status__Sequence__create(size_t size)
{
  urg_node_msgs__msg__Status__Sequence * array = (urg_node_msgs__msg__Status__Sequence *)malloc(sizeof(urg_node_msgs__msg__Status__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = urg_node_msgs__msg__Status__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
urg_node_msgs__msg__Status__Sequence__destroy(urg_node_msgs__msg__Status__Sequence * array)
{
  if (array) {
    urg_node_msgs__msg__Status__Sequence__fini(array);
  }
  free(array);
}

bool
urg_node_msgs__msg__Status__Sequence__are_equal(const urg_node_msgs__msg__Status__Sequence * lhs, const urg_node_msgs__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!urg_node_msgs__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
urg_node_msgs__msg__Status__Sequence__copy(
  const urg_node_msgs__msg__Status__Sequence * input,
  urg_node_msgs__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(urg_node_msgs__msg__Status);
    urg_node_msgs__msg__Status * data =
      (urg_node_msgs__msg__Status *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!urg_node_msgs__msg__Status__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          urg_node_msgs__msg__Status__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!urg_node_msgs__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
