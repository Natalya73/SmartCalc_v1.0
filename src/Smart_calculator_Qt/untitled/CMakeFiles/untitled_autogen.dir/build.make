# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/elmersha/C7_SmartCalc_v1.0-0/src/Smart_calculator_Qt/untitled

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/elmersha/C7_SmartCalc_v1.0-0/src/Smart_calculator_Qt/untitled

# Utility rule file for untitled_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/untitled_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled_autogen.dir/progress.make

CMakeFiles/untitled_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/elmersha/C7_SmartCalc_v1.0-0/src/Smart_calculator_Qt/untitled/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target untitled"
	/usr/local/bin/cmake -E cmake_autogen /Users/elmersha/C7_SmartCalc_v1.0-0/src/Smart_calculator_Qt/untitled/CMakeFiles/untitled_autogen.dir/AutogenInfo.json ""

untitled_autogen: CMakeFiles/untitled_autogen
untitled_autogen: CMakeFiles/untitled_autogen.dir/build.make
.PHONY : untitled_autogen

# Rule to build all files generated by this target.
CMakeFiles/untitled_autogen.dir/build: untitled_autogen
.PHONY : CMakeFiles/untitled_autogen.dir/build

CMakeFiles/untitled_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled_autogen.dir/clean

CMakeFiles/untitled_autogen.dir/depend:
	cd /Users/elmersha/C7_SmartCalc_v1.0-0/src/Smart_calculator_Qt/untitled && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/elmersha/C7_SmartCalc_v1.0-0/src/Smart_calculator_Qt/untitled /Users/elmersha/C7_SmartCalc_v1.0-0/src/Smart_calculator_Qt/untitled /Users/elmersha/C7_SmartCalc_v1.0-0/src/Smart_calculator_Qt/untitled /Users/elmersha/C7_SmartCalc_v1.0-0/src/Smart_calculator_Qt/untitled /Users/elmersha/C7_SmartCalc_v1.0-0/src/Smart_calculator_Qt/untitled/CMakeFiles/untitled_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled_autogen.dir/depend

