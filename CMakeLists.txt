cmake_minimum_required(VERSION 3.12)
project(MyDesig)

set(CMAKE_CXX_FLAGS "-lpcap")
set(CMAKE_CXX_STANDARD 14)

add_executable(MyDesig main.cpp)