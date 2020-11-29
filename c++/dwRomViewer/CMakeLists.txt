# This is the cmake build file for the project. This works on Linux, but
# not Windows, so I will be using qmake instead. Keeping this around for
# a bit, just in case.

cmake_minimum_required(VERSION 3.7)
project(dwrandomizer)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
find_package(Qt5 COMPONENTS Gui Widgets)

# Compile the command line version
include_directories(common)

set(CLI_SOURCE_FILES
        # common/*
        cli/main.cpp)

add_executable(dwRomViewer-cli ${CLI_SOURCE_FILES})
target_link_libraries(dwRomViewer-cli m)

if(Qt5Widgets_FOUND)
    set (CMAKE_AUTOMOC ON)
    include_directories(common /usr/include/qt)
    set (UI_SOURCE_FILES
            #common/*
            qtgui/main-window.cpp
            qtgui/widgets.cpp
            qtgui/main.cpp)


    add_executable(dwRomViewer ${UI_SOURCE_FILES})

    target_link_libraries(dwRomViewer Qt5::Widgets Qt5::Gui)
else ()
  message("Could not find Qt modules, skipping GUI build.")
endif()
