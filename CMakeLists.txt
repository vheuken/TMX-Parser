cmake_minimum_required(VERSION 2.8)

set(PROJECT_NAME "TMX Parser")

project(${PROJECT_NAME})

add_subdirectory("src/")

enable_testing()

add_subdirectory ("tests/")