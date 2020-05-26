#ifndef CHATTING_ROOM_CLIENT_MAIN_H
#define CHATTING_ROOM_CLIENT_MAIN_H

#include <QWidget>
#include <QTcpSocket>
#include <QHostAddress>
#include "chatting_room_socket.h"
#include "chatting_room_private.h"

namespace Ui {
class chatting_room_client_main;
}

class chatting_room_client_main : public QWidget
{
    Q_OBJECT

public:
    explicit chatting_room_client_main(QWidget *parent = nullptr);
    ~chatting_room_client_main();
    chatting_room_private *chatting_private;
    chatting_room_socket *m_tcpSocket;  //声明通讯的socket类
private:
    Ui::chatting_room_client_main *ui;
    QTcpSocket *tcp;  //声明tcp的类

signals:
    void PrivateShow(const QString &name, const QString &dataVal);
public slots:
    void SltTcpReply(const quint8 &type,const QString &name, const QString &dataVal, const int &Id, const int &Id_to);
    void ErrorShow(const QString &errormessage);
    void QuitBack();

private slots:
    void on_ButtonSend_clicked();
    void on_Emoji_clicked();
    void on_Picture_clicked();
    void on_ChooseButton_clicked();
    void on_LeaveButton_clicked();
    void on_File_clicked();
    void on_UserRefresh_clicked();

private:
    void update_users(const QString &name, const QString &dataVal);
    void update_messages(const QString &name, const QString &dataVal);
    void update_userList(const QString &name, const QString &dataVal);
    void private_widget(const QString &name,const int Id);
    void private_message(const int Id, const QString &name, const QString &dataVal);
    void private_leave(const QString &name,const int Id);
    void leave_users(const QString &name, const QString &dataVal);
    void send_private_message(const QString &PriMes);
    void file_access(const QString &name,const int Id);
};

#endif // CHATTING_ROOM_CLIENT_MAIN_H
