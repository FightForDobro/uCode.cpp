cmake_minimum_required(VERSION 3.16.3)
project(vampireRabbits)

set(CMAKE_CXX_STANDARD 17)

add_library(lib_src STATIC lib.h init_ranch.cpp create_rabbit.cpp evolve.cpp)
