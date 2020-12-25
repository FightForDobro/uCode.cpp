cmake_minimum_required(VERSION 3.16.3)

project(src LANGUAGES CXX)

file(GLOB_RECURSE sources *.cpp *.h)
add_library(${PROJECT_NAME} ${sources})

target_include_directories(${PROJECT_NAME} PUBLIC .)
set_target_properties(src PROPERTIES LINKER_LANGUAGE CXX)
