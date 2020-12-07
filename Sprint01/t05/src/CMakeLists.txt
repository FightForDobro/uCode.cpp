cmake_minimum_required(VERSION 3.16.3)
project(stdAlgoV2)

set(CMAKE_CXX_STANDARD 17)

add_library(lib_src STATIC lib.h write_to_file.cpp)
