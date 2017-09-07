cmake_minimum_required(VERSION 3.2)

#set(COMPONENT_NAME DesignPatterns)
#add_subdirectory("${CMAKE_SOURCE_DIR}/${COMPONENT_NAME}/src")

project(DesignPatterns)
file(GLOB src *.cpp *.h)
#add_executable(DesignPatterns ${src})
add_executable(DesignPatterns src/main.cpp src/Singleton.h src/Singleton.cpp src/Factory.h src/Factory.cpp src/FactoryMethod.h src/FactoryMethod.cpp src/AbstractFactory.h src/AbstractFactory.cpp src/Builder.h src/Builder.cpp src/Prototype.h src/Prototype.cpp)