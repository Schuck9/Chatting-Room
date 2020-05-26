#ifndef CHATTING_ROOM_SOCKET_H
#define CHATTING_ROOM_SOCKET_H

#include <QObject>
#include <QTcpSocket>
//这是一个服务器socket通信类

class chatting_room_socket : public QObject
{
    Q_OBJECT
public:
    explicit chatting_room_socket(QObject *parent = nullptr);

    void ConnectToHost(const QHostAddress &host, const quint16 &port);
signals:
    void signalMessage(const quint8 &type, const QString &name, const QString &dataVal, const int &Id, const int &Id_to);
    void signalStatus(const quint8 &state);
    void errorMessage(const QString &errormessage);

public slots:
    // socket消息发送封装
    void SltSendMessage(const quint8 &type, const QString &name, const QString &dataVal, const int &Id, const int &Id_to);
    void change_NameId(const int id,const QString &cname,const int id_to);
private:
    // tcpsocket
    QTcpSocket *m_tcpSocket;
    int m_nId;
    int m_nId_to;
    QString m_name;
private slots:
    // 与服务器断开链接
    void SltDisconnected();
    // tcp消息处理
    void SltReadyRead();


};

#endif // CHATTING_ROOM_SOCKET_H
