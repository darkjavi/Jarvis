#ifndef SAPICLIENT_H
#define SAPICLIENT_H

#include <QObject>
#include <QTcpSocket>

class sAPIClient : public QTcpSocket
{
Q_OBJECT

public:
    sAPIClient();

protected:
    QByteArray m_buffer;

    void parseData(QByteArray &buff);

    signals:

protected slots:
    void readSocket();

public slots:
};

#endif // SAPICLIENT_H
