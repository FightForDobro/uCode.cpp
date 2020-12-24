cmake_minimum_required(VERSION 3.16.3)
project(vector CXX)

set(BIN vector)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(${BIN} main.cpp)
target_compile_options(${BIN} PUBLIC -std=c++17 -pipe -Wall -Wextra -Werror -Wpedantic -Wno-unused-parameter -Wno-unused-variable -g)

target_include_directories(${BIN} PUBLIC src)
target_link_libraries(${BIN} src)