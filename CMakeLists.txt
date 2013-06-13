cmake_minimum_required(VERSION 2.8)

set(PROJECT_NAME "TMX Parser")

project(${PROJECT_NAME})

SET ( HEADER_FILES
    TMXMap.h
    TMXLayer.h
)

SET ( SOURCE_FILES
    TMXMap.cpp
    TMXLayer.cpp
)

add_library ( ${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES} )

enable_testing()

add_subdirectory ("tests/")