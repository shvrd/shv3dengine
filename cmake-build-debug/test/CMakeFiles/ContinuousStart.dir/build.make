# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /opt/JetBrains/apps/CLion/ch-0/181.4445.84/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/JetBrains/apps/CLion/ch-0/181.4445.84/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/thekatze/CLionProjects/shv3dengine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thekatze/CLionProjects/shv3dengine/cmake-build-debug

# Utility rule file for ContinuousStart.

# Include the progress variables for this target.
include test/CMakeFiles/ContinuousStart.dir/progress.make

test/CMakeFiles/ContinuousStart:
	cd /home/thekatze/CLionProjects/shv3dengine/cmake-build-debug/test && /opt/JetBrains/apps/CLion/ch-0/181.4445.84/bin/cmake/bin/ctest -D ContinuousStart

ContinuousStart: test/CMakeFiles/ContinuousStart
ContinuousStart: test/CMakeFiles/ContinuousStart.dir/build.make

.PHONY : ContinuousStart

# Rule to build all files generated by this target.
test/CMakeFiles/ContinuousStart.dir/build: ContinuousStart

.PHONY : test/CMakeFiles/ContinuousStart.dir/build

test/CMakeFiles/ContinuousStart.dir/clean:
	cd /home/thekatze/CLionProjects/shv3dengine/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/ContinuousStart.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/ContinuousStart.dir/clean

test/CMakeFiles/ContinuousStart.dir/depend:
	cd /home/thekatze/CLionProjects/shv3dengine/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thekatze/CLionProjects/shv3dengine /home/thekatze/CLionProjects/shv3dengine/test /home/thekatze/CLionProjects/shv3dengine/cmake-build-debug /home/thekatze/CLionProjects/shv3dengine/cmake-build-debug/test /home/thekatze/CLionProjects/shv3dengine/cmake-build-debug/test/CMakeFiles/ContinuousStart.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/ContinuousStart.dir/depend

