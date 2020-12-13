cmake_minimum_required(VERSION 3.16.3)
project(bookSaver)

set(CMAKE_CXX_STANDARD 17)

add_library(lib_src STATIC write_to_file.cpp write_to_file.h book_saver.h cmd_handler.cpp cmd_handler.h add.cpp add.h remove.cpp remove.h list.cpp list.h read.cpp read.h)
target_link_libraries(lib_src)