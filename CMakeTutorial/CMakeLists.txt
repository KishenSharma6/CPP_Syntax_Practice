cmake_minimum_required(VERSION 3.21.0)

add_definitions(-std=c++11)
#Name project + version
project(HelloWorld VERSION 1.0.0)

#Add executable
add_executable(HelloWorld HelloWorld.cpp)
LINK_DIRECTORIES(/opt/homebrew/Cellar)
TARGET_LINK_LIBRARIES(mlpack armadillo)