
# This is the qmake project file for the gui. This should apply to all platforms
#
# Build instructions:
#
# mkdir build
# cd build
# qmake dwrandomizer.pro && make
#

INCLUDEPATH = common/
HEADERS += ui/main-window.h ui/widgets.h
HEADERS += common/dwr.h common/crc64.h common/build.h common/mt64.h
HEADERS += common/dwr_types.h common/map.h common/chaos.h common/sprites.h
HEADERS += common/patch.h common/challenge.h common/polyfit.h

SOURCES += ui/main.cpp ui/main-window.cpp ui/widgets.cpp
SOURCES += common/mt19937-64.c common/map.c common/dwr.c
SOURCES += common/crc64.c common/chaos.c common/sprites.c
SOURCES += common/patch.c common/challenge.c common/polyfit.c

RC_ICONS = resources/icons/dwrandomizer.ico

QT += widgets
