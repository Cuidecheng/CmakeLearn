# How to operate string 
cmake_minimum_required(VERSION 3.15)
project(test)
# set(SRC factorial.cpp main.cpp printhello.cpp)
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)
message("==============")
message(${SRC})
list(REMOVE_ITEM SRC ${PROJECT_SOURCE_DIR}/src/main.cpp)
message("==============")
message(${SRC})
message("==============")

# file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
# set(EXECUTABLE_OUTPUT_PATH /home/cdc/Desktop/Cmaketest/bin)
include_directories(${PROJECT_SOURCE_DIR}/include)
set(CMAKE_CXX_STANDARD 11)
#add_executable(app ${SRC}) 
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
add_library(calc SHARED ${SRC})
#add_library(calc STATIC ${SRC})
set(tmp hello world)
set(tmp1 ${tmp} ${SRC})
message(${tmp})
message(${tmp1})
list(APPEND tmp "xxx1" "ssss2" ${SRC})
message(${tmp})
