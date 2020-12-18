cmake_minimum_required(VERSION 3.16.3)
project(imperialVsStormcloak
        LANGUAGES CXX)

set(BIN imperialVsStormcloak)
set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/..)

add_subdirectory(src)

add_executable(${BIN} main.cpp)
target_compile_options(${BIN} PUBLIC -std=c++17 -pipe -Wall -Wextra -Werror -Wpedantic -g)

target_include_directories(${BIN} PUBLIC src)
target_link_libraries(${BIN} src)