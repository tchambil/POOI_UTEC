cmake_minimum_required(VERSION 3.8)
project(FIFA)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Figurita.cpp Figurita.h Persona.cpp Persona.h Jugador.cpp Jugador.h Coleccionista.cpp Coleccionista.h)
add_executable(FIFA ${SOURCE_FILES})