// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsg:msg/MultiTransform.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__MULTI_TRANSFORM__TRAITS_HPP_
#define MYMSG__MSG__DETAIL__MULTI_TRANSFORM__TRAITS_HPP_

#include "mymsg/msg/detail/multi_transform__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'transforms'
#include "mymsg/msg/detail/transform__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const mymsg::msg::MultiTransform & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: transforms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.transforms.size() == 0) {
      out << "transforms: []\n";
    } else {
      out << "transforms:\n";
      for (auto item : msg.transforms) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.id.size() == 0) {
      out << "id: []\n";
    } else {
      out << "id:\n";
      for (auto item : msg.id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mymsg::msg::MultiTransform & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mymsg::msg::MultiTransform>()
{
  return "mymsg::msg::MultiTransform";
}

template<>
inline const char * name<mymsg::msg::MultiTransform>()
{
  return "mymsg/msg/MultiTransform";
}

template<>
struct has_fixed_size<mymsg::msg::MultiTransform>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mymsg::msg::MultiTransform>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mymsg::msg::MultiTransform>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYMSG__MSG__DETAIL__MULTI_TRANSFORM__TRAITS_HPP_
