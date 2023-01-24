// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mymsg:srv/Waypoints.idl
// generated code does not contain a copyright notice
#include "mymsg/srv/detail/waypoints__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mymsg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mymsg/srv/detail/waypoints__struct.h"
#include "mymsg/srv/detail/waypoints__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose_stamped__functions.h"  // waypoints

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mymsg
size_t get_serialized_size_geometry_msgs__msg__PoseStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mymsg
size_t max_serialized_size_geometry_msgs__msg__PoseStamped(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mymsg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped)();


using _Waypoints_Request__ros_msg_type = mymsg__srv__Waypoints_Request;

static bool _Waypoints_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Waypoints_Request__ros_msg_type * ros_message = static_cast<const _Waypoints_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: waypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->waypoints, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Waypoints_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Waypoints_Request__ros_msg_type * ros_message = static_cast<_Waypoints_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: waypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->waypoints))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsg
size_t get_serialized_size_mymsg__srv__Waypoints_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Waypoints_Request__ros_msg_type * ros_message = static_cast<const _Waypoints_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name waypoints

  current_alignment += get_serialized_size_geometry_msgs__msg__PoseStamped(
    &(ros_message->waypoints), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Waypoints_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mymsg__srv__Waypoints_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsg
size_t max_serialized_size_mymsg__srv__Waypoints_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: waypoints
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__PoseStamped(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Waypoints_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mymsg__srv__Waypoints_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Waypoints_Request = {
  "mymsg::srv",
  "Waypoints_Request",
  _Waypoints_Request__cdr_serialize,
  _Waypoints_Request__cdr_deserialize,
  _Waypoints_Request__get_serialized_size,
  _Waypoints_Request__max_serialized_size
};

static rosidl_message_type_support_t _Waypoints_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Waypoints_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsg, srv, Waypoints_Request)() {
  return &_Waypoints_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mymsg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mymsg/srv/detail/waypoints__struct.h"
// already included above
// #include "mymsg/srv/detail/waypoints__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Waypoints_Response__ros_msg_type = mymsg__srv__Waypoints_Response;

static bool _Waypoints_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Waypoints_Response__ros_msg_type * ros_message = static_cast<const _Waypoints_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: complete
  {
    cdr << (ros_message->complete ? true : false);
  }

  return true;
}

static bool _Waypoints_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Waypoints_Response__ros_msg_type * ros_message = static_cast<_Waypoints_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: complete
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->complete = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsg
size_t get_serialized_size_mymsg__srv__Waypoints_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Waypoints_Response__ros_msg_type * ros_message = static_cast<const _Waypoints_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name complete
  {
    size_t item_size = sizeof(ros_message->complete);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Waypoints_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mymsg__srv__Waypoints_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsg
size_t max_serialized_size_mymsg__srv__Waypoints_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: complete
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Waypoints_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mymsg__srv__Waypoints_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Waypoints_Response = {
  "mymsg::srv",
  "Waypoints_Response",
  _Waypoints_Response__cdr_serialize,
  _Waypoints_Response__cdr_deserialize,
  _Waypoints_Response__get_serialized_size,
  _Waypoints_Response__max_serialized_size
};

static rosidl_message_type_support_t _Waypoints_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Waypoints_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsg, srv, Waypoints_Response)() {
  return &_Waypoints_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mymsg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mymsg/srv/waypoints.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Waypoints__callbacks = {
  "mymsg::srv",
  "Waypoints",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsg, srv, Waypoints_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsg, srv, Waypoints_Response)(),
};

static rosidl_service_type_support_t Waypoints__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Waypoints__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsg, srv, Waypoints)() {
  return &Waypoints__handle;
}

#if defined(__cplusplus)
}
#endif
