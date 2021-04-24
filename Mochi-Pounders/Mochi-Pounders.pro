QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    credits.cpp \
    gameoverwindow.cpp \
    help.cpp \
    main.cpp \
    mainmenu.cpp \
    mainwindow.cpp \
    pausewindow.cpp \
    settings.cpp

HEADERS += \
    credits.h \
    gameoverwindow.h \
    help.h \
    mainmenu.h \
    mainwindow.h \
    pausewindow.h \
    settings.h

FORMS += \
    credits.ui \
    gameoverwindow.ui \
    help.ui \
    mainmenu.ui \
    mainwindow.ui \
    pausewindow.ui \
    settings.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
