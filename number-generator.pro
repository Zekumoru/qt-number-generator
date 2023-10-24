TEMPLATE = app
TARGET = number_generator

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    numbergenerator.cpp \
    randutils.cpp

HEADERS += \
    numbergenerator.h \
    randutils.h
