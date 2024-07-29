cmake_minimum_required(VERSION 3.28)
project(TSP C)

set(CMAKE_C_STANDARD 23)

add_executable(TSP main.c data.h functions.c functions.h)