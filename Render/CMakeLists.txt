cmake_minimum_required(VERSION 2.8.9)

project(FREESPACE_FLEETMANAGEMENTSYSTEM)

add_compile_options(-std=c++17)

set(CMAKE_BUILD_TYPE Release)

add_executable(FSFS src/main.cpp)

target_link_libraries(FSFS -lglut -lGL -lGLEW -lGLU)