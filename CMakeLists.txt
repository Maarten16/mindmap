cmake_minimum_required(VERSION 3.24)
project(mindmap)

set(CMAKE_CXX_STANDARD 14)

add_executable(mindmap
        main.cpp addNode.cpp addNode.hpp node.hpp printmap.cpp printmap.hpp moveTarget.cpp moveTarget.hpp)
