cmake_minimum_required(VERSION 3.3)
project(knapsack_problem)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(knapsack_problem ${SOURCE_FILES})
