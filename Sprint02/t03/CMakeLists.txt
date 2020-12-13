cmake_minimum_required(VERSION 3.16.3)
project(tesLibrary)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(tesLibrary main.cpp)

target_include_directories(tesLibrary PUBLIC src)
target_link_libraries(tesLibrary lib_src)