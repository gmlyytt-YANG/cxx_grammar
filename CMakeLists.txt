cmake_minimum_required(VERSION 3.14)
project(self)

set(CMAKE_CXX_STANDARD 14)

add_executable(self main.cpp header.h move.h reference_change_private_variable.h)