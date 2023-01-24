// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mymsg:msg/Transform.idl
// generated code does not contain a copyright notice
#include "mymsg/msg/detail/transform__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `transform`
#include "geometry_msgs/msg/detail/transform__functions.h"

bool
mymsg__msg__Transform__init(mymsg__msg__Transform * msg)
{
  if (!msg) {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Transform__init(&msg->transform)) {
    mymsg__msg__Transform__fini(msg);
    return false;
  }
  return true;
}

void
mymsg__msg__Transform__fini(mymsg__msg__Transform * msg)
{
  if (!msg) {
    return;
  }
  // transform
  geometry_msgs__msg__Transform__fini(&msg->transform);
}

bool
mymsg__msg__Transform__are_equal(const mymsg__msg__Transform * lhs, const mymsg__msg__Transform * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->transform), &(rhs->transform)))
  {
    return false;
  }
  return true;
}

bool
mymsg__msg__Transform__copy(
  const mymsg__msg__Transform * input,
  mymsg__msg__Transform * output)
{
  if (!input || !output) {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Transform__copy(
      &(input->transform), &(output->transform)))
  {
    return false;
  }
  return true;
}

mymsg__msg__Transform *
mymsg__msg__Transform__create()
{
  mymsg__msg__Transform * msg = (mymsg__msg__Transform *)malloc(sizeof(mymsg__msg__Transform));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mymsg__msg__Transform));
  bool success = mymsg__msg__Transform__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mymsg__msg__Transform__destroy(mymsg__msg__Transform * msg)
{
  if (msg) {
    mymsg__msg__Transform__fini(msg);
  }
  free(msg);
}


bool
mymsg__msg__Transform__Sequence__init(mymsg__msg__Transform__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mymsg__msg__Transform * data = NULL;
  if (size) {
    data = (mymsg__msg__Transform *)calloc(size, sizeof(mymsg__msg__Transform));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mymsg__msg__Transform__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mymsg__msg__Transform__fini(&data[i - 1]);
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
mymsg__msg__Transform__Sequence__fini(mymsg__msg__Transform__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mymsg__msg__Transform__fini(&array->data[i]);
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

mymsg__msg__Transform__Sequence *
mymsg__msg__Transform__Sequence__create(size_t size)
{
  mymsg__msg__Transform__Sequence * array = (mymsg__msg__Transform__Sequence *)malloc(sizeof(mymsg__msg__Transform__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mymsg__msg__Transform__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mymsg__msg__Transform__Sequence__destroy(mymsg__msg__Transform__Sequence * array)
{
  if (array) {
    mymsg__msg__Transform__Sequence__fini(array);
  }
  free(array);
}

bool
mymsg__msg__Transform__Sequence__are_equal(const mymsg__msg__Transform__Sequence * lhs, const mymsg__msg__Transform__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mymsg__msg__Transform__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mymsg__msg__Transform__Sequence__copy(
  const mymsg__msg__Transform__Sequence * input,
  mymsg__msg__Transform__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mymsg__msg__Transform);
    mymsg__msg__Transform * data =
      (mymsg__msg__Transform *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mymsg__msg__Transform__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mymsg__msg__Transform__fini(&data[i]);
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
    if (!mymsg__msg__Transform__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
