cmake_minimum_required(VERSION 2.8)
project(my_program)

add_definitions("-std=c++11")
# The following does not seem to work.
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11")

add_executable(my_program my_program.cpp)
