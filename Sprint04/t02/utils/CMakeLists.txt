cmake_minimum_required(VERSION 3.16.3)
project(algorithmUtils)

set(CMAKE_CXX_STANDARD 17)

add_library(utils STATIC algorithmUtils.h)
set_target_properties(utils PROPERTIES LINKER_LANGUAGE CXX)
target_compile_options(utils PUBLIC -Wall -Wextra -Werror -Wpedantic -Wno-unused-parameter -Wno-unused-variable)
