QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Animal.hh \
    Carnivorous.hh \
    Herbivorous.hh \
    catch.hpp \
    infographic_extinction-main/CSVReader.hh \
    infographic_extinction-main/Specie.hh \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc

DISTFILES += \
    infographic_extinction-main/Makefile \
    infographic_extinction-main/README.md \
    infographic_extinction-main/date_recup.py \
    infographic_extinction-main/extinct_animals.csv

