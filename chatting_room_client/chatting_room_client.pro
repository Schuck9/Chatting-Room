QT       += core gui
QT       += network
QT       += sql
#QT       += multimedia multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chatting_room_client_main.cpp \
    chatting_room_private.cpp \
    chatting_room_socket.cpp \
    main.cpp \
    chatting_room_client.cpp

HEADERS += \
    chatting_room_client.h \
    chatting_room_client_main.h \
    chatting_room_private.h \
    chatting_room_socket.h

FORMS += \
    chatting_room_client.ui \
    chatting_room_client_main.ui \
    chatting_room_private.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../build-chatting_room_client-Desktop_Qt_5_12_7_GCC_64bit-Debug/bg.jpg
