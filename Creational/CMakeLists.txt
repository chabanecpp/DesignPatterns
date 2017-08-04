cmake_minimum_required(VERSION 3.2)

set(COMPONENT_NAME Creational)
add_subdirectory("${CMAKE_SOURCE_DIR}/${COMPONENT_NAME}/src")

file(GLOB src *.cpp *.h)
#add_library(COMPONENT_NAME ${src})
add_executable(COMPONENT_NAME $(src))
