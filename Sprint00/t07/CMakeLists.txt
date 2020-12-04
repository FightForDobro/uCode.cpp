cmake_minimum_required(VERSION 3.16.3)
project(inventory)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(inventory main.cpp)
target_link_libraries(inventory PRIVATE lib)
target_include_directories(inventory PRIVATE src/)