cmake_minimum_required(VERSION 3.17)
project(visitAll)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(visitAll main.cpp)

target_include_directories(visitAll PUBLIC src)
target_link_libraries(visitAll lib_src)
#target_compile_options(visitAll PUBLIC -Wall -Wextra -Werror -Wpedantic)