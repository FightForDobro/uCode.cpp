cmake_minimum_required(VERSION 3.16.3)
project(bookSaver)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_executable(bookSaver main.cpp)

target_include_directories(bookSaver PUBLIC src)
target_link_libraries(bookSaver lib_src)
#target_compile_options(visitAll PUBLIC -Wall -Wextra -Werror -Wpedantic)