cmake_minimum_required(VERSION 3.16.3)
project(countUniqueWords)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_executable(countUniqueWords main.cpp)

target_include_directories(countUniqueWords PUBLIC src)
target_link_libraries(countUniqueWords lib_src)
#target_compile_options(visitAll PUBLIC -Wall -Wextra -Werror -Wpedantic)