QT += core gui widgets

TARGET = libmypaint
TEMPLATE = lib
CONFIG += staticlib

HEADERS += brushmodes.h \
           brushsettings.h \
           fifo.h \
           helpers.h \
           mypaint.h \
           mypaint-brush.h \
           mypaint-brush-settings-gen.h \
           mypaint-brush-settings.h \
           mypaint-config.h \
           mypaint-fixed-tiled-surface.h \
           mypaint-glib-compat.h \
           mypaint-mapping.h \
           mypaint-matrix.h \
           mypaint-rectangle.h \
           mypaint-surface.h \
           mypaint-symmetry.h \
           mypaint-tiled-surface.h \
           operationqueue.h \
           rng-double.h \
           tiled-surface-private.h \
           tilemap.h

SOURCES += brushmodes.c \
           fifo.c \
           helpers.c \
           mypaint.c \
           mypaint-brush.c \
           mypaint-brush-settings.c \
           mypaint-fixed-tiled-surface.c \
           mypaint-mapping.c \
           mypaint-matrix.c \
           mypaint-rectangle.c \
           mypaint-surface.c \
           mypaint-symmetry.c \
           mypaint-tiled-surface.c \
           operationqueue.c \
           rng-double.c \
           tilemap.c \
           libmypaint.c

INCLUDEPATH += ../json-c
LIBS += -L../json-c -ljson-c

# for C files, we need to allow C99 mode.
QMAKE_CFLAGS += -std=c99
