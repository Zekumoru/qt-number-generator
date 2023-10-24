TEMPLATE = app
TARGET = number_generator

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    numbergenerator.cpp \
    randutils.cpp \
    widgets/datawidget.cpp \
    widgets/sumwidget.cpp

HEADERS += \
    numbergenerator.h \
    randutils.h \
    widgets/datawidget.h \
    widgets/sumwidget.h
