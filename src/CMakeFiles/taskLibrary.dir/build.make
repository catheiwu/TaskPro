# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571

# Include any dependencies generated for this target.
include src/CMakeFiles/taskLibrary.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/taskLibrary.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/taskLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/taskLibrary.dir/flags.make

src/CMakeFiles/taskLibrary.dir/Task.cpp.o: src/CMakeFiles/taskLibrary.dir/flags.make
src/CMakeFiles/taskLibrary.dir/Task.cpp.o: src/Task.cpp
src/CMakeFiles/taskLibrary.dir/Task.cpp.o: src/CMakeFiles/taskLibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/taskLibrary.dir/Task.cpp.o"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/taskLibrary.dir/Task.cpp.o -MF CMakeFiles/taskLibrary.dir/Task.cpp.o.d -o CMakeFiles/taskLibrary.dir/Task.cpp.o -c /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/Task.cpp

src/CMakeFiles/taskLibrary.dir/Task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/taskLibrary.dir/Task.cpp.i"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/Task.cpp > CMakeFiles/taskLibrary.dir/Task.cpp.i

src/CMakeFiles/taskLibrary.dir/Task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/taskLibrary.dir/Task.cpp.s"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/Task.cpp -o CMakeFiles/taskLibrary.dir/Task.cpp.s

src/CMakeFiles/taskLibrary.dir/TaskList.cpp.o: src/CMakeFiles/taskLibrary.dir/flags.make
src/CMakeFiles/taskLibrary.dir/TaskList.cpp.o: src/TaskList.cpp
src/CMakeFiles/taskLibrary.dir/TaskList.cpp.o: src/CMakeFiles/taskLibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/taskLibrary.dir/TaskList.cpp.o"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/taskLibrary.dir/TaskList.cpp.o -MF CMakeFiles/taskLibrary.dir/TaskList.cpp.o.d -o CMakeFiles/taskLibrary.dir/TaskList.cpp.o -c /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/TaskList.cpp

src/CMakeFiles/taskLibrary.dir/TaskList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/taskLibrary.dir/TaskList.cpp.i"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/TaskList.cpp > CMakeFiles/taskLibrary.dir/TaskList.cpp.i

src/CMakeFiles/taskLibrary.dir/TaskList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/taskLibrary.dir/TaskList.cpp.s"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/TaskList.cpp -o CMakeFiles/taskLibrary.dir/TaskList.cpp.s

src/CMakeFiles/taskLibrary.dir/Subtask.cpp.o: src/CMakeFiles/taskLibrary.dir/flags.make
src/CMakeFiles/taskLibrary.dir/Subtask.cpp.o: src/Subtask.cpp
src/CMakeFiles/taskLibrary.dir/Subtask.cpp.o: src/CMakeFiles/taskLibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/taskLibrary.dir/Subtask.cpp.o"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/taskLibrary.dir/Subtask.cpp.o -MF CMakeFiles/taskLibrary.dir/Subtask.cpp.o.d -o CMakeFiles/taskLibrary.dir/Subtask.cpp.o -c /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/Subtask.cpp

src/CMakeFiles/taskLibrary.dir/Subtask.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/taskLibrary.dir/Subtask.cpp.i"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/Subtask.cpp > CMakeFiles/taskLibrary.dir/Subtask.cpp.i

src/CMakeFiles/taskLibrary.dir/Subtask.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/taskLibrary.dir/Subtask.cpp.s"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/Subtask.cpp -o CMakeFiles/taskLibrary.dir/Subtask.cpp.s

src/CMakeFiles/taskLibrary.dir/MainTask.cpp.o: src/CMakeFiles/taskLibrary.dir/flags.make
src/CMakeFiles/taskLibrary.dir/MainTask.cpp.o: src/MainTask.cpp
src/CMakeFiles/taskLibrary.dir/MainTask.cpp.o: src/CMakeFiles/taskLibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/taskLibrary.dir/MainTask.cpp.o"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/taskLibrary.dir/MainTask.cpp.o -MF CMakeFiles/taskLibrary.dir/MainTask.cpp.o.d -o CMakeFiles/taskLibrary.dir/MainTask.cpp.o -c /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/MainTask.cpp

src/CMakeFiles/taskLibrary.dir/MainTask.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/taskLibrary.dir/MainTask.cpp.i"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/MainTask.cpp > CMakeFiles/taskLibrary.dir/MainTask.cpp.i

src/CMakeFiles/taskLibrary.dir/MainTask.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/taskLibrary.dir/MainTask.cpp.s"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/MainTask.cpp -o CMakeFiles/taskLibrary.dir/MainTask.cpp.s

src/CMakeFiles/taskLibrary.dir/helperFunctions.cpp.o: src/CMakeFiles/taskLibrary.dir/flags.make
src/CMakeFiles/taskLibrary.dir/helperFunctions.cpp.o: src/helperFunctions.cpp
src/CMakeFiles/taskLibrary.dir/helperFunctions.cpp.o: src/CMakeFiles/taskLibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/taskLibrary.dir/helperFunctions.cpp.o"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/taskLibrary.dir/helperFunctions.cpp.o -MF CMakeFiles/taskLibrary.dir/helperFunctions.cpp.o.d -o CMakeFiles/taskLibrary.dir/helperFunctions.cpp.o -c /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/helperFunctions.cpp

src/CMakeFiles/taskLibrary.dir/helperFunctions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/taskLibrary.dir/helperFunctions.cpp.i"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/helperFunctions.cpp > CMakeFiles/taskLibrary.dir/helperFunctions.cpp.i

src/CMakeFiles/taskLibrary.dir/helperFunctions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/taskLibrary.dir/helperFunctions.cpp.s"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/helperFunctions.cpp -o CMakeFiles/taskLibrary.dir/helperFunctions.cpp.s

# Object files for target taskLibrary
taskLibrary_OBJECTS = \
"CMakeFiles/taskLibrary.dir/Task.cpp.o" \
"CMakeFiles/taskLibrary.dir/TaskList.cpp.o" \
"CMakeFiles/taskLibrary.dir/Subtask.cpp.o" \
"CMakeFiles/taskLibrary.dir/MainTask.cpp.o" \
"CMakeFiles/taskLibrary.dir/helperFunctions.cpp.o"

# External object files for target taskLibrary
taskLibrary_EXTERNAL_OBJECTS =

lib/libtaskLibrary.a: src/CMakeFiles/taskLibrary.dir/Task.cpp.o
lib/libtaskLibrary.a: src/CMakeFiles/taskLibrary.dir/TaskList.cpp.o
lib/libtaskLibrary.a: src/CMakeFiles/taskLibrary.dir/Subtask.cpp.o
lib/libtaskLibrary.a: src/CMakeFiles/taskLibrary.dir/MainTask.cpp.o
lib/libtaskLibrary.a: src/CMakeFiles/taskLibrary.dir/helperFunctions.cpp.o
lib/libtaskLibrary.a: src/CMakeFiles/taskLibrary.dir/build.make
lib/libtaskLibrary.a: src/CMakeFiles/taskLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library ../lib/libtaskLibrary.a"
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && $(CMAKE_COMMAND) -P CMakeFiles/taskLibrary.dir/cmake_clean_target.cmake
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/taskLibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/taskLibrary.dir/build: lib/libtaskLibrary.a
.PHONY : src/CMakeFiles/taskLibrary.dir/build

src/CMakeFiles/taskLibrary.dir/clean:
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src && $(CMAKE_COMMAND) -P CMakeFiles/taskLibrary.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/taskLibrary.dir/clean

src/CMakeFiles/taskLibrary.dir/depend:
	cd /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571 /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571 /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/src/CMakeFiles/taskLibrary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/taskLibrary.dir/depend

