#-------------------------------------------------
#
# Project created by QtCreator 2015-06-15T21:08:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = wwdc
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    videolistview.cpp \
    videoitem.cpp \
    videoitemviewmodel.cpp

HEADERS  += mainwindow.h \
    videolistview.h \
    videoitem.h \
    videoitemviewmodel.h

FORMS    += mainwindow.ui
