cmake_minimum_required(VERSION 3.15)
project(PROJ2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(PROJ2
        BST.h
        camiao.cpp
        camiao.h
        Empresa.cpp
        Empresa.h
        main.cpp
        menus.cpp
        menus.h
        Oficina.cpp
        Oficina.h
        Person.cpp
        Person.h
        ServicoTransporte.cpp
        ServicoTransporte.h
        Utils.cpp
        Utils.h)
