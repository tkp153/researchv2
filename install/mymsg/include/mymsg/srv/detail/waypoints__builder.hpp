// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsg:srv/Waypoints.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__SRV__DETAIL__WAYPOINTS__BUILDER_HPP_
#define MYMSG__SRV__DETAIL__WAYPOINTS__BUILDER_HPP_

#include "mymsg/srv/detail/waypoints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsg
{

namespace srv
{

namespace builder
{

class Init_Waypoints_Request_waypoints
{
public:
  Init_Waypoints_Request_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mymsg::srv::Waypoints_Request waypoints(::mymsg::srv::Waypoints_Request::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsg::srv::Waypoints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsg::srv::Waypoints_Request>()
{
  return mymsg::srv::builder::Init_Waypoints_Request_waypoints();
}

}  // namespace mymsg


namespace mymsg
{

namespace srv
{

namespace builder
{

class Init_Waypoints_Response_complete
{
public:
  Init_Waypoints_Response_complete()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mymsg::srv::Waypoints_Response complete(::mymsg::srv::Waypoints_Response::_complete_type arg)
  {
    msg_.complete = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsg::srv::Waypoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsg::srv::Waypoints_Response>()
{
  return mymsg::srv::builder::Init_Waypoints_Response_complete();
}

}  // namespace mymsg

#endif  // MYMSG__SRV__DETAIL__WAYPOINTS__BUILDER_HPP_
