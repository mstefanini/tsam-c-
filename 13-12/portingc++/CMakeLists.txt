cmake_minimum_required(VERSION 3.6)
project(homework_01)

set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp EsComplete.cpp)
add_executable(homework_01 ${SOURCE_FILES})