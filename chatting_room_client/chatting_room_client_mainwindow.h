#ifndef CHATTING_ROOM_CLIENT_MAINWINDOW_H
#define CHATTING_ROOM_CLIENT_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class chatting_room_client_mainwindow;
}

class chatting_room_client_mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit chatting_room_client_mainwindow(QWidget *parent = nullptr);
    ~chatting_room_client_mainwindow();

private:
    Ui::chatting_room_client_mainwindow *ui;
};

#endif // CHATTING_ROOM_CLIENT_MAINWINDOW_H
