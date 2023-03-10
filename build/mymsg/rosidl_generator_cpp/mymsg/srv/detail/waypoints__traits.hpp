// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsg:srv/Waypoints.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__SRV__DETAIL__WAYPOINTS__TRAITS_HPP_
#define MYMSG__SRV__DETAIL__WAYPOINTS__TRAITS_HPP_

#include "mymsg/srv/detail/waypoints__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const mymsg::srv::Waypoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoints:\n";
    to_yaml(msg.waypoints, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mymsg::srv::Waypoints_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mymsg::srv::Waypoints_Request>()
{
  return "mymsg::srv::Waypoints_Request";
}

template<>
inline const char * name<mymsg::srv::Waypoints_Request>()
{
  return "mymsg/srv/Waypoints_Request";
}

template<>
struct has_fixed_size<mymsg::srv::Waypoints_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<mymsg::srv::Waypoints_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<mymsg::srv::Waypoints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const mymsg::srv::Waypoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: complete
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "complete: ";
    value_to_yaml(msg.complete, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mymsg::srv::Waypoints_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mymsg::srv::Waypoints_Response>()
{
  return "mymsg::srv::Waypoints_Response";
}

template<>
inline const char * name<mymsg::srv::Waypoints_Response>()
{
  return "mymsg/srv/Waypoints_Response";
}

template<>
struct has_fixed_size<mymsg::srv::Waypoints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mymsg::srv::Waypoints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mymsg::srv::Waypoints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsg::srv::Waypoints>()
{
  return "mymsg::srv::Waypoints";
}

template<>
inline const char * name<mymsg::srv::Waypoints>()
{
  return "mymsg/srv/Waypoints";
}

template<>
struct has_fixed_size<mymsg::srv::Waypoints>
  : std::integral_constant<
    bool,
    has_fixed_size<mymsg::srv::Waypoints_Request>::value &&
    has_fixed_size<mymsg::srv::Waypoints_Response>::value
  >
{
};

template<>
struct has_bounded_size<mymsg::srv::Waypoints>
  : std::integral_constant<
    bool,
    has_bounded_size<mymsg::srv::Waypoints_Request>::value &&
    has_bounded_size<mymsg::srv::Waypoints_Response>::value
  >
{
};

template<>
struct is_service<mymsg::srv::Waypoints>
  : std::true_type
{
};

template<>
struct is_service_request<mymsg::srv::Waypoints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mymsg::srv::Waypoints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYMSG__SRV__DETAIL__WAYPOINTS__TRAITS_HPP_
