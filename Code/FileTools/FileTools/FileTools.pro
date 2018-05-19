#-------------------------------------------------
#
# Project created by QtCreator 2018-05-05T12:54:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FileTools
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


SOURCES += \
        main.cpp \
        mainwindow.cpp \
		circle.cpp \
    smtpClient/emailaddress.cpp \
    smtpClient/mimeattachment.cpp \
    smtpClient/mimecontentformatter.cpp \
    smtpClient/mimefile.cpp \
    smtpClient/mimehtml.cpp \
    smtpClient/mimeinlinefile.cpp \
    smtpClient/mimemessage.cpp \
    smtpClient/mimemultipart.cpp \
    smtpClient/mimepart.cpp \
    smtpClient/mimetext.cpp \
    smtpClient/quotedprintable.cpp \
    smtpClient/smtpclient.cpp

HEADERS += \
        mainwindow.h \
		circle.h \
    smtpClient/emailaddress.h \
    smtpClient/mimeattachment.h \
    smtpClient/mimecontentformatter.h \
    smtpClient/mimefile.h \
    smtpClient/mimehtml.h \
    smtpClient/mimeinlinefile.h \
    smtpClient/mimemessage.h \
    smtpClient/mimemultipart.h \
    smtpClient/mimepart.h \
    smtpClient/mimetext.h \
    smtpClient/quotedprintable.h \
    smtpClient/smtpclient.h

FORMS += \
        mainwindow.ui
