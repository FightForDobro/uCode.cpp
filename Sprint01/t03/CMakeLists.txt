cmake_minimum_required(VERSION 3.16.3)
project(vampireRabbits)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(vampireRabbits main.cpp)

target_include_directories(vampireRabbits PUBLIC src)
target_link_libraries(vampireRabbits lib_src)
#target_compile_options(visitAll PUBLIC -Wall -Wextra -Werror -Wpedantic)