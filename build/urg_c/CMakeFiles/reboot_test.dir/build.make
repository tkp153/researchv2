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
CMAKE_SOURCE_DIR = /root/researchv2/src/urg_c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/researchv2/build/urg_c

# Include any dependencies generated for this target.
include CMakeFiles/reboot_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/reboot_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/reboot_test.dir/flags.make

CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o: CMakeFiles/reboot_test.dir/flags.make
CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o: /root/researchv2/src/urg_c/current/samples/reboot_test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/researchv2/build/urg_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o   -c /root/researchv2/src/urg_c/current/samples/reboot_test.c

CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/researchv2/src/urg_c/current/samples/reboot_test.c > CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.i

CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/researchv2/src/urg_c/current/samples/reboot_test.c -o CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.s

# Object files for target reboot_test
reboot_test_OBJECTS = \
"CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o"

# External object files for target reboot_test
reboot_test_EXTERNAL_OBJECTS =

reboot_test: CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o
reboot_test: CMakeFiles/reboot_test.dir/build.make
reboot_test: libopen_urg_sensor.a
reboot_test: liburg_c.so
reboot_test: CMakeFiles/reboot_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/researchv2/build/urg_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable reboot_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/reboot_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/reboot_test.dir/build: reboot_test

.PHONY : CMakeFiles/reboot_test.dir/build

CMakeFiles/reboot_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/reboot_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/reboot_test.dir/clean

CMakeFiles/reboot_test.dir/depend:
	cd /root/researchv2/build/urg_c && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/researchv2/src/urg_c /root/researchv2/src/urg_c /root/researchv2/build/urg_c /root/researchv2/build/urg_c /root/researchv2/build/urg_c/CMakeFiles/reboot_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/reboot_test.dir/depend

