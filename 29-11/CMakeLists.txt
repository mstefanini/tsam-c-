cmake_minimum_required(VERSION 3.6)
project(Camping)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")

set(SOURCE_FILES main.c Camping/camping.c Camping/camping.h Camping/housing.c Camping/housing.h)
add_executable(Camping ${SOURCE_FILES})