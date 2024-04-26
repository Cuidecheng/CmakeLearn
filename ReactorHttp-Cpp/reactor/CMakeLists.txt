cmake_minimum_required(VERSION 3.15)
project(reactor)

aux_source_directory(${PROJECT_SOURCE_DIR} SRC)
add_library(reactor STATIC ${SRC})