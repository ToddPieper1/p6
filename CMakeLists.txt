cmake_minimum_required(VERSION 3.21)
project(poly)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES main.cpp Rectangle.cpp Square.cpp Circle.cpp Shape.cpp)
add_executable(poly ${SOURCE_FILES})
