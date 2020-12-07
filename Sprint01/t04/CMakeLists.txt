cmake_minimum_required(VERSION 3.16.3)
project(stdAlgoV1)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(stdAlgoV1 main.cpp)

target_include_directories(stdAlgoV1 PUBLIC src)
#target_link_libraries(stdAlgoV1 lib_src)
#target_compile_options(visitAll PUBLIC -Wall -Wextra -Werror -Wpedantic)