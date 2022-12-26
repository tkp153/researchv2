// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from urg_node_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef URG_NODE_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
#define URG_NODE_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__urg_node_msgs__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__urg_node_msgs__msg__Status __declspec(deprecated)
#endif

namespace urg_node_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operating_mode = 0;
      this->area_number = 0;
      this->error_status = false;
      this->error_code = 0;
      this->lockout_status = false;
      this->distance = 0;
      this->angle = 0.0f;
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operating_mode = 0;
      this->area_number = 0;
      this->error_status = false;
      this->error_code = 0;
      this->lockout_status = false;
      this->distance = 0;
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _operating_mode_type =
    uint16_t;
  _operating_mode_type operating_mode;
  using _area_number_type =
    uint16_t;
  _area_number_type area_number;
  using _error_status_type =
    bool;
  _error_status_type error_status;
  using _error_code_type =
    uint16_t;
  _error_code_type error_code;
  using _lockout_status_type =
    bool;
  _lockout_status_type lockout_status;
  using _distance_type =
    uint16_t;
  _distance_type distance;
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__operating_mode(
    const uint16_t & _arg)
  {
    this->operating_mode = _arg;
    return *this;
  }
  Type & set__area_number(
    const uint16_t & _arg)
  {
    this->area_number = _arg;
    return *this;
  }
  Type & set__error_status(
    const bool & _arg)
  {
    this->error_status = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint16_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__lockout_status(
    const bool & _arg)
  {
    this->lockout_status = _arg;
    return *this;
  }
  Type & set__distance(
    const uint16_t & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t NORMAL =
    0u;
  static constexpr uint16_t SETTING =
    1u;

  // pointer types
  using RawPtr =
    urg_node_msgs::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const urg_node_msgs::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<urg_node_msgs::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<urg_node_msgs::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      urg_node_msgs::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<urg_node_msgs::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      urg_node_msgs::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<urg_node_msgs::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<urg_node_msgs::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<urg_node_msgs::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__urg_node_msgs__msg__Status
    std::shared_ptr<urg_node_msgs::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__urg_node_msgs__msg__Status
    std::shared_ptr<urg_node_msgs::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->operating_mode != other.operating_mode) {
      return false;
    }
    if (this->area_number != other.area_number) {
      return false;
    }
    if (this->error_status != other.error_status) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->lockout_status != other.lockout_status) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  urg_node_msgs::msg::Status_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t Status_<ContainerAllocator>::NORMAL;
template<typename ContainerAllocator>
constexpr uint16_t Status_<ContainerAllocator>::SETTING;

}  // namespace msg

}  // namespace urg_node_msgs

#endif  // URG_NODE_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
