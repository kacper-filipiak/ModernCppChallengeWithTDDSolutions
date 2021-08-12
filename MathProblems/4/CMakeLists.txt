project(PrimeFindProblem)
cmake_minimum_required(VERSION 2.6)

include_directories($ENV{GMOCK_HOME}/include $ENV{GMOCK_HOME}/gtest/include)
link_directories($ENV{GMOCK_HOME}/mybuild $ENV{GMOCK_HOME}/gtest/mybuild)
add_definitions(-std=c++17)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall ")

set(sources 
		PrimeFinderTest.cpp
   main.cpp 
   
   )
add_library(PrimeFinder_lib PrimeFinder.cpp PrimeFinder.h)
add_executable(test ${sources})
target_link_libraries(test PrimeFinder_lib)
target_link_libraries(test pthread)
target_link_libraries(test gmock)
target_link_libraries(test gtest)

