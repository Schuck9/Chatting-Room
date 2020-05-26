#include "chatting_room_client.h"
#include "ui_chatting_room_client.h"
#include "chatting_room_client_main.h"
#include "ui_chatting_room_client_main.h"
#include <QStyleOption>
#include <QPainter>
QString name;
QString Id;
QString Id_to;
chatting_room_client::chatting_room_client(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::chatting_room_client)
{
    ui->setupUi(this);
//    setStyleSheet("background-image:url(:/bg.jpg);");
}

chatting_room_client::~chatting_room_client()
{
    delete ui;
}

void chatting_room_client::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
void chatting_room_client::on_loginButton_clicked()
{
    Id = ui->login_Id->text();  //获取使用者的Id
    name = ui->loginName->text();  //获取使用者的姓名
    chatting_room_client_main *win = new chatting_room_client_main;
    win->show();
    this->close();
}
