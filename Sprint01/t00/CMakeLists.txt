cmake_minimum_required(VERSION 3.16.3)
project(simpleSort)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(simpleSort main.cpp)

target_include_directories(simpleSort PUBLIC src)
target_link_libraries(simpleSort lib_src)
#target_compile_options(sprint01 PUBLIC -Wall -Wextra -Werror -Wpedantic)
