#ifndef SJARVIS_H
#define SJARVIS_H

#include <QObject>
#include "sjarvisnodeserver.h"
#include "sjarvisconnectionmanager.h"
#include "sjarvisgameserver.h"



class sJarvis : public QObject
{
    Q_OBJECT
public:
    explicit sJarvis(QObject *parent = 0);
    sJarvisNodeServer*          nodeServer()        {return &m_nodeServer;}
    sJarvisConnectionManager*   connectionManager() {return &m_connectionManager;}

private:
    sJarvisNodeServer        m_nodeServer;
    sJarvisConnectionManager m_connectionManager;
    sJarvisGameServer        m_gameServer;
    void loadSettings();
signals:

public slots:
    void saveSettings();

};

#endif // SJARVIS_H
