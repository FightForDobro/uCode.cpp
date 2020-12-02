cmake_minimum_required(VERSION 3.17)
project(sprint01)

set(CMAKE_CXX_STANDARD 17)

add_library(lib_src STATIC sort_args.cpp lib.h)
