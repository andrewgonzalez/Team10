cmake_minimum_required(VERSION 3.12)    # CMake version check
project(BST)                            # Create project "BST"
set(CMAKE_CXX_STANDARD 14)              # Enable C++14 standard


#[[Add the given directories to those the compiler uses
#  to search for include files. Relative paths are interpreted
#  as relative to the current source directory.]]

#include_directories(.)


#[[Add main.cpp file of project root directory as source file]]

set(BST_test.cpp)


#[[Add executable target with source files listed.]]
add_executable(BST_Test BST_test.cpp
               BST BST.cpp
               Balanced_Tree Balanced_Tree.cpp
               Node Node.cpp)
