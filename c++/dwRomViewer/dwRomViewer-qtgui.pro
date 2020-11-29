
# This is the qmake project file for the gui. This should apply to all platforms
#
# Build instructions:
#
# mkdir build
# cd build
# qmake dwRomViewer.pro && make
#

INCLUDEPATH = common/
HEADERS += qtgui/main-window.h qtgui/widgets.h common/map.h common/dwr.h common/dwr_types.h

SOURCES += qtgui/main.cpp qtgui/main-window.cpp qtgui/widgets.cpp
SOURCES += common/map.cpp common/dwr.cpp

#RC_ICONS = resources/icons/dwrandomizer.ico

QT += widgets

QMAKE_CFLAGS += -std=c++17 
QMAKE_CXXFLAGS += -std=c++17 