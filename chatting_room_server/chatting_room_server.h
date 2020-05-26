#ifndef CHATTING_ROOM_SERVER_H
#define CHATTING_ROOM_SERVER_H

#include <QWidget>
#include <QTcpServer>
#include <QList>
#include <QTcpSocket>
#include <QObject>
#include <QVector>
#include "chatting_room_socket.h"

QT_BEGIN_NAMESPACE
namespace Ui { class chatting_room_server; }
QT_END_NAMESPACE

class chatting_room_server : public QWidget
{
    Q_OBJECT

public:
    chatting_room_server(QWidget *parent = nullptr);
    ~chatting_room_server();

signals:

public slots:
    void new_client();  // newConnection()
    void SltTcpReply(const quint8 &type, const QString &name, const QString &dataval, const int &Id, const int &Id_to);
    void chat_record_save(const quint8 &type, const QString &name, const QString &dataval, const int &Id, const int &Id_to);
    void chat_record_read(const QString &Id);
private:
    Ui::chatting_room_server *ui;
    QTcpServer *server;
    QList<QTcpSocket *> clients;
    QTcpServer *m_tcpServer;
    QVector < chatting_room_socket * > m_clients;
private:
    void user_login_server(const QString &name, const QString &dataVal);  //这是一个server更新到函数

};
#endif // CHATTING_ROOM_SERVER_H
