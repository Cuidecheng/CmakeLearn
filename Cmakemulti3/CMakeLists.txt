
cmake_minimum_required(VERSION 3.15)
project(test)

set(LIBPATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECPATH ${PROJECT_SOURCE_DIR}/bin)
set(HEADPATH ${PROJECT_SOURCE_DIR}/include)
set(CALCLIB calc)
set(SORTLIB sort)
set(APPNAME1 app1)
set(APPNAME2 app2)

add_subdirectory(calc)
add_subdirectory(sort)
add_subdirectory(test)

set(CMAKE_CXX_STANDARD 11)