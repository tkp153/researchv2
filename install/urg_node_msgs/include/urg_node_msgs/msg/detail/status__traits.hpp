// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from urg_node_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef URG_NODE_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
#define URG_NODE_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_

#include "urg_node_msgs/msg/detail/status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const urg_node_msgs::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: operating_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operating_mode: ";
    value_to_yaml(msg.operating_mode, out);
    out << "\n";
  }

  // member: area_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_number: ";
    value_to_yaml(msg.area_number, out);
    out << "\n";
  }

  // member: error_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_status: ";
    value_to_yaml(msg.error_status, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: lockout_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lockout_status: ";
    value_to_yaml(msg.lockout_status, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const urg_node_msgs::msg::Status & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

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
