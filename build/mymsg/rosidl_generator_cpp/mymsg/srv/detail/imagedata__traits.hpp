// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsg:srv/Imagedata.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__SRV__DETAIL__IMAGEDATA__TRAITS_HPP_
#define MYMSG__SRV__DETAIL__IMAGEDATA__TRAITS_HPP_

#include "mymsg/srv/detail/imagedata__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'input_data'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const mymsg::srv::Imagedata_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_data:\n";
    to_yaml(msg.input_data, out, indentation + 2);
  }

  // member: input_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_count: ";
    value_to_yaml(msg.input_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mymsg::srv::Imagedata_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mymsg::srv::Imagedata_Request>()
{
  return "mymsg::srv::Imagedata_Request";
}

template<>
inline const char * name<mymsg::srv::Imagedata_Request>()
{
  return "mymsg/srv/Imagedata_Request";
}

template<>
struct has_fixed_size<mymsg::srv::Imagedata_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<mymsg::srv::Imagedata_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<mymsg::srv::Imagedata_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'output_data'
// already included above
// #include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const mymsg::srv::Imagedata_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: output_cut
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_cut: ";
    value_to_yaml(msg.output_cut, out);
    out << "\n";
  }

  // member: output_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_count: ";
    value_to_yaml(msg.output_count, out);
    out << "\n";
  }

  // member: output_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_data:\n";
    to_yaml(msg.output_data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mymsg::srv::Imagedata_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mymsg::srv::Imagedata_Response>()
{
  return "mymsg::srv::Imagedata_Response";
}

template<>
inline const char * name<mymsg::srv::Imagedata_Response>()
{
  return "mymsg/srv/Imagedata_Response";
}

template<>
struct has_fixed_size<mymsg::srv::Imagedata_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<mymsg::srv::Imagedata_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<mymsg::srv::Imagedata_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsg::srv::Imagedata>()
{
  return "mymsg::srv::Imagedata";
}

template<>
inline const char * name<mymsg::srv::Imagedata>()
{
  return "mymsg/srv/Imagedata";
}

template<>
struct has_fixed_size<mymsg::srv::Imagedata>
  : std::integral_constant<
    bool,
    has_fixed_size<mymsg::srv::Imagedata_Request>::value &&
    has_fixed_size<mymsg::srv::Imagedata_Response>::value
  >
{
};

template<>
struct has_bounded_size<mymsg::srv::Imagedata>
  : std::integral_constant<
    bool,
    has_bounded_size<mymsg::srv::Imagedata_Request>::value &&
    has_bounded_size<mymsg::srv::Imagedata_Response>::value
  >
{
};

template<>
struct is_service<mymsg::srv::Imagedata>
  : std::true_type
{
};

template<>
struct is_service_request<mymsg::srv::Imagedata_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mymsg::srv::Imagedata_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYMSG__SRV__DETAIL__IMAGEDATA__TRAITS_HPP_
