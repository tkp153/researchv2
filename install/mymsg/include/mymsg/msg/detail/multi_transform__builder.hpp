// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsg:msg/MultiTransform.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__MULTI_TRANSFORM__BUILDER_HPP_
#define MYMSG__MSG__DETAIL__MULTI_TRANSFORM__BUILDER_HPP_

#include "mymsg/msg/detail/multi_transform__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsg
{

namespace msg
{

namespace builder
{

class Init_MultiTransform_id
{
public:
  explicit Init_MultiTransform_id(::mymsg::msg::MultiTransform & msg)
  : msg_(msg)
  {}
  ::mymsg::msg::MultiTransform id(::mymsg::msg::MultiTransform::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsg::msg::MultiTransform msg_;
};

class Init_MultiTransform_transforms
{
public:
  Init_MultiTransform_transforms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiTransform_id transforms(::mymsg::msg::MultiTransform::_transforms_type arg)
  {
    msg_.transforms = std::move(arg);
    return Init_MultiTransform_id(msg_);
  }

private:
  ::mymsg::msg::MultiTransform msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsg::msg::MultiTransform>()
{
  return mymsg::msg::builder::Init_MultiTransform_transforms();
}

}  // namespace mymsg

#endif  // MYMSG__MSG__DETAIL__MULTI_TRANSFORM__BUILDER_HPP_
