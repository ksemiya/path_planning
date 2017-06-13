QT += core
QT -= gui

CONFIG += c++11

TARGET = test_tinyxml_project
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    tinyxml2.cpp

HEADERS += \
    tinyxml2.h

DISTFILES += \
    comments.txt \
    test.xml \
    TODO.txt
