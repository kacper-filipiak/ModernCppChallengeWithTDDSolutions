project(SumDivisibleProblem)
cmake_minimum_required(VERSION 2.6)

include_directories($ENV{GMOCK_HOME}/include $ENV{GMOCK_HOME}/gtest/include)
link_directories($ENV{GMOCK_HOME}/mybuild $ENV{GMOCK_HOME}/gtest/mybuild)
add_definitions(-std=c++17)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall ")

set(sources 
		SumDivisibleTest.cpp
   main.cpp 
   
   )
add_library(SumDivisible_lib SumDivisible.cpp SumDivisible.h)
add_executable(test ${sources})
target_link_libraries(test SumDivisible_lib)
target_link_libraries(test pthread)
target_link_libraries(test gmock)
target_link_libraries(test gtest)

