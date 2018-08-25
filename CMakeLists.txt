cmake_minimum_required(VERSION 3.8)
project(kMerge)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp LinkedList.cpp LinkedList.h KMerge.cpp KMerge.h Heap.cpp Heap.h ToolFuncs.cpp ToolFuncs.h)
add_executable(kMerge ${SOURCE_FILES})