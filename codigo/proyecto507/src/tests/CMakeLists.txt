# Version minima de cmake 

cmake_minimum_required(VERSION 3.16.3)

# Nombre de proyecto y version 

project(ENTREGABLE VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Generamos el ejecutable de todos los tests

add_executable(tests.exe AllTests.cpp)