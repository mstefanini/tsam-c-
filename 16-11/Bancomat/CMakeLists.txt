cmake_minimum_required(VERSION 3.6)
project(Bancomat)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c bancomat.h bancomat.c)
add_executable(Bancomat ${SOURCE_FILES})