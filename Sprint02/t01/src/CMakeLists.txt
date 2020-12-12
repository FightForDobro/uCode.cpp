cmake_minimum_required(VERSION 3.16.3)
project(countUniqueWords)

set(CMAKE_CXX_STANDARD 17)

add_library(lib_src STATIC fill_set.cpp fill_set.h is_word.cpp is_word.h write_to_file.cpp write_to_file.h)
target_link_libraries(lib_src)