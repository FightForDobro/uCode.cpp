cmake_minimum_required(VERSION 3.17)
project(sprint01)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(sprint01 main.cpp)

target_include_directories(sprint01 PUBLIC src)
target_link_libraries(sprint01 lib_src)
#target_compile_options(sprint01 PUBLIC -Wall -Wextra -Werror -Wpedantic)
#https://www.fluentcpp.com/2017/04/21/how-to-split-a-string-in-c/