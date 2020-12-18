cmake_minimum_required(VERSION 3.16.3)
project(test)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(utils)

add_executable(test main.cpp)

target_include_directories(test PUBLIC utils)
target_link_libraries(test utils)