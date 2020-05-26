/********************************************************************************
** Form generated from reading UI file 'chatting_room_private.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATTING_ROOM_PRIVATE_H
#define UI_CHATTING_ROOM_PRIVATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatting_room_private
{
public:
    QTextEdit *MessageRecFrom;
    QLineEdit *MessageSendTo;
    QPushButton *SendBtn;
    QPushButton *BackBtn;
    QLabel *User1;
    QLabel *User2;
    QLabel *User2_name;
    QLabel *User1_name;

    void setupUi(QWidget *chatting_room_private)
    {
        if (chatting_room_private->objectName().isEmpty())
            chatting_room_private->setObjectName(QString::fromUtf8("chatting_room_private"));
        chatting_room_private->resize(676, 455);
        MessageRecFrom = new QTextEdit(chatting_room_private);
        MessageRecFrom->setObjectName(QString::fromUtf8("MessageRecFrom"));
        MessageRecFrom->setGeometry(QRect(10, 20, 461, 281));
        MessageSendTo = new QLineEdit(chatting_room_private);
        MessageSendTo->setObjectName(QString::fromUtf8("MessageSendTo"));
        MessageSendTo->setGeometry(QRect(10, 310, 461, 71));
        SendBtn = new QPushButton(chatting_room_private);
        SendBtn->setObjectName(QString::fromUtf8("SendBtn"));
        SendBtn->setGeometry(QRect(280, 390, 89, 25));
        BackBtn = new QPushButton(chatting_room_private);
        BackBtn->setObjectName(QString::fromUtf8("BackBtn"));
        BackBtn->setGeometry(QRect(390, 390, 89, 25));
        User1 = new QLabel(chatting_room_private);
        User1->setObjectName(QString::fromUtf8("User1"));
        User1->setGeometry(QRect(480, 30, 191, 191));
        User2 = new QLabel(chatting_room_private);
        User2->setObjectName(QString::fromUtf8("User2"));
        User2->setGeometry(QRect(480, 250, 191, 191));
        User2_name = new QLabel(chatting_room_private);
        User2_name->setObjectName(QString::fromUtf8("User2_name"));
        User2_name->setGeometry(QRect(480, 230, 67, 17));
        User1_name = new QLabel(chatting_room_private);
        User1_name->setObjectName(QString::fromUtf8("User1_name"));
        User1_name->setGeometry(QRect(480, 10, 67, 17));

        retranslateUi(chatting_room_private);

        QMetaObject::connectSlotsByName(chatting_room_private);
    } // setupUi

    void retranslateUi(QWidget *chatting_room_private)
    {
        chatting_room_private->setWindowTitle(QApplication::translate("chatting_room_private", "Form", nullptr));
        SendBtn->setText(QApplication::translate("chatting_room_private", "Send(enter)", nullptr));
#ifndef QT_NO_SHORTCUT
        SendBtn->setShortcut(QApplication::translate("chatting_room_private", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        BackBtn->setText(QApplication::translate("chatting_room_private", "Back(ctrl+B)", nullptr));
#ifndef QT_NO_SHORTCUT
        BackBtn->setShortcut(QApplication::translate("chatting_room_private", "Ctrl+B", nullptr));
#endif // QT_NO_SHORTCUT
        User1->setText(QApplication::translate("chatting_room_private", "<html><head/><body><p><br/></p></body></html>", nullptr));
        User2->setText(QApplication::translate("chatting_room_private", "<html><head/><body><p><br/></p></body></html>", nullptr));
        User2_name->setText(QApplication::translate("chatting_room_private", "User2", nullptr));
        User1_name->setText(QApplication::translate("chatting_room_private", "User1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatting_room_private: public Ui_chatting_room_private {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATTING_ROOM_PRIVATE_H
