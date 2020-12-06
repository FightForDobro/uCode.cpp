cmake_minimum_required(VERSION 3.17)
project(visitAll)

set(CMAKE_CXX_STANDARD 17)

add_library(lib_src STATIC lib.h parse_line.cpp find_town.cpp)
