#include "sseverapi.h"

sSeverAPI::sSeverAPI(sJarvisNodeServer* nodeServer, sJarvisConnectionManager* connectionManager)
{
    this->m_nodeServer = nodeServer;
    this->m_connectionManager = connectionManager;
}
