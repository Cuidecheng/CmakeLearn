cmake_minimum_required(VERSION 3.15)
project(HttpWeb)
set(CMAKE_CXX_STANDARD 11)

include_directories(
    ${PROJECT_SOURCE_DIR}/common
    ${PROJECT_SOURCE_DIR}/http
    ${PROJECT_SOURCE_DIR}/reactor
    ${PROJECT_SOURCE_DIR}/tcp
    ${PROJECT_SOURCE_DIR}/thread
)

add_subdirectory(common)
add_subdirectory(http)
add_subdirectory(reactor)
add_subdirectory(tcp)
add_subdirectory(thread)


link_libraries(common http reactor tcp thread)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_executable(server main.cpp)