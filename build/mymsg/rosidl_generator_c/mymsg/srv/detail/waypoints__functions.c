// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mymsg:srv/Waypoints.idl
// generated code does not contain a copyright notice
#include "mymsg/srv/detail/waypoints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `waypoints`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
mymsg__srv__Waypoints_Request__init(mymsg__srv__Waypoints_Request * msg)
{
  if (!msg) {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__PoseStamped__init(&msg->waypoints)) {
    mymsg__srv__Waypoints_Request__fini(msg);
    return false;
  }
  return true;
}

void
mymsg__srv__Waypoints_Request__fini(mymsg__srv__Waypoints_Request * msg)
{
  if (!msg) {
    return;
  }
  // waypoints
  geometry_msgs__msg__PoseStamped__fini(&msg->waypoints);
}

bool
mymsg__srv__Waypoints_Request__are_equal(const mymsg__srv__Waypoints_Request * lhs, const mymsg__srv__Waypoints_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  return true;
}

bool
mymsg__srv__Waypoints_Request__copy(
  const mymsg__srv__Waypoints_Request * input,
  mymsg__srv__Waypoints_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  return true;
}

mymsg__srv__Waypoints_Request *
mymsg__srv__Waypoints_Request__create()
{
  mymsg__srv__Waypoints_Request * msg = (mymsg__srv__Waypoints_Request *)malloc(sizeof(mymsg__srv__Waypoints_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mymsg__srv__Waypoints_Request));
  bool success = mymsg__srv__Waypoints_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mymsg__srv__Waypoints_Request__destroy(mymsg__srv__Waypoints_Request * msg)
{
  if (msg) {
    mymsg__srv__Waypoints_Request__fini(msg);
  }
  free(msg);
}


bool
mymsg__srv__Waypoints_Request__Sequence__init(mymsg__srv__Waypoints_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mymsg__srv__Waypoints_Request * data = NULL;
  if (size) {
    data = (mymsg__srv__Waypoints_Request *)calloc(size, sizeof(mymsg__srv__Waypoints_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mymsg__srv__Waypoints_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mymsg__srv__Waypoints_Request__fini(&data[i - 1]);
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
mymsg__srv__Waypoints_Request__Sequence__fini(mymsg__srv__Waypoints_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mymsg__srv__Waypoints_Request__fini(&array->data[i]);
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

mymsg__srv__Waypoints_Request__Sequence *
mymsg__srv__Waypoints_Request__Sequence__create(size_t size)
{
  mymsg__srv__Waypoints_Request__Sequence * array = (mymsg__srv__Waypoints_Request__Sequence *)malloc(sizeof(mymsg__srv__Waypoints_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mymsg__srv__Waypoints_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mymsg__srv__Waypoints_Request__Sequence__destroy(mymsg__srv__Waypoints_Request__Sequence * array)
{
  if (array) {
    mymsg__srv__Waypoints_Request__Sequence__fini(array);
  }
  free(array);
}

bool
mymsg__srv__Waypoints_Request__Sequence__are_equal(const mymsg__srv__Waypoints_Request__Sequence * lhs, const mymsg__srv__Waypoints_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mymsg__srv__Waypoints_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mymsg__srv__Waypoints_Request__Sequence__copy(
  const mymsg__srv__Waypoints_Request__Sequence * input,
  mymsg__srv__Waypoints_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mymsg__srv__Waypoints_Request);
    mymsg__srv__Waypoints_Request * data =
      (mymsg__srv__Waypoints_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mymsg__srv__Waypoints_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mymsg__srv__Waypoints_Request__fini(&data[i]);
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
    if (!mymsg__srv__Waypoints_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mymsg__srv__Waypoints_Response__init(mymsg__srv__Waypoints_Response * msg)
{
  if (!msg) {
    return false;
  }
  // complete
  return true;
}

void
mymsg__srv__Waypoints_Response__fini(mymsg__srv__Waypoints_Response * msg)
{
  if (!msg) {
    return;
  }
  // complete
}

bool
mymsg__srv__Waypoints_Response__are_equal(const mymsg__srv__Waypoints_Response * lhs, const mymsg__srv__Waypoints_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // complete
  if (lhs->complete != rhs->complete) {
    return false;
  }
  return true;
}

bool
mymsg__srv__Waypoints_Response__copy(
  const mymsg__srv__Waypoints_Response * input,
  mymsg__srv__Waypoints_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // complete
  output->complete = input->complete;
  return true;
}

mymsg__srv__Waypoints_Response *
mymsg__srv__Waypoints_Response__create()
{
  mymsg__srv__Waypoints_Response * msg = (mymsg__srv__Waypoints_Response *)malloc(sizeof(mymsg__srv__Waypoints_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mymsg__srv__Waypoints_Response));
  bool success = mymsg__srv__Waypoints_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mymsg__srv__Waypoints_Response__destroy(mymsg__srv__Waypoints_Response * msg)
{
  if (msg) {
    mymsg__srv__Waypoints_Response__fini(msg);
  }
  free(msg);
}


bool
mymsg__srv__Waypoints_Response__Sequence__init(mymsg__srv__Waypoints_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mymsg__srv__Waypoints_Response * data = NULL;
  if (size) {
    data = (mymsg__srv__Waypoints_Response *)calloc(size, sizeof(mymsg__srv__Waypoints_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mymsg__srv__Waypoints_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mymsg__srv__Waypoints_Response__fini(&data[i - 1]);
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
mymsg__srv__Waypoints_Response__Sequence__fini(mymsg__srv__Waypoints_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mymsg__srv__Waypoints_Response__fini(&array->data[i]);
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

mymsg__srv__Waypoints_Response__Sequence *
mymsg__srv__Waypoints_Response__Sequence__create(size_t size)
{
  mymsg__srv__Waypoints_Response__Sequence * array = (mymsg__srv__Waypoints_Response__Sequence *)malloc(sizeof(mymsg__srv__Waypoints_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mymsg__srv__Waypoints_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mymsg__srv__Waypoints_Response__Sequence__destroy(mymsg__srv__Waypoints_Response__Sequence * array)
{
  if (array) {
    mymsg__srv__Waypoints_Response__Sequence__fini(array);
  }
  free(array);
}

bool
mymsg__srv__Waypoints_Response__Sequence__are_equal(const mymsg__srv__Waypoints_Response__Sequence * lhs, const mymsg__srv__Waypoints_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mymsg__srv__Waypoints_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mymsg__srv__Waypoints_Response__Sequence__copy(
  const mymsg__srv__Waypoints_Response__Sequence * input,
  mymsg__srv__Waypoints_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mymsg__srv__Waypoints_Response);
    mymsg__srv__Waypoints_Response * data =
      (mymsg__srv__Waypoints_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mymsg__srv__Waypoints_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mymsg__srv__Waypoints_Response__fini(&data[i]);
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
    if (!mymsg__srv__Waypoints_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
