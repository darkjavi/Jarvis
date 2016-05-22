#ifndef SJARVISGAMESERVER_H
#define SJARVISGAMESERVER_H

#include <QObject>
#include "sjarvisnodeserver.h"


class sJarvisGameServer : public QObject
{
    Q_OBJECT
public:
    explicit sJarvisGameServer(sJarvisNodeServer* nodeServer);
private:
    sJarvisNodeServer* m_nodeServer;

signals:

public slots:
};

#endif // SJARVISGAMESERVER_H
