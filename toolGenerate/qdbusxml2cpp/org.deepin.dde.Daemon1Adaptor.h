/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-session/dbus/interface/org.deepin.dde.Daemon1.xml -a ./dde-session/toolGenerate/qdbusxml2cpp/org.deepin.dde.Daemon1Adaptor -i ./dde-session/toolGenerate/qdbusxml2cpp/org.deepin.dde.Daemon1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_DEEPIN_DDE_DAEMON1ADAPTOR_H
#define ORG_DEEPIN_DDE_DAEMON1ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-session/toolGenerate/qdbusxml2cpp/org.deepin.dde.Daemon1.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.dde.Daemon1
 */
class Daemon1Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.deepin.dde.Daemon1")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.deepin.dde.Daemon1\">\n"
"    <method name=\"CallTrace\">\n"
"      <arg direction=\"in\" type=\"u\" name=\"times\"/>\n"
"      <arg direction=\"in\" type=\"u\" name=\"seconds\"/>\n"
"    </method>\n"
"    <method name=\"StartPart2\"/>\n"
"  </interface>\n"
        "")
public:
    Daemon1Adaptor(QObject *parent);
    virtual ~Daemon1Adaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void CallTrace(uint times, uint seconds);
    void StartPart2();
Q_SIGNALS: // SIGNALS
};

#endif
