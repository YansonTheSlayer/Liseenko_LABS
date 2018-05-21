cmake_minimum_required(VERSION 3.10)
project(laba05)

set(CMAKE_CXX_STANDARD 11)

include_directories(laba05)

add_executable(laba05
        laba05/Complex.cpp
        laba05/Complex.h
        laba05/main.cpp)
