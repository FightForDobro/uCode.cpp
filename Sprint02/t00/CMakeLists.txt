cmake_minimum_required(VERSION 3.16.3)
project(uniqueWords)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_executable(uniqueWords main.cpp)

target_include_directories(uniqueWords PUBLIC src)
target_link_libraries(uniqueWords lib_src)
#target_compile_options(visitAll PUBLIC -Wall -Wextra -Werror -Wpedantic)