/********************************************************************************
** Form generated from reading UI file 'chatting_room_client.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATTING_ROOM_CLIENT_H
#define UI_CHATTING_ROOM_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatting_room_client
{
public:
    QLabel *loginLabel;
    QLineEdit *loginName;
    QLabel *loginLabel_name;
    QPushButton *loginButton;
    QLabel *loginLabel_Id;
    QLineEdit *login_Id;

    void setupUi(QWidget *chatting_room_client)
    {
        if (chatting_room_client->objectName().isEmpty())
            chatting_room_client->setObjectName(QString::fromUtf8("chatting_room_client"));
        chatting_room_client->resize(510, 299);
        loginLabel = new QLabel(chatting_room_client);
        loginLabel->setObjectName(QString::fromUtf8("loginLabel"));
        loginLabel->setGeometry(QRect(220, 70, 81, 51));
        loginName = new QLineEdit(chatting_room_client);
        loginName->setObjectName(QString::fromUtf8("loginName"));
        loginName->setGeometry(QRect(220, 120, 191, 31));
        loginLabel_name = new QLabel(chatting_room_client);
        loginLabel_name->setObjectName(QString::fromUtf8("loginLabel_name"));
        loginLabel_name->setGeometry(QRect(150, 120, 67, 17));
        loginButton = new QPushButton(chatting_room_client);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(150, 210, 151, 31));
        loginLabel_Id = new QLabel(chatting_room_client);
        loginLabel_Id->setObjectName(QString::fromUtf8("loginLabel_Id"));
        loginLabel_Id->setGeometry(QRect(150, 160, 67, 17));
        login_Id = new QLineEdit(chatting_room_client);
        login_Id->setObjectName(QString::fromUtf8("login_Id"));
        login_Id->setGeometry(QRect(220, 160, 191, 31));

        retranslateUi(chatting_room_client);

        QMetaObject::connectSlotsByName(chatting_room_client);
    } // setupUi

    void retranslateUi(QWidget *chatting_room_client)
    {
        chatting_room_client->setWindowTitle(QApplication::translate("chatting_room_client", "chatting_room_client", nullptr));
        loginLabel->setText(QApplication::translate("chatting_room_client", "Login", nullptr));
        loginLabel_name->setText(QApplication::translate("chatting_room_client", "Name:", nullptr));
        loginButton->setText(QApplication::translate("chatting_room_client", "Login", nullptr));
#ifndef QT_NO_SHORTCUT
        loginButton->setShortcut(QApplication::translate("chatting_room_client", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        loginLabel_Id->setText(QApplication::translate("chatting_room_client", "ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatting_room_client: public Ui_chatting_room_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATTING_ROOM_CLIENT_H
