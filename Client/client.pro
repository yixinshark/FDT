#-------------------------------------------------------
#
# project created by yingzhen.zhao 2017-03-16T 10:15
#
#-------------------------------------------------------

QT += core gui widgets

TARGET = FDT

TEMPLATE = app

include(./app/app.pri)
include(./configfile/configfile.pri)
include(./datamodel/datamodel.pri)
include(./protocol/protocol.pri)
include(./querydata/querydata.pri)
include(./userinterface/userinterface.pri)


