cmake_minimum_required(VERSION 3.20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(THREADS_PREFER_PTHREAD_FLAG ON)
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0 -g -Wall")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
find_package(Threads REQUIRED)

add_library(taskLibrary
    Task.cpp
    TaskList.cpp
    Subtask.cpp
    MainTask.cpp
    helperFunctions.cpp
)

add_executable(TaskPro.out
  main.cpp
)
add_executable(ValgrindTest
  main2.cpp
)
target_link_libraries(TaskPro.out ${GTEST_ESSENTIALS} ${CMAKE_CXX_FLAGS_RELEASE})
target_link_libraries(TaskPro.out taskLibrary)
target_link_libraries(TaskPro.out pthread)
target_link_libraries(ValgrindTest ${GTEST_ESSENTIALS} ${CMAKE_C_FLAGS_DEBUG})
target_link_libraries(ValgrindTest taskLibrary)
target_link_libraries(ValgrindTest pthread)