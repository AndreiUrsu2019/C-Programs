# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Projects\Test.cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Projects\Test.cpp\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Test_cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Test_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Test_cpp.dir/flags.make

CMakeFiles/Test_cpp.dir/main.cpp.obj: CMakeFiles/Test_cpp.dir/flags.make
CMakeFiles/Test_cpp.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Projects\Test.cpp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Test_cpp.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Test_cpp.dir\main.cpp.obj -c C:\Projects\Test.cpp\main.cpp

CMakeFiles/Test_cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test_cpp.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Projects\Test.cpp\main.cpp > CMakeFiles\Test_cpp.dir\main.cpp.i

CMakeFiles/Test_cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test_cpp.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Projects\Test.cpp\main.cpp -o CMakeFiles\Test_cpp.dir\main.cpp.s

# Object files for target Test_cpp
Test_cpp_OBJECTS = \
"CMakeFiles/Test_cpp.dir/main.cpp.obj"

# External object files for target Test_cpp
Test_cpp_EXTERNAL_OBJECTS =

Test_cpp.exe: CMakeFiles/Test_cpp.dir/main.cpp.obj
Test_cpp.exe: CMakeFiles/Test_cpp.dir/build.make
Test_cpp.exe: CMakeFiles/Test_cpp.dir/linklibs.rsp
Test_cpp.exe: CMakeFiles/Test_cpp.dir/objects1.rsp
Test_cpp.exe: CMakeFiles/Test_cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Projects\Test.cpp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Test_cpp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Test_cpp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Test_cpp.dir/build: Test_cpp.exe

.PHONY : CMakeFiles/Test_cpp.dir/build

CMakeFiles/Test_cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Test_cpp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Test_cpp.dir/clean

CMakeFiles/Test_cpp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Projects\Test.cpp C:\Projects\Test.cpp C:\Projects\Test.cpp\cmake-build-debug C:\Projects\Test.cpp\cmake-build-debug C:\Projects\Test.cpp\cmake-build-debug\CMakeFiles\Test_cpp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Test_cpp.dir/depend

