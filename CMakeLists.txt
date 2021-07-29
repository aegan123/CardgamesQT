cmake_minimum_required(VERSION 3.20)
project(CardgamesQT)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

include_directories(.)
find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(CardgamesQT
        card.cpp
        card.h
        main.cpp
        mainwindow.cpp
        mainwindow.h
        player.cpp
        player.h)

target_link_libraries(CardgamesQT
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )
