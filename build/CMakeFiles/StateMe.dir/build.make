# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Biggest\Documents\StateMe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Biggest\Documents\StateMe\build

# Include any dependencies generated for this target.
include CMakeFiles/StateMe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StateMe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StateMe.dir/flags.make

CMakeFiles/StateMe.dir/main.cpp.obj: CMakeFiles/StateMe.dir/flags.make
CMakeFiles/StateMe.dir/main.cpp.obj: CMakeFiles/StateMe.dir/includes_CXX.rsp
CMakeFiles/StateMe.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Biggest\Documents\StateMe\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StateMe.dir/main.cpp.obj"
	D:\MinGW\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StateMe.dir\main.cpp.obj -c C:\Users\Biggest\Documents\StateMe\main.cpp

CMakeFiles/StateMe.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StateMe.dir/main.cpp.i"
	D:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Biggest\Documents\StateMe\main.cpp > CMakeFiles\StateMe.dir\main.cpp.i

CMakeFiles/StateMe.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StateMe.dir/main.cpp.s"
	D:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Biggest\Documents\StateMe\main.cpp -o CMakeFiles\StateMe.dir\main.cpp.s

# Object files for target StateMe
StateMe_OBJECTS = \
"CMakeFiles/StateMe.dir/main.cpp.obj"

# External object files for target StateMe
StateMe_EXTERNAL_OBJECTS =

bin/StateMe.exe: CMakeFiles/StateMe.dir/main.cpp.obj
bin/StateMe.exe: CMakeFiles/StateMe.dir/build.make
bin/StateMe.exe: CMakeFiles/StateMe.dir/linklibs.rsp
bin/StateMe.exe: CMakeFiles/StateMe.dir/objects1.rsp
bin/StateMe.exe: CMakeFiles/StateMe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Biggest\Documents\StateMe\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin\StateMe.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\StateMe.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StateMe.dir/build: bin/StateMe.exe

.PHONY : CMakeFiles/StateMe.dir/build

CMakeFiles/StateMe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\StateMe.dir\cmake_clean.cmake
.PHONY : CMakeFiles/StateMe.dir/clean

CMakeFiles/StateMe.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Biggest\Documents\StateMe C:\Users\Biggest\Documents\StateMe C:\Users\Biggest\Documents\StateMe\build C:\Users\Biggest\Documents\StateMe\build C:\Users\Biggest\Documents\StateMe\build\CMakeFiles\StateMe.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StateMe.dir/depend

