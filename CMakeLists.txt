cmake_minimum_required(VERSION 3.30)
project(stdbool C)

set(CMAKE_C_STANDARD 11)

add_library(stdbool STATIC library.c)
