# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS\build"

# Include any dependencies generated for this target.
include CMakeFiles/NBBS.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/NBBS.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/NBBS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NBBS.dir/flags.make

CMakeFiles/NBBS.dir/main.cpp.obj: CMakeFiles/NBBS.dir/flags.make
CMakeFiles/NBBS.dir/main.cpp.obj: C:/Users/nolan/OneDrive\ -\ ROC\ Alfa-college/SotwareDevelopment/NBBS/main.cpp
CMakeFiles/NBBS.dir/main.cpp.obj: CMakeFiles/NBBS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NBBS.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NBBS.dir/main.cpp.obj -MF CMakeFiles\NBBS.dir\main.cpp.obj.d -o CMakeFiles\NBBS.dir\main.cpp.obj -c "C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS\main.cpp"

CMakeFiles/NBBS.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NBBS.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS\main.cpp" > CMakeFiles\NBBS.dir\main.cpp.i

CMakeFiles/NBBS.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NBBS.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS\main.cpp" -o CMakeFiles\NBBS.dir\main.cpp.s

CMakeFiles/NBBS.dir/army.cpp.obj: CMakeFiles/NBBS.dir/flags.make
CMakeFiles/NBBS.dir/army.cpp.obj: C:/Users/nolan/OneDrive\ -\ ROC\ Alfa-college/SotwareDevelopment/NBBS/army.cpp
CMakeFiles/NBBS.dir/army.cpp.obj: CMakeFiles/NBBS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/NBBS.dir/army.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NBBS.dir/army.cpp.obj -MF CMakeFiles\NBBS.dir\army.cpp.obj.d -o CMakeFiles\NBBS.dir\army.cpp.obj -c "C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS\army.cpp"

CMakeFiles/NBBS.dir/army.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NBBS.dir/army.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS\army.cpp" > CMakeFiles\NBBS.dir\army.cpp.i

CMakeFiles/NBBS.dir/army.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NBBS.dir/army.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS\army.cpp" -o CMakeFiles\NBBS.dir\army.cpp.s

# Object files for target NBBS
NBBS_OBJECTS = \
"CMakeFiles/NBBS.dir/main.cpp.obj" \
"CMakeFiles/NBBS.dir/army.cpp.obj"

# External object files for target NBBS
NBBS_EXTERNAL_OBJECTS =

NBBS.exe: CMakeFiles/NBBS.dir/main.cpp.obj
NBBS.exe: CMakeFiles/NBBS.dir/army.cpp.obj
NBBS.exe: CMakeFiles/NBBS.dir/build.make
NBBS.exe: CMakeFiles/NBBS.dir/linkLibs.rsp
NBBS.exe: CMakeFiles/NBBS.dir/objects1.rsp
NBBS.exe: CMakeFiles/NBBS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable NBBS.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\NBBS.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NBBS.dir/build: NBBS.exe
.PHONY : CMakeFiles/NBBS.dir/build

CMakeFiles/NBBS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\NBBS.dir\cmake_clean.cmake
.PHONY : CMakeFiles/NBBS.dir/clean

CMakeFiles/NBBS.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS" "C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS" "C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS\build" "C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS\build" "C:\Users\nolan\OneDrive - ROC Alfa-college\SotwareDevelopment\NBBS\build\CMakeFiles\NBBS.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/NBBS.dir/depend

