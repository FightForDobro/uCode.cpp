cmake_minimum_required(VERSION 3.16.3)
project(moveAlong)

set(CMAKE_CXX_STANDARD 20)

add_library(lib_src STATIC seek_and_print.cpp lib.h)
