project(Lora)

cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Network REQUIRED)
find_package(Qt5Test REQUIRED)

set(SOURCES gui/help.cpp gui/mainwindow.cpp gui/stats.cpp gui/tcpclient.cpp Card.cpp clabel.cpp
    config.cpp deck.cpp Game.cpp main.cpp player.cpp talon.cpp)
set(HEADERS gui/help.h gui/mainwindow.h gui/stats.h gui/tcpclient.h Card.h clabel.h config.h
    deck.h define.h Game.h player.h talon.h)
set(UI gui/help.ui gui/mainwindow.ui gui/stats.ui gui/tcpclient.ui)

add_executable(Lora ${SOURCES} ${HEADERS} ${UI})

target_link_libraries(Lora Qt5::Widgets Qt5::Network Qt5::Test)
