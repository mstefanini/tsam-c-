cmake_minimum_required(VERSION 3.6)
project(esercizi)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")

set(SOURCE_FILES main.c esercizi/es1.c esercizi/esercizi.h esercizi/es2.c esercizi/es3.c esercizi/es4.c esercizi/es5.c esercizi/es6.c esercizi/es_random.c)
add_executable(esercizi ${SOURCE_FILES})