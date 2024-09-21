cmake_minimum_required(VERSION 3.27)
project(lab3temp)

set(CMAKE_CXX_STANDARD 20)

add_executable(lab3temp main.cpp
        myStack.cpp
        myStack.hpp
        unit_tests.cpp)
