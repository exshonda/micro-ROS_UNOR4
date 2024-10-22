// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_message:msg/MyCustomMessage.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__STRUCT_H_
#define MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'a'
// Member 'g'
// Member 'm'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/MyCustomMessage in the package my_custom_message.
typedef struct my_custom_message__msg__MyCustomMessage
{
  geometry_msgs__msg__Vector3 a;
  geometry_msgs__msg__Vector3 g;
  geometry_msgs__msg__Vector3 m;
  uint16_t ls1;
  uint16_t ls2;
  uint16_t ls3;
  uint16_t ls4;
  uint16_t ls5;
  uint16_t ls6;
} my_custom_message__msg__MyCustomMessage;

// Struct for a sequence of my_custom_message__msg__MyCustomMessage.
typedef struct my_custom_message__msg__MyCustomMessage__Sequence
{
  my_custom_message__msg__MyCustomMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_message__msg__MyCustomMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__STRUCT_H_
