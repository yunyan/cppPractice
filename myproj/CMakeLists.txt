cmake_minimum_required(VERSION 2.6)
cmake_policy(SET CMP0037 OLD)

project(myproj)

add_subdirectory(src)
add_subdirectory(test)
include_directories(inc)

