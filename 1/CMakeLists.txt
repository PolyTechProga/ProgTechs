cmake_minimum_required(VERSION 3.9)
project(1)

set(CMAKE_CXX_STANDARD 11)

add_executable(1 input.cpp base-types.hpp shape.hpp rectangle.cpp circle.cpp rectangle.hpp circle.hpp main.cpp input.hpp)