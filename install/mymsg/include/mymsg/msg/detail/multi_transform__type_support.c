// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mymsg:msg/MultiTransform.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mymsg/msg/detail/multi_transform__rosidl_typesupport_introspection_c.h"
#include "mymsg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mymsg/msg/detail/multi_transform__functions.h"
#include "mymsg/msg/detail/multi_transform__struct.h"


// Include directives for member types
// Member `transforms`
#include "mymsg/msg/transform.h"
// Member `transforms`
#include "mymsg/msg/detail/transform__rosidl_typesupport_introspection_c.h"
// Member `id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MultiTransform__rosidl_typesupport_introspection_c__MultiTransform_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mymsg__msg__MultiTransform__init(message_memory);
}

void MultiTransform__rosidl_typesupport_introspection_c__MultiTransform_fini_function(void * message_memory)
{
  mymsg__msg__MultiTransform__fini(message_memory);
}

size_t MultiTransform__rosidl_typesupport_introspection_c__size_function__Transform__transforms(
  const void * untyped_member)
{
  const mymsg__msg__Transform__Sequence * member =
    (const mymsg__msg__Transform__Sequence *)(untyped_member);
  return member->size;
}

const void * MultiTransform__rosidl_typesupport_introspection_c__get_const_function__Transform__transforms(
  const void * untyped_member, size_t index)
{
  const mymsg__msg__Transform__Sequence * member =
    (const mymsg__msg__Transform__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MultiTransform__rosidl_typesupport_introspection_c__get_function__Transform__transforms(
  void * untyped_member, size_t index)
{
  mymsg__msg__Transform__Sequence * member =
    (mymsg__msg__Transform__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MultiTransform__rosidl_typesupport_introspection_c__resize_function__Transform__transforms(
  void * untyped_member, size_t size)
{
  mymsg__msg__Transform__Sequence * member =
    (mymsg__msg__Transform__Sequence *)(untyped_member);
  mymsg__msg__Transform__Sequence__fini(member);
  return mymsg__msg__Transform__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MultiTransform__rosidl_typesupport_introspection_c__MultiTransform_message_member_array[2] = {
  {
    "transforms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsg__msg__MultiTransform, transforms),  // bytes offset in struct
    NULL,  // default value
    MultiTransform__rosidl_typesupport_introspection_c__size_function__Transform__transforms,  // size() function pointer
    MultiTransform__rosidl_typesupport_introspection_c__get_const_function__Transform__transforms,  // get_const(index) function pointer
    MultiTransform__rosidl_typesupport_introspection_c__get_function__Transform__transforms,  // get(index) function pointer
    MultiTransform__rosidl_typesupport_introspection_c__resize_function__Transform__transforms  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsg__msg__MultiTransform, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MultiTransform__rosidl_typesupport_introspection_c__MultiTransform_message_members = {
  "mymsg__msg",  // message namespace
  "MultiTransform",  // message name
  2,  // number of fields
  sizeof(mymsg__msg__MultiTransform),
  MultiTransform__rosidl_typesupport_introspection_c__MultiTransform_message_member_array,  // message members
  MultiTransform__rosidl_typesupport_introspection_c__MultiTransform_init_function,  // function to initialize message memory (memory has to be allocated)
  MultiTransform__rosidl_typesupport_introspection_c__MultiTransform_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MultiTransform__rosidl_typesupport_introspection_c__MultiTransform_message_type_support_handle = {
  0,
  &MultiTransform__rosidl_typesupport_introspection_c__MultiTransform_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mymsg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mymsg, msg, MultiTransform)() {
  MultiTransform__rosidl_typesupport_introspection_c__MultiTransform_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mymsg, msg, Transform)();
  if (!MultiTransform__rosidl_typesupport_introspection_c__MultiTransform_message_type_support_handle.typesupport_identifier) {
    MultiTransform__rosidl_typesupport_introspection_c__MultiTransform_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MultiTransform__rosidl_typesupport_introspection_c__MultiTransform_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
