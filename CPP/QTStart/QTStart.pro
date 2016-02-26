#-------------------------------------------------
#
# Project created by QtCreator 2014-12-27T22:31:07
#
#-------------------------------------------------

include(Libraries/qextserialport-1.2rc/src/qextserialport.pri)

QT       += core gui

QT += network

QT += core
QT -=gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QTStart
TEMPLATE = app
QT += network

SOURCES += main.cpp\
        mainwindow.cpp \
    ard.cpp \
    arduinoUI.cpp \
    functions.cpp \
    spark.cpp \
    raspberry.cpp \
    mytcpserver.cpp \
    raspUI.cpp

HEADERS  += mainwindow.h \
    ard.h \
    arduinoUI.h \
    functions.h \
    spark.h \
    raspberry.h \
    mytcpserver.h \
    raspUI.h

FORMS    += mainwindow.ui \
    arduinoUI.ui \
    functions.ui \
    raspUI.ui

RESOURCES += \
    resource.qrc

DISTFILES += \
    config.json
