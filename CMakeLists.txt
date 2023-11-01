cmake_minimum_required(VERSION 3.24)
project(mindmap)

set(CMAKE_CXX_STANDARD 14)

add_executable(mindmap
        main.cpp addnote.cpp addnote.hpp node.hpp printmap.cpp printmap.hpp)
