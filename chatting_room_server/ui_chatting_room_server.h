/********************************************************************************
** Form generated from reading UI file 'chatting_room_server.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATTING_ROOM_SERVER_H
#define UI_CHATTING_ROOM_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatting_room_server
{
public:
    QTextEdit *server_message;
    QTextEdit *user_list;

    void setupUi(QWidget *chatting_room_server)
    {
        if (chatting_room_server->objectName().isEmpty())
            chatting_room_server->setObjectName(QString::fromUtf8("chatting_room_server"));
        chatting_room_server->resize(800, 600);
        server_message = new QTextEdit(chatting_room_server);
        server_message->setObjectName(QString::fromUtf8("server_message"));
        server_message->setGeometry(QRect(23, 49, 491, 471));
        user_list = new QTextEdit(chatting_room_server);
        user_list->setObjectName(QString::fromUtf8("user_list"));
        user_list->setGeometry(QRect(543, 49, 201, 471));

        retranslateUi(chatting_room_server);

        QMetaObject::connectSlotsByName(chatting_room_server);
    } // setupUi

    void retranslateUi(QWidget *chatting_room_server)
    {
        chatting_room_server->setWindowTitle(QApplication::translate("chatting_room_server", "chatting_room_server", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatting_room_server: public Ui_chatting_room_server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATTING_ROOM_SERVER_H
