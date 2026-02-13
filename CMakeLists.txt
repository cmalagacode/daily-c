cmake_minimum_required(VERSION 3.28)
project(daily_c C)

set(CMAKE_C_STANDARD 23)

add_executable(daily_c main.c)

add_subdirectory(lib)

