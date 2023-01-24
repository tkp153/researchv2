# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_chaser_system_c_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED chaser_system_c_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(chaser_system_c_FOUND FALSE)
  elseif(NOT chaser_system_c_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(chaser_system_c_FOUND FALSE)
  endif()
  return()
endif()
set(_chaser_system_c_CONFIG_INCLUDED TRUE)

# output package information
if(NOT chaser_system_c_FIND_QUIETLY)
  message(STATUS "Found chaser_system_c: 0.0.0 (${chaser_system_c_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'chaser_system_c' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${chaser_system_c_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(chaser_system_c_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${chaser_system_c_DIR}/${_extra}")
endforeach()
