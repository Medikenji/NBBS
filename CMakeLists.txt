cmake_minimum_required(VERSION 3.10)

project(NBBS C CXX)

set(WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(${PROJECT_NAME} main.cpp)