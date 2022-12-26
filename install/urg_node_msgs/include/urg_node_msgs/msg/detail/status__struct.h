// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from urg_node_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef URG_NODE_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
#define URG_NODE_MSGS__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NORMAL'.
enum
{
  urg_node_msgs__msg__Status__NORMAL = 0
};

/// Constant 'SETTING'.
enum
{
  urg_node_msgs__msg__Status__SETTING = 1
};

// Struct defined in msg/Status in the package urg_node_msgs.
typedef struct urg_node_msgs__msg__Status
{
  uint16_t operating_mode;
  uint16_t area_number;
  bool error_status;
  uint16_t error_code;
  bool lockout_status;
  uint16_t distance;
  float angle;
} urg_node_msgs__msg__Status;

// Struct for a sequence of urg_node_msgs__msg__Status.
typedef struct urg_node_msgs__msg__Status__Sequence
{
  urg_node_msgs__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} urg_node_msgs__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // URG_NODE_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
