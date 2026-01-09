cmake_minimum_required(VERSION 3.1.3)
project(making_our_own_string_class
   	VERSION 0.1
	LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11) # Use C++11

add_executable(program main.cpp string.cpp)
