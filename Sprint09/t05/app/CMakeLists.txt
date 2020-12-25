cmake_minimum_required(VERSION 3.16.3)
project(logger CXX)

set(BIN logger)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(${BIN} main.cpp)
target_compile_options(${BIN} PUBLIC -std=c++17 -pipe -Wall -Wextra -Werror -Wpedantic -Wno-unused-parameter -Wno-unused-variable -g)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/..)

target_include_directories(${BIN} PUBLIC src)
target_link_libraries(${BIN} PUBLIC src pthread)