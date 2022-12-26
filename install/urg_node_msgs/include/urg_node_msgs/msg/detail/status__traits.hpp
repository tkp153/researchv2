// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from urg_node_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef URG_NODE_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
#define URG_NODE_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_

#include "urg_node_msgs/msg/detail/status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<urg_node_msgs::msg::Status>()
{
  return "urg_node_msgs::msg::Status";
}

template<>
inline const char * name<urg_node_msgs::msg::Status>()
{
  return "urg_node_msgs/msg/Status";
}

template<>
struct has_fixed_size<urg_node_msgs::msg::Status>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<urg_node_msgs::msg::Status>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<urg_node_msgs::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // URG_NODE_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
