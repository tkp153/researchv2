// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mymsg:srv/Waypoints.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__SRV__DETAIL__WAYPOINTS__STRUCT_HPP_
#define MYMSG__SRV__DETAIL__WAYPOINTS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mymsg__srv__Waypoints_Request __attribute__((deprecated))
#else
# define DEPRECATED__mymsg__srv__Waypoints_Request __declspec(deprecated)
#endif

namespace mymsg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Waypoints_Request_
{
  using Type = Waypoints_Request_<ContainerAllocator>;

  explicit Waypoints_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_init)
  {
    (void)_init;
  }

  explicit Waypoints_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _waypoints_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _waypoints_type waypoints;

  // setters for named parameter idiom
  Type & set__waypoints(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsg::srv::Waypoints_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsg::srv::Waypoints_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsg::srv::Waypoints_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsg::srv::Waypoints_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsg::srv::Waypoints_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsg::srv::Waypoints_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsg::srv::Waypoints_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsg::srv::Waypoints_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsg::srv::Waypoints_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsg::srv::Waypoints_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsg__srv__Waypoints_Request
    std::shared_ptr<mymsg::srv::Waypoints_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsg__srv__Waypoints_Request
    std::shared_ptr<mymsg::srv::Waypoints_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Waypoints_Request_ & other) const
  {
    if (this->waypoints != other.waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const Waypoints_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Waypoints_Request_

// alias to use template instance with default allocator
using Waypoints_Request =
  mymsg::srv::Waypoints_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mymsg


#ifndef _WIN32
# define DEPRECATED__mymsg__srv__Waypoints_Response __attribute__((deprecated))
#else
# define DEPRECATED__mymsg__srv__Waypoints_Response __declspec(deprecated)
#endif

namespace mymsg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Waypoints_Response_
{
  using Type = Waypoints_Response_<ContainerAllocator>;

  explicit Waypoints_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->complete = false;
    }
  }

  explicit Waypoints_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->complete = false;
    }
  }

  // field types and members
  using _complete_type =
    bool;
  _complete_type complete;

  // setters for named parameter idiom
  Type & set__complete(
    const bool & _arg)
  {
    this->complete = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsg::srv::Waypoints_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsg::srv::Waypoints_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsg::srv::Waypoints_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsg::srv::Waypoints_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsg::srv::Waypoints_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsg::srv::Waypoints_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsg::srv::Waypoints_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsg::srv::Waypoints_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsg::srv::Waypoints_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsg::srv::Waypoints_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsg__srv__Waypoints_Response
    std::shared_ptr<mymsg::srv::Waypoints_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsg__srv__Waypoints_Response
    std::shared_ptr<mymsg::srv::Waypoints_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Waypoints_Response_ & other) const
  {
    if (this->complete != other.complete) {
      return false;
    }
    return true;
  }
  bool operator!=(const Waypoints_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Waypoints_Response_

// alias to use template instance with default allocator
using Waypoints_Response =
  mymsg::srv::Waypoints_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mymsg

namespace mymsg
{

namespace srv
{

struct Waypoints
{
  using Request = mymsg::srv::Waypoints_Request;
  using Response = mymsg::srv::Waypoints_Response;
};

}  // namespace srv

}  // namespace mymsg

#endif  // MYMSG__SRV__DETAIL__WAYPOINTS__STRUCT_HPP_
