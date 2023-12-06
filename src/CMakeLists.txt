cmake_minimum_required(VERSION 3.20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(THREADS_PREFER_PTHREAD_FLAG ON)
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
add_executable(Testmain2
  main2.cpp
)
target_link_libraries(TaskPro.out ${GTEST_ESSENTIALS})
target_link_libraries(TaskPro.out taskLibrary)
target_link_libraries(Testmain2 ${GTEST_ESSENTIALS})
target_link_libraries(Testmain2 taskLibrary)
target_link_libraries(Testmain2 pthread)
