cmake_minimum_required(VERSION 3.8)
project(c__11_feature_demo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/ForLoops.cpp src/ForLoops.h)
add_executable(c__11_feature_demo ${SOURCE_FILES})