cmake_minimum_required(VERSION 3.20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")

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

target_link_libraries(TaskPro.out ${GTEST_ESSENTIALS})
target_link_libraries(TaskPro.out taskLibrary)
