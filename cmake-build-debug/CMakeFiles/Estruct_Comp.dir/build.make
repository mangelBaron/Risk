# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Estudiante\CLionProjects\Risk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Estudiante\CLionProjects\Risk\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Estruct_Comp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Estruct_Comp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Estruct_Comp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Estruct_Comp.dir/flags.make

CMakeFiles/Estruct_Comp.dir/main.cpp.obj: CMakeFiles/Estruct_Comp.dir/flags.make
CMakeFiles/Estruct_Comp.dir/main.cpp.obj: CMakeFiles/Estruct_Comp.dir/includes_CXX.rsp
CMakeFiles/Estruct_Comp.dir/main.cpp.obj: C:/Users/Estudiante/CLionProjects/Risk/main.cpp
CMakeFiles/Estruct_Comp.dir/main.cpp.obj: CMakeFiles/Estruct_Comp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Estudiante\CLionProjects\Risk\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Estruct_Comp.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Estruct_Comp.dir/main.cpp.obj -MF CMakeFiles\Estruct_Comp.dir\main.cpp.obj.d -o CMakeFiles\Estruct_Comp.dir\main.cpp.obj -c C:\Users\Estudiante\CLionProjects\Risk\main.cpp

CMakeFiles/Estruct_Comp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Estruct_Comp.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Estudiante\CLionProjects\Risk\main.cpp > CMakeFiles\Estruct_Comp.dir\main.cpp.i

CMakeFiles/Estruct_Comp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Estruct_Comp.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Estudiante\CLionProjects\Risk\main.cpp -o CMakeFiles\Estruct_Comp.dir\main.cpp.s

# Object files for target Estruct_Comp
Estruct_Comp_OBJECTS = \
"CMakeFiles/Estruct_Comp.dir/main.cpp.obj"

# External object files for target Estruct_Comp
Estruct_Comp_EXTERNAL_OBJECTS =

Estruct_Comp.exe: CMakeFiles/Estruct_Comp.dir/main.cpp.obj
Estruct_Comp.exe: CMakeFiles/Estruct_Comp.dir/build.make
Estruct_Comp.exe: CMakeFiles/Estruct_Comp.dir/linkLibs.rsp
Estruct_Comp.exe: CMakeFiles/Estruct_Comp.dir/objects1.rsp
Estruct_Comp.exe: CMakeFiles/Estruct_Comp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Estudiante\CLionProjects\Risk\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Estruct_Comp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Estruct_Comp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Estruct_Comp.dir/build: Estruct_Comp.exe
.PHONY : CMakeFiles/Estruct_Comp.dir/build

CMakeFiles/Estruct_Comp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Estruct_Comp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Estruct_Comp.dir/clean

CMakeFiles/Estruct_Comp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Estudiante\CLionProjects\Risk C:\Users\Estudiante\CLionProjects\Risk C:\Users\Estudiante\CLionProjects\Risk\cmake-build-debug C:\Users\Estudiante\CLionProjects\Risk\cmake-build-debug C:\Users\Estudiante\CLionProjects\Risk\cmake-build-debug\CMakeFiles\Estruct_Comp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Estruct_Comp.dir/depend
