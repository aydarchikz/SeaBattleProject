cmake_minimum_required(VERSION 3.27)
project(SeaBattle)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        SeaBattle
        main.cpp
        source/game.cpp
        headers/game.h
        source/field.cpp
        headers/field.h
        source/fleet.cpp
        headers/fleet.h
        source/ship.cpp
        headers/ship.h
        headers/square.h
        source/player.cpp
        headers/player.h
        source/factory.cpp
        headers/factory.h
        headers/iship.h
        source/iship.cpp
)
