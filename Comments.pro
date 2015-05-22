#-------------------------------------------------
#
# Project created by QtCreator 2015-05-07T19:09:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Comments
TEMPLATE = app


SOURCES += main.cpp\
        minhajanela.cpp \
    telalogin.cpp \
    about.cpp \
    editar.cpp

HEADERS  += minhajanela.h \
    telalogin.h \
    about.h \
    editar.h

FORMS    += minhajanela.ui \
    telalogin.ui \
    about.ui \
    editar.ui

RESOURCES += \
    content.qrc
