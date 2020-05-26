#include "chatting_room_client.h"
#include "ui_chatting_room_client.h"
#include "chatting_room_client_main.h"
#include "ui_chatting_room_client_main.h"
#include "chatting_room_socket.h"
#include "chatting_room_private.h"
#include "ui_chatting_room_private.h"
#include <QThread>
#include <QMessageBox>
#include <QTime>
#include <QFile>
#include <QFileDialog>
#include <QPixmap>
#include <QMovie>
extern QString name;
extern QString Id;
extern QString Id_to;
chatting_room_client_main::chatting_room_client_main(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chatting_room_client_main)
{
    m_tcpSocket = new chatting_room_socket();
    chatting_private = new chatting_room_private();
    ui->setupUi(this);
//    QLabel* bg = new QLabel(this);
//    bg->setPixmap(QPixmap("./picture/bg.jpg"));
//    bg->setScaledContents(true);
//    bg->resize(this->size());
//    setStyleSheet("background-image:url(:/bg.jpg);");

//    QString filename("iup.jpg");
//    QImage* img=new QImage;
//    if(! (img->load(filename) ) ) //加载图像
//    {
//        QMessageBox::information(this,
//                                 tr("打开图像失败"),
//                                 tr("打开图像失败!"));
//        delete img;
//        return;
//    }

//    QSize laSize=ui->BG->size();//label_carema是要显示图片的label的名称
//    QImage image1=img->scaled(laSize,Qt::IgnoreAspectRatio);//重新调整图像大小以适应窗口
//    ui->BG->setPixmap(QPixmap::fromImage(image1));//显示

    QMovie *movie =new QMovie("iu.gif");
    ui->BG->setMovie(movie);
    movie->start();
    ui->BG->show();

    m_tcpSocket->change_NameId(Id.toInt(),name,-1);  //设置类的id号
    this->setWindowTitle("Welcome, dear "+name);
    m_tcpSocket->ConnectToHost(QHostAddress::LocalHost,3000);  //设置链接
    m_tcpSocket->SltSendMessage(1,name,"",Id.toInt(),-1);  //转化并且发送数据   
    //建立相关的connect
    connect(m_tcpSocket, SIGNAL(signalMessage(quint8, QString, QString, int, int)), this, SLOT(SltTcpReply(quint8, QString, QString, int, int)));  //设置信号signalMessage的执行槽函数
    connect(m_tcpSocket,SIGNAL(errorMessage(QString)),this,SLOT(ErrorShow(QString)));
    connect(chatting_private,SIGNAL(quit()),this,SLOT(QuitBack()));
}

chatting_room_client_main::~chatting_room_client_main()
{
    m_tcpSocket->SltSendMessage(6,name,"",Id.toInt(),-1);  //发送退出信息6号信息
    this->close();
    delete ui;
    delete m_tcpSocket;
}

//这是按下按键发送信息的函数
void chatting_room_client_main::on_ButtonSend_clicked()
{
    QString dataval = ui->MessageSend->text();
    ui->MessageSend->clear();
    QDateTime da_time;
    QString time_str = da_time.currentDateTime().toString("yyyy-MM-dd HH-mm-ss");
    QString SendStr = time_str+" "+name+":\""+dataval+"\"";
    m_tcpSocket->SltSendMessage(2,name,SendStr,Id.toInt(),-1);  //转化并且发送数据
    //tcp->write(SendStr.toUtf8());
}

void chatting_room_client_main::on_Emoji_clicked()
{
    QString SendStr = "8:= =!!!";

    m_tcpSocket->SltSendMessage(8,name,SendStr,Id.toInt(),-1);  //转化并且发送数据
    //tcp->write(SendStr.toUtf8());
}

void chatting_room_client_main::on_File_clicked()
{
     qDebug()<<"open file...";
     QString displayString;
     QString line;
      //定义文件对话框类
      QFileDialog *fileDialog = new QFileDialog(this);
      //定义文件对话框标题
      fileDialog->setWindowTitle(tr("打开文件"));
      //设置默认文件路径
      fileDialog->setDirectory(".");
      //设置文件过滤器
      //fileDialog->setNameFilter(tr("Images(*.png *.jpg *.jpeg *.bmp)"));
      fileDialog->setNameFilter(tr("text(*.txt)"));
      //设置可以选择多个文件,默认为只能选择一个文件QFileDialog::ExistingFiles
      fileDialog->setFileMode(QFileDialog::ExistingFiles);
      //设置视图模式
      fileDialog->setViewMode(QFileDialog::Detail);
      //打印所有选择的文件的路径
      QStringList fileNames;
      if (fileDialog->exec())
      {
        fileNames = fileDialog->selectedFiles();
      }
      for (auto tmp : fileNames)
      {
          QFile file(tmp);
           if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
               return;

           QTextStream in(&file);
           in.seek(0);
           line = in.readLine();
           while (!line.isNull())
           {

                displayString.append(line+"\n");
                line = in.readLine();
           }

//           displayString = in.readAll();
           ui->MessageRec->append(displayString);
           ui->MessageRec->moveCursor(QTextCursor::End);
      }

      QMessageBox::information(NULL, "Chat", "Chat record loaded", QMessageBox::Yes, QMessageBox::Yes);

}

void chatting_room_client_main::on_Picture_clicked()
{
    QString SendStr = "9:An abtract Picture";

    m_tcpSocket->SltSendMessage(9,name,SendStr,Id.toInt(),-1);  //转化并且发送数据
    //tcp->write(SendStr.toUtf8());
}
//这是接收信息进行处理的函数
void chatting_room_client_main::SltTcpReply(const quint8 &type, const QString &name, const QString &dataval, const int &Id, const int &Id_to)
{
    switch(type){
    case 1 :
        {
            update_users(name,dataval);  //解析新用户进入聊天室
        }
        break;
    case 2 :
        {
            update_messages(name,dataval);  //更新消息
        }
        break;
    case 3 :
        {
            update_userList(name,dataval);  //这是更新用户list的函数
        }
        break;
    case 4 :
        {
            private_widget(name,Id);  //转变窗口函数
        }
        break;
    case 5 :
        {
            private_message(Id,name,dataval);
        }
        break;
    case 6 :
        {
            leave_users(name,dataval);  //用户离开的函数
        }
        break;
    case 7 :
        {
            private_leave(name,Id);
        }
        break;
    case 8 :
        {
            update_messages(name,dataval);  //更新消息
        }
        break;
    case 9 :
        {
            update_messages(name,dataval);  //更新消息
        }
        break;
    }
}

//1号 这是新用户登录的槽函数
void chatting_room_client_main::update_users(const QString &name, const QString &dataVal)
{
    QString RecStr;
    RecStr = name + " has entered the room";
    ui->MessageRec->append(RecStr);
    ui->MessageRec->moveCursor(QTextCursor::End);
    QThread::sleep(1);  //暂停1s
    m_tcpSocket->SltSendMessage(3,"","",-1,-1);  //转化并且发送请求更新用户列表的数据
}


//2 号这是消息更新的函数
void chatting_room_client_main::update_messages(const QString &name, const QString &dataVal)
{
    QString RecStr;
//    QString time_str = da_time.currentDateTime().toString("yyyy-MM-dd HH-mm-ss");
    RecStr = dataVal;

    ui->MessageRec->append(RecStr);
    ui->MessageRec->moveCursor(QTextCursor::End);
}

//3号 这是更新用户list的函数
void chatting_room_client_main::update_userList(const QString &name, const QString &dataVal)
{
    ui->UserList->clear();
    ui->UserList->append(dataVal);
}


//4号 对应的转变窗口函数
void chatting_room_client_main::private_widget(const QString &name,const int Id)
{
    chatting_private->show();
    chatting_private->ui->MessageRecFrom->clear();  //清空以下之前的信息
    chatting_private->setWindowTitle("Id : " + QString::number(Id) + " name : " + name + " is chatting with you");
    Id_to = QString::number(Id);
    this->hide();
}

//5号 对应到私聊消息的函数
void chatting_room_client_main::private_message(const int Id, const QString &name, const QString &dataVal)
{
    chatting_private->ui->MessageRecFrom->append(name + " : " + dataVal);
    chatting_private->ui->MessageRecFrom->moveCursor(QTextCursor::End);
    ::Id_to = QString::number(Id);
}

//6号 接收成员信息离开的函数
void chatting_room_client_main::leave_users(const QString &name, const QString &dataVal)
{
    QString RecStr;
    RecStr = name + " has left the room";
    ui->MessageRec->append(RecStr);
    ui->MessageRec->moveCursor(QTextCursor::End);
    QThread::sleep(1);  //暂停1s
    m_tcpSocket->SltSendMessage(3,"","",-1,-1);  //转化并且发送请求更新用户列表的数据
}

//7号 接收私聊成员离开到函数
void chatting_room_client_main::private_leave(const QString &name,const int Id)
{
    chatting_private->ui->MessageRecFrom->append(name + " has left the private chat");
    chatting_private->ui->MessageRecFrom->moveCursor(QTextCursor::End);
    ::Id_to = QString::number(Id);
}

//9号 txt read function
void chatting_room_client_main::file_access(const QString &name,const int Id)
{

}
//leave 按键的槽函数
void chatting_room_client_main::on_LeaveButton_clicked()
{
     m_tcpSocket->SltSendMessage(6,name,"",Id.toInt(),-1);  //发送退出信息6号信息
     this->close();
}

//ok 按键对应的转变窗口函数
void chatting_room_client_main::on_ChooseButton_clicked()
{
    QString Id_choose;
    Id_choose = ui->ChooseUser->text();
    Id_to = Id_choose;
    m_tcpSocket->SltSendMessage(4,name,"",Id.toInt(),Id_to.toInt());
    chatting_private->setWindowTitle("You are chatting with Id: "+Id_to);
    chatting_private->ui->MessageRecFrom->clear();  //清空以下之前的信息
    chatting_private->show();
    this->hide();
}

//quit() 信号对应的退出的槽函数
void chatting_room_client_main::QuitBack()
{
    chatting_private->close();
    this->show();
}

//这是错误信息显示的函数
void chatting_room_client_main::ErrorShow(const QString &errormessage)
{
    QMessageBox::critical(this, "error", errormessage);
    exit(0);
}

//refresh 按键按下到刷新类表的函数
void chatting_room_client_main::on_UserRefresh_clicked()
{
    m_tcpSocket->SltSendMessage(3,"","",-1,-1);  //转化并且发送请求更新用户列表的数据
}
