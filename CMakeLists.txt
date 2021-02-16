# cmake_minimum_required(VERSION <specify CMake version here>)
project(DataStructures)

set(CMAKE_CXX_STANDARD 17)

add_executable(DataStructures src/main.cpp include/biginteger.h src/biginteger.cpp include/hashtable.h)