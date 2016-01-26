cmake_minimum_required(VERSION 3.3.2) #cmake version 3.4 -> 3.3.2
project(c_studyprojects)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c)
add_executable(c_studyprojects ${SOURCE_FILES})