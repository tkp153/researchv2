# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/researchv2/src/diagnostics/self_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/researchv2/build/self_test

# Include any dependencies generated for this target.
include test/CMakeFiles/test_nominal_selftest.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/test_nominal_selftest.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/test_nominal_selftest.dir/flags.make

test/CMakeFiles/test_nominal_selftest.dir/nominal_selftest.cpp.o: test/CMakeFiles/test_nominal_selftest.dir/flags.make
test/CMakeFiles/test_nominal_selftest.dir/nominal_selftest.cpp.o: /root/researchv2/src/diagnostics/self_test/test/nominal_selftest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/researchv2/build/self_test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/test_nominal_selftest.dir/nominal_selftest.cpp.o"
	cd /root/researchv2/build/self_test/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_nominal_selftest.dir/nominal_selftest.cpp.o -c /root/researchv2/src/diagnostics/self_test/test/nominal_selftest.cpp

test/CMakeFiles/test_nominal_selftest.dir/nominal_selftest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_nominal_selftest.dir/nominal_selftest.cpp.i"
	cd /root/researchv2/build/self_test/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/researchv2/src/diagnostics/self_test/test/nominal_selftest.cpp > CMakeFiles/test_nominal_selftest.dir/nominal_selftest.cpp.i

test/CMakeFiles/test_nominal_selftest.dir/nominal_selftest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_nominal_selftest.dir/nominal_selftest.cpp.s"
	cd /root/researchv2/build/self_test/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/researchv2/src/diagnostics/self_test/test/nominal_selftest.cpp -o CMakeFiles/test_nominal_selftest.dir/nominal_selftest.cpp.s

# Object files for target test_nominal_selftest
test_nominal_selftest_OBJECTS = \
"CMakeFiles/test_nominal_selftest.dir/nominal_selftest.cpp.o"

# External object files for target test_nominal_selftest
test_nominal_selftest_EXTERNAL_OBJECTS =

test/test_nominal_selftest: test/CMakeFiles/test_nominal_selftest.dir/nominal_selftest.cpp.o
test/test_nominal_selftest: test/CMakeFiles/test_nominal_selftest.dir/build.make
test/test_nominal_selftest: gtest/libgtest_main.a
test/test_nominal_selftest: gtest/libgtest.a
test/test_nominal_selftest: /opt/ros/galactic/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libdiagnostic_msgs__rosidl_typesupport_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libdiagnostic_msgs__rosidl_typesupport_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librclcpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libdiagnostic_msgs__rosidl_generator_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libdiagnostic_msgs__rosidl_generator_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libdiagnostic_msgs__rosidl_typesupport_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libdiagnostic_msgs__rosidl_typesupport_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_generator_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librcutils.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librcpputils.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosidl_runtime_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosidl_typesupport_introspection_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosidl_typesupport_introspection_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_generator_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosidl_typesupport_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosidl_typesupport_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librcl_yaml_param_parser.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_generator_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libtracetools.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librclcpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libament_index_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/liblibstatistics_collector.so
test/test_nominal_selftest: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librcl.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librcl_yaml_param_parser.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libtracetools.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstd_msgs__rosidl_generator_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstd_msgs__rosidl_generator_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librcl_interfaces__rosidl_generator_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librmw_implementation.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librcl_logging_spdlog.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librcl_logging_interface.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libyaml.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librmw.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_generator_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_generator_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_generator_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosidl_typesupport_introspection_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosidl_typesupport_introspection_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosidl_typesupport_cpp.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosidl_typesupport_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librcpputils.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librosidl_runtime_c.so
test/test_nominal_selftest: /opt/ros/galactic/lib/librcutils.so
test/test_nominal_selftest: test/CMakeFiles/test_nominal_selftest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/researchv2/build/self_test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_nominal_selftest"
	cd /root/researchv2/build/self_test/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_nominal_selftest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/test_nominal_selftest.dir/build: test/test_nominal_selftest

.PHONY : test/CMakeFiles/test_nominal_selftest.dir/build

test/CMakeFiles/test_nominal_selftest.dir/clean:
	cd /root/researchv2/build/self_test/test && $(CMAKE_COMMAND) -P CMakeFiles/test_nominal_selftest.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/test_nominal_selftest.dir/clean

test/CMakeFiles/test_nominal_selftest.dir/depend:
	cd /root/researchv2/build/self_test && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/researchv2/src/diagnostics/self_test /root/researchv2/src/diagnostics/self_test/test /root/researchv2/build/self_test /root/researchv2/build/self_test/test /root/researchv2/build/self_test/test/CMakeFiles/test_nominal_selftest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/test_nominal_selftest.dir/depend

