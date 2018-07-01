cmake_minimum_required(VERSION 3.8)
project(POO)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Persona.cpp Persona.h Estudiante.cpp Estudiante.h)
add_executable(POO ${SOURCE_FILES})