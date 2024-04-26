cmake_minimum_required(VERSION 3.15)
project(common)

aux_source_directory(${PROJECT_SOURCE_DIR} SRC)
add_library(common STATIC ${SRC})