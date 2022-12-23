// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mymsg:msg/Poses.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mymsg/msg/detail/poses__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mymsg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Poses_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mymsg::msg::Poses(_init);
}

void Poses_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mymsg::msg::Poses *>(message_memory);
  typed_message->~Poses();
}

size_t size_function__Poses__poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mymsg::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Poses__poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mymsg::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__Poses__poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mymsg::msg::Pose> *>(untyped_member);
  return &member[index];
}

void resize_function__Poses__poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mymsg::msg::Pose> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Poses__id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Poses__id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Poses__id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__Poses__id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Poses_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsg::msg::Poses, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mymsg::msg::Pose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsg::msg::Poses, poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__Poses__poses,  // size() function pointer
    get_const_function__Poses__poses,  // get_const(index) function pointer
    get_function__Poses__poses,  // get(index) function pointer
    resize_function__Poses__poses  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsg::msg::Poses, id),  // bytes offset in struct
    nullptr,  // default value
    size_function__Poses__id,  // size() function pointer
    get_const_function__Poses__id,  // get_const(index) function pointer
    get_function__Poses__id,  // get(index) function pointer
    resize_function__Poses__id  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Poses_message_members = {
  "mymsg::msg",  // message namespace
  "Poses",  // message name
  3,  // number of fields
  sizeof(mymsg::msg::Poses),
  Poses_message_member_array,  // message members
  Poses_init_function,  // function to initialize message memory (memory has to be allocated)
  Poses_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Poses_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Poses_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mymsg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mymsg::msg::Poses>()
{
  return &::mymsg::msg::rosidl_typesupport_introspection_cpp::Poses_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mymsg, msg, Poses)() {
  return &::mymsg::msg::rosidl_typesupport_introspection_cpp::Poses_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
