// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsg:msg/Poses.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__POSES__STRUCT_H_
#define MYMSG__MSG__DETAIL__POSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'poses'
#include "mymsg/msg/detail/pose__struct.h"
// Member 'id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Poses in the package mymsg.
typedef struct mymsg__msg__Poses
{
  std_msgs__msg__Header header;
  mymsg__msg__Pose__Sequence poses;
  rosidl_runtime_c__String__Sequence id;
} mymsg__msg__Poses;

// Struct for a sequence of mymsg__msg__Poses.
typedef struct mymsg__msg__Poses__Sequence
{
  mymsg__msg__Poses * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsg__msg__Poses__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSG__MSG__DETAIL__POSES__STRUCT_H_
