#include "chatting_room_private.h"
#include "ui_chatting_room_private.h"
#include "chatting_room_client_main.h"
#include "ui_chatting_room_client_main.h"
#include "chatting_room_socket.h"
extern QString name;
extern QString Id;
extern QString Id_to;
chatting_room_private::chatting_room_private(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chatting_room_private)
{
    ui->setupUi(this);
    m_tcpSocket = new chatting_room_socket();
    m_tcpSocket->change_NameId(Id.toInt(),name,-1);  //设置类的id号
    m_tcpSocket->ConnectToHost(QHostAddress::LocalHost,3000);  //设置链接
}

chatting_room_private::~chatting_room_private()
{
    delete ui;
}


//这是back 按键按下返回上一页的槽函数
void chatting_room_private::on_BackBtn_clicked()
{
    m_tcpSocket->SltSendMessage(7,name,"",Id.toInt(),Id_to.toInt());  //私聊对象离开用的
    this->close();
    Q_EMIT quit();
}

//这是send 按键按下的槽函数
void chatting_room_private::on_SendBtn_clicked()
{
    QString SendStr = ui->MessageSendTo->text();
    ui->MessageSendTo->clear();
    ui->MessageRecFrom->append(name + " : " + SendStr);
    ui->MessageRecFrom->moveCursor(QTextCursor::End);
    m_tcpSocket->SltSendMessage(5,name,SendStr,Id.toInt(),Id_to.toInt());  //选择私聊对象用的
}
