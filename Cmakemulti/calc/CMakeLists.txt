
cmake_minimum_required(VERSION 3.15)
project(calc)

aux_source_directory(${PROJECT_SOURCE_DIR} SRC)
include_directories(${HEADPATH})
set(LIBRARY_OUTPUT_PATH ${LIBPATH})
add_library(${CALCLIB} STATIC ${SRC})
