#-------------------------------------------------
#
# Project created by QtCreator 2019-04-21T22:45:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projeto_Estrutura
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        buscar_cliente.cpp \
        cadastro.cpp \
        checkout.cpp \
        cliente.cpp \
        login_funcionario.cpp \
        main.cpp \
        tela_inicial.cpp

HEADERS += \
        buscar_cliente.h \
        cadastro.h \
        checkout.h \
        cliente.h \
        login_funcionario.h \
        tela_inicial.h

FORMS += \
        buscar_cliente.ui \
        cadastro.ui \
        checkout.ui \
        cliente.ui \
        login_funcionario.ui \
        tela_inicial.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
