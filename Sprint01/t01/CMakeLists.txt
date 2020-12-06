cmake_minimum_required(VERSION 3.16.3)
project(moveAlong)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(moveAlong main.cpp)

target_include_directories(moveAlong PUBLIC src)
target_link_libraries(moveAlong lib_src)
#target_compile_options(sprint01 PUBLIC -Wall -Wextra -Werror -Wpedantic)
