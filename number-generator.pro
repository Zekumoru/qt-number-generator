TEMPLATE = app
TARGET = number_generator

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    numbergenerator.cpp \
    randutils.cpp \
    widgets/averagewidget.cpp \
    widgets/datawidget.cpp \
    widgets/maxwidget.cpp \
    widgets/minwidget.cpp \
    widgets/sumwidget.cpp

HEADERS += \
    numbergenerator.h \
    randutils.h \
    widgets/averagewidget.h \
    widgets/datawidget.h \
    widgets/maxwidget.h \
    widgets/minwidget.h \
    widgets/sumwidget.h
