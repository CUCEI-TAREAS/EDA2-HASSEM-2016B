QT += core
QT -= gui

CONFIG += c++11

TARGET = indices
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    menu.cpp \
    node.cpp \
    list.cpp \
    animal.cpp

HEADERS += \
    menu.h \
    node.h \
    list.h \
    animal.h
