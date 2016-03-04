TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -lboost_unit_test_framework

SOURCES += main.cpp \
    fizzbuzz.cpp \
    test_fizzbuzz.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    stdafx.h

