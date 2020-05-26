#include "chatting_room_server.h"
#include "ui_chatting_room_server.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlDatabase>
#include <QThread>
#include "chatting_room_socket.h"
#include <QTime>
#include <QFile>
#include <qdir.h>


chatting_room_server::chatting_room_server(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::chatting_room_server)
{
    ui->setupUi(this);
    m_tcpServer = new QTcpServer(this); // socket(),注意这里的m_tcpServer类可是QTcpServer类

    if (!m_tcpServer->listen(QHostAddress::LocalHost, 3000)) // bind(...), listen(),建立绑定和监听
    {
        QMessageBox::critical(this, "error", "bind failed");
        exit(0);
    }

    connect(m_tcpServer, SIGNAL(newConnection()), this, SLOT(new_client()));  //有新的链接
}

chatting_room_server::~chatting_room_server()
{
    delete ui;
}

void chatting_room_server::new_client()
{
    chatting_room_socket *client = new chatting_room_socket(this, m_tcpServer->nextPendingConnection());
    connect(client, SIGNAL(signalMessage(quint8, QString, QString, int, int)), this, SLOT(SltTcpReply(quint8, QString, QString, int, int)));
    connect(client, SIGNAL(signalDisConnected()), this, SLOT(lost_client()));
}
void chatting_room_server::chat_record_read(const QString &Id)
{
    QString displayString;
    QFile file("/home/alvin/text.txt");
     if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
         return;

     QTextStream in(&file);
     QString line = in.readLine();

     while (!line.isNull())
     {
    //         process_line(line);
         line = in.readLine();
         displayString.append(line);
     }
}
void chatting_room_server::chat_record_save(const quint8 &type, const QString &name, const QString &dataval, const int &Id, const int &Id_to)
{
    QDateTime da_time;
    QString time_str = da_time.currentDateTime().toString("yyyy-MM-dd HH-mm-ss");
//    QString runPath = QCoreApplication::applicationFilePath();
//    QString dirPath = QCoreApplication::applicationDirPath();
//    ui->pathview->setText(runPath); //X:qtworkspace/xxx/xx-desktop-debug/debug/xxx.exe
//    ui->pathview_2->setText(dirPath);//X:qtworkspace/xxx/xx-desktop-debug/debug/
    QDir *DataFile = new QDir;
    bool exist = DataFile->exists("ChatRecord");
    if(!exist)
    {
        bool isok = DataFile->mkdir("ChatRecord"); // 新建文件夹
            if(!isok)
                QMessageBox::warning(this,"sdf","can't mkdir",QMessageBox::Yes);
    }
//            QString fileName = "ChatRecord/"+time_str+"ChatRecord.txt";
    QString fileName = "ChatRecord/ChatRecord.txt";
    QString str = "Chat record saved!";
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append))
    {
        QMessageBox::warning(this,"sdf","can't open",QMessageBox::Yes);
    }
    QTextStream stream(&file);
//    stream<<time_str+":"+str<<"\n";
//    stream<<time_str+" "+name+":\""+dataval+"\""<<"\n";
    stream<<dataval<<"\n";
    file.close();
}
void chatting_room_server::SltTcpReply(const quint8 &type, const QString &name, const QString &dataval, const int &Id, const int &Id_to)
{
    QString RecStr;
    QString ListUserStr = "";
    switch(type){
    case 1 :
        {
        //1号 信号，接受client发送到连接信号，然后现遍历列表，防止重复；再添加入表，最后想其他成员发送
        chatting_room_socket *client = (chatting_room_socket *)this->sender();
        client->change_NameId(Id,name,Id_to);
        RecStr = name + " connected , Id: " + QString::number(client->GetId());  //存储相关的链接到client，存储其对应到姓名
        ui->server_message->append(RecStr);
        ui->server_message->moveCursor(QTextCursor::End);  //服务器端显示信息
        //遍历qvector，重复覆盖
        for (int i = 0; i < m_clients.size(); i++)
            {
                if(Id == m_clients.at(i)->GetId())
                {
                    ui->server_message->append(name + " Id: " + "already exits, remove the last one");
                    ui->server_message->moveCursor(QTextCursor::End);  //服务器端显示信息
                    m_clients.remove(i);  //防止重复登录
                }
            }
        m_clients.push_back(client);
        //向每一个client发送登录信号
        for (int i = 0; i < m_clients.size(); i++)
            {
                m_clients.at(i)->SltSendMessage(type, name," ",0,-1);  //发送上线的信息
            }
        }
        break;
    case 2 :
        {
        //2号信号，向每一个client发送不同client发来到群聊信息
        this->chat_record_save(type, name,dataval, Id, Id_to);
        chatting_room_socket *client = (chatting_room_socket *)this->sender();
        RecStr = name + " expresses , Id: " + QString::number(Id) + ",  words: " + dataval;
        ui->server_message->append(RecStr);
        ui->server_message->moveCursor(QTextCursor::End);  //服务器断显示信息
        for (int i = 0; i < m_clients.size(); i++)
            {
                m_clients.at(i)->SltSendMessage(type, name,dataval,-1,-1);  //发送的信息
            }
        }
        break;
    case 3 :
        {
        //3号 信号，向所有client发送成员信息
        for (int i = 0; i < m_clients.size(); i++)
            {
                ListUserStr += QString::number(m_clients.at(i)->GetId()) + " " + m_clients.at(i)->GetName() + "\n";
            }
        for (int i = 0; i < m_clients.size(); i++)
            {
                m_clients.at(i)->SltSendMessage(3, name,ListUserStr,-1,-1);  //发送成员列表
            }
         ui->user_list->append(ListUserStr);
         ListUserStr = "";  //发送完后清空list
        }
        break;
    case 4 :
        {
        //4号 信号，向想要私聊的对象发送信息，使得他们可以跳入私聊窗口
        ui->server_message->append(QString::number(Id) + " wants to chat with " + QString::number(Id_to));
        ui->server_message->moveCursor(QTextCursor::End);  //服务器断显示信息
        for (int i = 0; i < m_clients.size(); i++)
            {
                if(Id_to == m_clients.at(i)->GetId())
                {
                    m_clients.at(i)->SltSendMessage(4,name,"",Id,Id_to);
                }
            }
        }
        break;
    case 5 :
        {
        //5号 信号，向相关到client发送私聊信息
        ui->server_message->append(QString::number(Id) + " chatting privately with " + QString::number(Id_to) + " words :" + dataval);
        ui->server_message->moveCursor(QTextCursor::End);  //服务器显示信息
        for (int i = 0; i < m_clients.size(); i++)
            {
                if(Id_to == m_clients.at(i)->GetId())
                {
                    m_clients.at(i)->SltSendMessage(5,name,dataval,Id,Id_to);
                }
            }
        }
        break;
    case 6 :
        {
        //对每一个client发送下线信息
        chatting_room_socket *client = (chatting_room_socket *)this->sender();
        QString RecStr;
        QString UserName;
        int UserId;
        for (int i = 0; i < m_clients.size(); i++)
            {
                if (client == m_clients.at(i))
                {
                    RecStr = m_clients.at(i)->GetName() + " disconnected , Id: " + QString::number(m_clients.at(i)->GetId());  //存储相关的链接到client，存储其对应到姓名
                    UserName = m_clients.at(i)->GetName();
                    UserId = m_clients.at(i)->GetId();
                    ui->server_message->append(RecStr);
                    m_clients.remove(i);
                }
            }

        for (int i = 0; i < m_clients.size(); i++)
            {

                m_clients.at(i)->SltSendMessage(6,UserName,"",UserId,-1);  //发送成员下线信息
            }
        }
        break;
    case 7 :
        {
        //7号 信号，向私聊client发送离开到信息
        ui->server_message->append(QString::number(Id) + " has left the private chat with " + QString::number(Id_to));
        ui->server_message->moveCursor(QTextCursor::End);  //服务器显示信息
        for (int i = 0; i < m_clients.size(); i++)
            {
                if(Id_to == m_clients.at(i)->GetId())
                {
                    m_clients.at(i)->SltSendMessage(7,name,dataval,Id,Id_to);
                }
            }

        }
        break;
    case 8 :
        {
        //8号信号，向每一个client发送不同client发来到群聊信息

        }
        break;
    case 9 :
        {
            QString displayString;
            QFile file("./ChatRecord/ChatRecord.txt");
             if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
                 return;

             QTextStream in(&file);
             QString line = in.readLine();
            in.seek(0);
             while (!line.isNull())
             {
            //         process_line(line);


                 displayString.append(line+"\n");
                 line = in.readLine();
                 chatting_room_socket *client = (chatting_room_socket *)this->sender();
                 RecStr = line;
                 ui->server_message->append(RecStr);
                 ui->server_message->moveCursor(QTextCursor::End);  //服务器断显示信息

//                 for (int i = 0; i < m_clients.size(); i++)
//                {
////                    QThread::sleep(0.5);
//                    m_clients.at(i)->SltSendMessage(2, name,line,-1,-1);  //发送的信息
//                }
             }
        //9号信号，向每一个client发送不同client发来到群聊信息
              for (int i = 0; i < m_clients.size(); i++)
             {
//                    QThread::sleep(0.5);
                 m_clients.at(i)->SltSendMessage(2, name,displayString,-1,-1);  //发送的信息
             }
            QMessageBox::information(NULL, "Chat", "ChatRecord Loaded", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        }
        break;
    }
}


