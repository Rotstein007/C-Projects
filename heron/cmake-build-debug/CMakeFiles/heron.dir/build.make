# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = C:\Users\felix\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.4638.8\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\felix\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.4638.8\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\felix\Documents\C-Projects\heron

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\felix\Documents\C-Projects\heron\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/heron.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/heron.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/heron.dir/flags.make

CMakeFiles/heron.dir/main.c.obj: CMakeFiles/heron.dir/flags.make
CMakeFiles/heron.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\felix\Documents\C-Projects\heron\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/heron.dir/main.c.obj"
	C:\Users\felix\Documents\winbuild\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\heron.dir\main.c.obj -c C:\Users\felix\Documents\C-Projects\heron\main.c

CMakeFiles/heron.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/heron.dir/main.c.i"
	C:\Users\felix\Documents\winbuild\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\felix\Documents\C-Projects\heron\main.c > CMakeFiles\heron.dir\main.c.i

CMakeFiles/heron.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/heron.dir/main.c.s"
	C:\Users\felix\Documents\winbuild\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\felix\Documents\C-Projects\heron\main.c -o CMakeFiles\heron.dir\main.c.s

# Object files for target heron
heron_OBJECTS = \
"CMakeFiles/heron.dir/main.c.obj"

# External object files for target heron
heron_EXTERNAL_OBJECTS =

heron.exe: CMakeFiles/heron.dir/main.c.obj
heron.exe: CMakeFiles/heron.dir/build.make
heron.exe: CMakeFiles/heron.dir/linklibs.rsp
heron.exe: CMakeFiles/heron.dir/objects1.rsp
heron.exe: CMakeFiles/heron.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\felix\Documents\C-Projects\heron\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable heron.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\heron.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/heron.dir/build: heron.exe
.PHONY : CMakeFiles/heron.dir/build

CMakeFiles/heron.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\heron.dir\cmake_clean.cmake
.PHONY : CMakeFiles/heron.dir/clean

CMakeFiles/heron.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\felix\Documents\C-Projects\heron C:\Users\felix\Documents\C-Projects\heron C:\Users\felix\Documents\C-Projects\heron\cmake-build-debug C:\Users\felix\Documents\C-Projects\heron\cmake-build-debug C:\Users\felix\Documents\C-Projects\heron\cmake-build-debug\CMakeFiles\heron.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/heron.dir/depend

