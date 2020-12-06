cmake_minimum_required(VERSION 3.16.3)
project(simpleSort)

set(CMAKE_CXX_STANDARD 17)

add_library(lib_src STATIC sort_args.cpp lib.h)
