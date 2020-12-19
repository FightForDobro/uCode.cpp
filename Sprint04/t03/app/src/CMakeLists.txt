cmake_minimum_required(VERSION 3.16.3)
project(dwemerCalculator
        LANGUAGES CXX)

set(BIN src)
set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE sources *.cpp *.h)

add_library(${BIN} ${sources})
target_compile_options(${BIN} PUBLIC -std=c++17 -pipe -Wall -Wextra -Werror -Wpedantic -Wno-unused-parameter -Wno-unused-variable -g)
target_include_directories(${BIN} PUBLIC ../../libsugar)
target_link_libraries(${BIN} sugar)