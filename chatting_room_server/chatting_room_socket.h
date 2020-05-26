#ifndef CHATTING_ROOM_SOCKET_H
#define CHATTING_ROOM_SOCKET_H

#include <QObject>
#include <QHostAddress>
#include <QTcpSocket>

class chatting_room_socket : public QObject
{
    Q_OBJECT
public:
    explicit chatting_room_socket(QObject *parent = nullptr, QTcpSocket *tcpSocket = NULL);

    void ConnectToHost(const QHostAddress &host, const quint16 &port);
    QString GetName();
    int GetId();
    void change_NameId(const int id,const QString &cname,const int id_to);
signals:
    void signalMessage(const quint8 &type, const QString &name, const QString &dataVal, const int &Id, const int &Id_to);
    void signalStatus(const quint8 &state);
    void errorMessage(const QString &errormessage);
    void signalDisConnected();

public slots:
    // socket消息发送封装
    void SltSendMessage(const quint8 &type, const QString &name, const QString &dataVal, const int &Id, const int &Id_to);
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
