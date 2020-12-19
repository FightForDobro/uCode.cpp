cmake_minimum_required(VERSION 3.16.3)
project(libsugar)

set(CMAKE_CXX_STANDARD 17)

add_library(sugar STATIC libsugar.h)
set_target_properties(sugar PROPERTIES LINKER_LANGUAGE CXX)
