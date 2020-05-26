#ifndef CHATTING_ROOM_CLIENT_H
#define CHATTING_ROOM_CLIENT_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class chatting_room_client; }
QT_END_NAMESPACE

class chatting_room_client : public QWidget
{
    Q_OBJECT

public:
    chatting_room_client(QWidget *parent = nullptr);
    ~chatting_room_client();
    void paintEvent(QPaintEvent *event);
private slots:
    void on_loginButton_clicked();

private:
    Ui::chatting_room_client *ui;

};
#endif // CHATTING_ROOM_CLIENT_H
