cmake_minimum_required(VERSION 3.12)
project(stdbool C)

set(CMAKE_C_STANDARD 11)

add_library(stdbool STATIC std_bool.c)
