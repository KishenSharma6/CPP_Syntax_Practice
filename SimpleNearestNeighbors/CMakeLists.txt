cmake_minimum_required(VERSION 3.21.0)

add_definitions(-std=c++11)
#Name project + version
project(nearestneighbor VERSION 1.0.0)

#Add executable
add_executable(test1 nearestneighbor.cpp)
LINK_DIRECTORIES(/opt/homebrew/Cellar)
INCLUDE_DIRECTORIES(/opt/homebrew/Cellar)

