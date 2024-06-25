QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

HEADERS += ../Unik/Unik_head.h
SOURCES +=  tst_tst_test_solution.cpp ../Unik/Unik_main.cpp

