cmake_minimum_required(VERSION 3.6)
project(homework_01)

set(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS}")

set(SOURCE_FILES main.c es_complete.c es_complete.h)
add_executable(homework_01 ${SOURCE_FILES})