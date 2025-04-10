# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anassaif/test-shared/predictor/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anassaif/test-shared/predictor/src/build

# Include any dependencies generated for this target.
include predictor_build/CMakeFiles/predictor.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include predictor_build/CMakeFiles/predictor.dir/compiler_depend.make

# Include the progress variables for this target.
include predictor_build/CMakeFiles/predictor.dir/progress.make

# Include the compile flags for this target's objects.
include predictor_build/CMakeFiles/predictor.dir/flags.make

predictor_build/CMakeFiles/predictor.dir/Predictor.cpp.o: predictor_build/CMakeFiles/predictor.dir/flags.make
predictor_build/CMakeFiles/predictor.dir/Predictor.cpp.o: ../../Predictor.cpp
predictor_build/CMakeFiles/predictor.dir/Predictor.cpp.o: predictor_build/CMakeFiles/predictor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anassaif/test-shared/predictor/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object predictor_build/CMakeFiles/predictor.dir/Predictor.cpp.o"
	cd /home/anassaif/test-shared/predictor/src/build/predictor_build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT predictor_build/CMakeFiles/predictor.dir/Predictor.cpp.o -MF CMakeFiles/predictor.dir/Predictor.cpp.o.d -o CMakeFiles/predictor.dir/Predictor.cpp.o -c /home/anassaif/test-shared/predictor/Predictor.cpp

predictor_build/CMakeFiles/predictor.dir/Predictor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/predictor.dir/Predictor.cpp.i"
	cd /home/anassaif/test-shared/predictor/src/build/predictor_build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anassaif/test-shared/predictor/Predictor.cpp > CMakeFiles/predictor.dir/Predictor.cpp.i

predictor_build/CMakeFiles/predictor.dir/Predictor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/predictor.dir/Predictor.cpp.s"
	cd /home/anassaif/test-shared/predictor/src/build/predictor_build && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anassaif/test-shared/predictor/Predictor.cpp -o CMakeFiles/predictor.dir/Predictor.cpp.s

# Object files for target predictor
predictor_OBJECTS = \
"CMakeFiles/predictor.dir/Predictor.cpp.o"

# External object files for target predictor
predictor_EXTERNAL_OBJECTS =

predictor_build/libpredictor.so: predictor_build/CMakeFiles/predictor.dir/Predictor.cpp.o
predictor_build/libpredictor.so: predictor_build/CMakeFiles/predictor.dir/build.make
predictor_build/libpredictor.so: ../../libs/libcoreutils.a
predictor_build/libpredictor.so: predictor_build/CMakeFiles/predictor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anassaif/test-shared/predictor/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libpredictor.so"
	cd /home/anassaif/test-shared/predictor/src/build/predictor_build && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/predictor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
predictor_build/CMakeFiles/predictor.dir/build: predictor_build/libpredictor.so
.PHONY : predictor_build/CMakeFiles/predictor.dir/build

predictor_build/CMakeFiles/predictor.dir/clean:
	cd /home/anassaif/test-shared/predictor/src/build/predictor_build && $(CMAKE_COMMAND) -P CMakeFiles/predictor.dir/cmake_clean.cmake
.PHONY : predictor_build/CMakeFiles/predictor.dir/clean

predictor_build/CMakeFiles/predictor.dir/depend:
	cd /home/anassaif/test-shared/predictor/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anassaif/test-shared/predictor/src /home/anassaif/test-shared/predictor /home/anassaif/test-shared/predictor/src/build /home/anassaif/test-shared/predictor/src/build/predictor_build /home/anassaif/test-shared/predictor/src/build/predictor_build/CMakeFiles/predictor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : predictor_build/CMakeFiles/predictor.dir/depend

