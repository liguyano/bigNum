cmake_minimum_required(VERSION 3.24)
project(bigNum)

set(CMAKE_CXX_STANDARD 23)
include_directories(.)
INCLUDE_DIRECTORIES("D:/OneDrive - jxstnu.edu.cn/c++/socket/socket_include")
add_executable(bigNum main.cpp Chain.tpp Chain.h)
