cmake_minimum_required(VERSION 3.10)

project(NBBS C CXX)
set(CMAKE_CXX_STANDARD 20)
set(WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(${PROJECT_NAME} main.cpp army.cpp)