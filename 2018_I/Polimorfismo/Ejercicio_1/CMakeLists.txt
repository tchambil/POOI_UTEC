cmake_minimum_required(VERSION 3.8)
project(VehiculoPolimorfismo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Vehiculo.cpp Vehiculo.h Automovil.cpp Automovil.h Camion.cpp Camion.h)
add_executable(VehiculoPolimorfismo ${SOURCE_FILES})