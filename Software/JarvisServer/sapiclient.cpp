#include "sapiclient.h"

sAPIClient::sAPIClient()
{
    connect(this,SIGNAL(readyRead()),this,SLOT(readSocket()));
    connect(this,SIGNAL(disconnected()),this,SLOT(deleteLater()));
}

void sAPIClient::parseData(QByteArray &buff)
{
    //....
}


void sAPIClient::readSocket()
{
    m_buffer.append(readAll());
    parseData(m_buffer);
}
