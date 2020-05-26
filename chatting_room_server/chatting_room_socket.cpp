#include "chatting_room_socket.h"
#include <QJsonObject>
#include <QJsonDocument>

chatting_room_socket::chatting_room_socket(QObject *parent, QTcpSocket *tcpSocket) : QObject(parent)
{
    m_nId = -1;

    if (tcpSocket == NULL) m_tcpSocket = new QTcpSocket(this);
    m_tcpSocket = tcpSocket;

    connect(m_tcpSocket, SIGNAL(readyRead()), this, SLOT(SltReadyRead()));
    connect(m_tcpSocket,SIGNAL(disconnect()),this,SLOT(SltDisconnect()));
}

//这是一个改变id参数的函数
void chatting_room_socket::change_NameId(const int id,const QString &cname,const int id_to)
{
    m_name = cname;
    m_nId = id;
    m_nId_to = id_to;
}

QString chatting_room_socket::GetName()
{
    return m_name;
}

int chatting_room_socket::GetId()
{
    return m_nId;
}
//解析数据用的 client 和 socket 两端都会用到的
void chatting_room_socket::SltReadyRead()
{
    // 读取socket数据
    QByteArray byRead = m_tcpSocket->readAll();
    QJsonParseError jsonError;
    // 转化为 JSON 文档
    QJsonDocument doucment = QJsonDocument::fromJson(byRead, &jsonError);
    // 解析未发生错误
    if (!doucment.isNull() && (jsonError.error == QJsonParseError::NoError)) {
           // JSON 文档为对象
           if (doucment.isObject()) {
               // 转化为对象
               QJsonObject jsonObj = doucment.object();
               QString name = jsonObj.value("name").toString();
               QString dataVal = jsonObj.value("data").toString();
               int nType = jsonObj.value("type").toInt();
               int Id = jsonObj.value("Id").toInt();
               int Id_to = jsonObj.value("Id_to").toInt();

               // 根据消息类型解析服务器消息
               switch (nType) {
               case 1:                  
                  {
                        Q_EMIT signalMessage((quint8)nType,name,dataVal,Id,Id_to);  //发送新用户登录的信号，使得client_main里面执行相关的槽函数
                  }
                      break;
               case 2:
                  {
                        Q_EMIT signalMessage((quint8)nType,name,dataVal,Id,Id_to);
                  }
                      break;
               case 3 :
                   {
                        Q_EMIT signalMessage((quint8)nType,name,dataVal,Id,Id_to);
                   }
                      break;
               case 4 :
                   {
                        Q_EMIT signalMessage((quint8)nType,name,dataVal,Id,Id_to);
                   }
                      break;
               case 5 :
                   {
                        Q_EMIT signalMessage((quint8)nType,name,dataVal,Id,Id_to);
                   }
                      break;
               case 6 :
                   {
                        Q_EMIT signalMessage((quint8)nType,name,dataVal,Id,Id_to);
                   }
                      break;
               case 7 :
                   {
                        Q_EMIT signalMessage((quint8)nType,name,dataVal,Id,Id_to);
                   }
                      break;
               case 8 :
                   {
                        Q_EMIT signalMessage((quint8)nType,name,dataVal,Id,Id_to);
                   }
                      break;
               case 9 :
                   {
                        Q_EMIT signalMessage((quint8)nType,name,dataVal,Id,Id_to);
                   }
                      break;
                }
            }
      }
}

//这是发送数据的函数，要转化成json文档再发送
void chatting_room_socket::SltSendMessage(const quint8 &type, const QString &name, const QString &dataVal, const int &Id, const int &Id_to)
{
    if (!m_tcpSocket->isOpen()) {
        Q_EMIT errorMessage("connection error");  //发送错误信息
    }
    // 构建 Json 对象
    QJsonObject json;
    json.insert("type", type);
    json.insert("Id", Id);
    json.insert("Id_to",Id_to);
    json.insert("name",name);
    json.insert("data", dataVal);

    // 构建 Json 文档
    QJsonDocument document;
    document.setObject(json);
    m_tcpSocket->write(document.toJson(QJsonDocument::Compact));
}

//这是一个client链接服务器的函数，注意使用QHostAddress 地址
void chatting_room_socket::ConnectToHost(const QHostAddress &host, const quint16 &port)
{
    if(m_tcpSocket->isOpen()) m_tcpSocket->abort();
    m_tcpSocket->connectToHost(host, port);
    if (!m_tcpSocket->waitForConnected(3000))
    {
        Q_EMIT errorMessage("connection error");  //发送错误信息
    }
}

void chatting_room_socket::SltDisconnected()
{
    Q_EMIT signalDisConnected();
}
