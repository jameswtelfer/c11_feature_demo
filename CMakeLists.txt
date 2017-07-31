cmake_minimum_required(VERSION 2.8)
project(c__11_feature_demo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/ForLoops.cpp src/ForLoops.h src/Thing.cpp src/Thing.h src/DynamicMemory.cpp src/DynamicMemory.h src/Lambdas.cpp src/Lambdas.h)
add_executable(c__11_feature_demo ${SOURCE_FILES})