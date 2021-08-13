project(PiNumberComputingToPrecision)
cmake_minimum_required(VERSION 2.6)

include_directories($ENV{GMOCK_HOME}/include $ENV{GMOCK_HOME}/gtest/include)
link_directories($ENV{GMOCK_HOME}/mybuild $ENV{GMOCK_HOME}/gtest/mybuild)
add_definitions(-std=c++17)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall -g ")

set(sources 
		PiTest.cpp
   main.cpp 
   
   )
add_library(Pi_lib Pi.cpp Pi.h)
add_executable(test ${sources})
target_link_libraries(test Pi_lib)
target_link_libraries(test pthread)
target_link_libraries(test gmock)
target_link_libraries(test gtest)

add_executable(big_number_container_test ${sources})
target_link_libraries(big_number_container_test Pi_lib)
target_link_libraries(big_number_container_test  pthread)
target_link_libraries(big_number_container_test  gmock)
target_link_libraries(big_number_container_test  gtest)



