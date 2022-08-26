project(tcpServer)

cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Network REQUIRED)
find_package(Qt5Test REQUIRED)

set(SOURCES main.cpp tcpserver.cpp)
set(HEADERS tcpserver.h)
set(UI tcpserver.ui)

add_executable(tcpServer ${SOURCES} ${HEADERS} ${UI})

target_link_libraries(tcpServer Qt5::Widgets Qt5::Network Qt5::Test)
