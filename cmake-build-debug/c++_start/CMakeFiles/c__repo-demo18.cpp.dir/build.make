# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2022.3.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2022.3.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\clion-repo\c_tutrial

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\clion-repo\c_tutrial\cmake-build-debug

# Include any dependencies generated for this target.
include c++_start/CMakeFiles/c__repo-demo18.cpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include c++_start/CMakeFiles/c__repo-demo18.cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include c++_start/CMakeFiles/c__repo-demo18.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include c++_start/CMakeFiles/c__repo-demo18.cpp.dir/flags.make

c++_start/CMakeFiles/c__repo-demo18.cpp.dir/demo18.cpp.obj: c++_start/CMakeFiles/c__repo-demo18.cpp.dir/flags.make
c++_start/CMakeFiles/c__repo-demo18.cpp.dir/demo18.cpp.obj: c++_start/CMakeFiles/c__repo-demo18.cpp.dir/includes_CXX.rsp
c++_start/CMakeFiles/c__repo-demo18.cpp.dir/demo18.cpp.obj: E:/clion-repo/c_tutrial/c++_start/demo18.cpp
c++_start/CMakeFiles/c__repo-demo18.cpp.dir/demo18.cpp.obj: c++_start/CMakeFiles/c__repo-demo18.cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\clion-repo\c_tutrial\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object c++_start/CMakeFiles/c__repo-demo18.cpp.dir/demo18.cpp.obj"
	cd /d E:\clion-repo\c_tutrial\cmake-build-debug\c++_start && "D:\Program Files\JetBrains\CLion 2022.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT c++_start/CMakeFiles/c__repo-demo18.cpp.dir/demo18.cpp.obj -MF CMakeFiles\c__repo-demo18.cpp.dir\demo18.cpp.obj.d -o CMakeFiles\c__repo-demo18.cpp.dir\demo18.cpp.obj -c E:\clion-repo\c_tutrial\c++_start\demo18.cpp

c++_start/CMakeFiles/c__repo-demo18.cpp.dir/demo18.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c__repo-demo18.cpp.dir/demo18.cpp.i"
	cd /d E:\clion-repo\c_tutrial\cmake-build-debug\c++_start && "D:\Program Files\JetBrains\CLion 2022.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\clion-repo\c_tutrial\c++_start\demo18.cpp > CMakeFiles\c__repo-demo18.cpp.dir\demo18.cpp.i

c++_start/CMakeFiles/c__repo-demo18.cpp.dir/demo18.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c__repo-demo18.cpp.dir/demo18.cpp.s"
	cd /d E:\clion-repo\c_tutrial\cmake-build-debug\c++_start && "D:\Program Files\JetBrains\CLion 2022.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\clion-repo\c_tutrial\c++_start\demo18.cpp -o CMakeFiles\c__repo-demo18.cpp.dir\demo18.cpp.s

# Object files for target c__repo-demo18.cpp
c__repo__demo18_cpp_OBJECTS = \
"CMakeFiles/c__repo-demo18.cpp.dir/demo18.cpp.obj"

# External object files for target c__repo-demo18.cpp
c__repo__demo18_cpp_EXTERNAL_OBJECTS =

c++_start/c__repo-demo18.cpp.exe: c++_start/CMakeFiles/c__repo-demo18.cpp.dir/demo18.cpp.obj
c++_start/c__repo-demo18.cpp.exe: c++_start/CMakeFiles/c__repo-demo18.cpp.dir/build.make
c++_start/c__repo-demo18.cpp.exe: c++_start/CMakeFiles/c__repo-demo18.cpp.dir/linklibs.rsp
c++_start/c__repo-demo18.cpp.exe: c++_start/CMakeFiles/c__repo-demo18.cpp.dir/objects1.rsp
c++_start/c__repo-demo18.cpp.exe: c++_start/CMakeFiles/c__repo-demo18.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\clion-repo\c_tutrial\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable c__repo-demo18.cpp.exe"
	cd /d E:\clion-repo\c_tutrial\cmake-build-debug\c++_start && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\c__repo-demo18.cpp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
c++_start/CMakeFiles/c__repo-demo18.cpp.dir/build: c++_start/c__repo-demo18.cpp.exe
.PHONY : c++_start/CMakeFiles/c__repo-demo18.cpp.dir/build

c++_start/CMakeFiles/c__repo-demo18.cpp.dir/clean:
	cd /d E:\clion-repo\c_tutrial\cmake-build-debug\c++_start && $(CMAKE_COMMAND) -P CMakeFiles\c__repo-demo18.cpp.dir\cmake_clean.cmake
.PHONY : c++_start/CMakeFiles/c__repo-demo18.cpp.dir/clean

c++_start/CMakeFiles/c__repo-demo18.cpp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\clion-repo\c_tutrial E:\clion-repo\c_tutrial\c++_start E:\clion-repo\c_tutrial\cmake-build-debug E:\clion-repo\c_tutrial\cmake-build-debug\c++_start E:\clion-repo\c_tutrial\cmake-build-debug\c++_start\CMakeFiles\c__repo-demo18.cpp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : c++_start/CMakeFiles/c__repo-demo18.cpp.dir/depend

