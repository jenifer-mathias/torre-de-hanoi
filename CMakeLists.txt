cmake_minimum_required(VERSION 3.20)
project(torre-de-hanoi)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(
        tad_pilha
        Main.cpp
        stack/Pilha.h
        stack/PilhaImpl.cpp
        hanoi/Hanoi.h
)
