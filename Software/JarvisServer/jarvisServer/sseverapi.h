/*
sServerAPI (Jarvis Server API)
Modificado: 22/05/2016
Descripción:
*/

#ifndef SSEVERAPI_H
#define SSEVERAPI_H
#include <QTcpServer>

class sSeverAPI: QTcpServer
{
private:
    sJarvisNodeServer        m_nodeServer;
    sJarvisConnectionManager m_connectionManager;

    QList<sClientAPI> m_nodes;
    QList<sCommandAPI> m_cmd;

    void registerNewNode(sClientAPI *node);
    void removeNode(QString Signature);

public:
    sSeverAPI(sJarvisNodeServer* nodeServer, sJarvisConnectionManager* connectionManager);
    // Getters
    sJarvisNodeServer*          nodeServer()        {return &m_nodeServer;}
    sJarvisConnectionManager*   connectionManager() {return &m_connectionManager;}

    // Metodos
   void setCommand(QString Signature, sCommandAPI *cmd);
   void handleNewMessage(sClientAPI *client, sMessageAPI *msg);

   protected slots:
        void handleNewConn();
};

#endif // SSEVERAPI_H
