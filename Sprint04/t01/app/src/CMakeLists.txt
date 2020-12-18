cmake_minimum_required(VERSION 3.16.3)
project(imperialVsStormcloak
        LANGUAGES CXX)

set(BIN src)
set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE sources *.cpp *.h)

add_library(${BIN} ${sources})
target_compile_options(${BIN} PUBLIC -std=c++17 -pipe -Wall -Wextra -Werror -Wpedantic -g)