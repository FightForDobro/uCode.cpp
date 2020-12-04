cmake_minimum_required(VERSION 3.16.3)
project(lib)

set(CMAKE_CXX_STANDARD 17)

add_library(lib inventory.cpp inventory.h)