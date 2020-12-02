cmake_minimum_required(VERSION 3.17)
project(sprint01)

set(CMAKE_CXX_STANDARD 17)

add_library(lib_src STATIC seek_and_print.cpp lib.h)
