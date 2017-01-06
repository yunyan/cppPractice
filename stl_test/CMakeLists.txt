cmake_minimum_required(VERSION 2.6)
cmake_policy(SET CMP0037 OLD)
project(stl_test)

add_executable(sharedptr1.exe sharedptr1.cpp)
add_executable(sharedptr3.exe sharedptr3.cpp)
add_executable(weakptr1.exe weakptr1.cpp)

target_compile_features(sharedptr1.exe PRIVATE cxx_range_for)

target_compile_features(sharedptr3.exe PRIVATE cxx_range_for)
target_link_libraries(sharedptr3.exe rt)

target_compile_features(weakptr1.exe PRIVATE cxx_range_for)

