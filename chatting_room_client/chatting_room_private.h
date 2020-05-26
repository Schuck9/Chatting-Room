#ifndef CHATTING_ROOM_PRIVATE_H
#define CHATTING_ROOM_PRIVATE_H

#include <QWidget>
#include "chatting_room_socket.h"

namespace Ui {
class chatting_room_private;
}

class chatting_room_private : public QWidget
{
    Q_OBJECT

public:
    explicit chatting_room_private(QWidget *parent = nullptr);
    ~chatting_room_private();
signals:
    void quit();
private slots:
    void on_BackBtn_clicked();
    void on_SendBtn_clicked();

public:
    Ui::chatting_room_private *ui;
    chatting_room_socket *m_tcpSocket;  //声明通讯的socket类
private:

};

#endif // CHATTING_ROOM_PRIVATE_H
