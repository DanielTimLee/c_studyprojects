cmake_minimum_required(VERSION 3.4)
project(c_studyprojects)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES "01.LCM(Least Common Multiple)/lcm.h")
add_executable(c_studyprojects ${SOURCE_FILES})