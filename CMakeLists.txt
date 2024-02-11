cmake_minimum_required(VERSION 3.19)

project(3_CrearObjAsociacion)

set(CMAKE_CXX_STANDARD 17)

# Especificar la ruta a los archivos fuente
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

# Buscar todos los archivos .cpp en la carpeta SRC_DIR
file(GLOB SRCS "*.cpp")

# Agregar el ejecutable con los archivos fuente
add_executable(3_CrearObjAsociacion ${SRCS})

# Incluir los archivos de cabecera
include_directories(${SRC_DIR})
