// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsg:srv/Waypoints.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__SRV__DETAIL__WAYPOINTS__STRUCT_H_
#define MYMSG__SRV__DETAIL__WAYPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

// Struct defined in srv/Waypoints in the package mymsg.
typedef struct mymsg__srv__Waypoints_Request
{
  geometry_msgs__msg__PoseStamped waypoints;
} mymsg__srv__Waypoints_Request;

// Struct for a sequence of mymsg__srv__Waypoints_Request.
typedef struct mymsg__srv__Waypoints_Request__Sequence
{
  mymsg__srv__Waypoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsg__srv__Waypoints_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Waypoints in the package mymsg.
typedef struct mymsg__srv__Waypoints_Response
{
  bool complete;
} mymsg__srv__Waypoints_Response;

// Struct for a sequence of mymsg__srv__Waypoints_Response.
typedef struct mymsg__srv__Waypoints_Response__Sequence
{
  mymsg__srv__Waypoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsg__srv__Waypoints_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSG__SRV__DETAIL__WAYPOINTS__STRUCT_H_
