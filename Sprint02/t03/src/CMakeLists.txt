cmake_minimum_required(VERSION 3.16.3)
project(tesLibrary)

set(CMAKE_CXX_STANDARD 17)

add_library(lib_src STATIC parse_books.cpp parse_books.h tes_library.h print_library.cpp print_library.h)
target_link_libraries(lib_src)