#ifndef CHATTING_ROOM_CLIENTSOCKET_H
#define CHATTING_ROOM_CLIENTSOCKET_H

#include <QObject>
#include <QTcpSocket>
//这是一个客户端用的socket通信类

class chatting_room_clientsocket
{
public:
    chatting_room_clientsocket();
signals:
    void signalMessage(const quint8 &type, const QJsonValue &dataVal);
    void signalStatus(const quint8 &state);
public slots:
    // socket消息发送封装
    void SltSendMessage(const quint8 &type, const QJsonValue &dataVal);
    // 发送上线通知
    void SltSendOnline();
    // 发送下线通知
    void SltSendOffline();
private:
    // tcpsocket
    QTcpSocket *m_tcpSocket;
    int m_nId;
};

#endif // CHATTING_ROOM_CLIENTSOCKET_H
