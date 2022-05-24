######################################################################
# @author      : Leopold Keller (leopold.keller@stud.h-da.de)
# @file        : CMakeLists
# @created     : Thursday May 19, 2022 11:59:48 CEST
######################################################################


cmake_minimum_required(VERSION 3.10)

project(hello)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES meineklasse.cpp func.cpp ${PROJECT_SOURCE_DIR}/meineklasse.h ${PROJECT_SOURCE_DIR}/func.h)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(hello ${SOURCES})

target_link_libraries(hello ${SOURCES})
