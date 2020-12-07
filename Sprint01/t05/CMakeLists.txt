cmake_minimum_required(VERSION 3.16.3)
project(stdAlgoV2)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(stdAlgoV2 main.cpp)

target_include_directories(stdAlgoV2 PUBLIC src)
target_link_libraries(stdAlgoV2 lib_src)
#target_compile_options(visitAll PUBLIC -Wall -Wextra -Werror -Wpedantic)