cmake_minimum_required(VERSION 3.16.3)

project(simpleWorkerV1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -Wall -Wextra -Werror -Wpedantic -Wno-unused-parameter -Wno-unused-variable")

add_subdirectory(app)