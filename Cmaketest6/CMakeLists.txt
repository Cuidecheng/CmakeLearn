# How to define HONG
cmake_minimum_required(VERSION 3.15)
project(test)
add_definitions(-DDEBUG)
aux_source_directory(${PROJECT_SOURCE_DIR} SRC)

set(EXECUTABLE_OUTPUT_PATH /home/cdc/Desktop/Cmaketest6/bin)

set(CMAKE_CXX_STANDARD 11)

add_executable(app ${SRC})
