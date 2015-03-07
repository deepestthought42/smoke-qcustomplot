unix:TEMPLATE     = lib
win32:TEMPLATE    = vclib

DEFINES += QCUSTOMPLOT_COMPILE_LIBRARY

INCLUDEPATH += ../
SOURCES +=  ../qcustomplot.cpp \
           smokedata.cpp \
           x_1.cpp \
           x_2.cpp \
           x_3.cpp \
           x_4.cpp \
           x_5.cpp \
           x_6.cpp \
           x_7.cpp \
           x_8.cpp \
           x_9.cpp \
           x_10.cpp 


HEADERS += ../qcustomplot.h
           
CONFIG      += qt thread debug dll

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport


unix:LIBS += -lsmokeqtcore -lsmokebase -lsmokeqtgui 
win32:LIBS += smokebase.lib
