/********************************************************************************
** Form generated from reading UI file 'chatting_room_client_main.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATTING_ROOM_CLIENT_MAIN_H
#define UI_CHATTING_ROOM_CLIENT_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatting_room_client_main
{
public:
    QTextEdit *MessageRec;
    QLineEdit *MessageSend;
    QPushButton *ButtonSend;
    QTextEdit *UserList;
    QLineEdit *ChooseUser;
    QLabel *ListLabel;
    QLabel *ChooseLabel;
    QLabel *IdChoose;
    QPushButton *ChooseButton;
    QPushButton *LeaveButton;
    QPushButton *UserRefresh;
    QPushButton *Emoji;
    QPushButton *Picture;
    QPushButton *File;
    QLabel *BG;
    QLabel *UserProfile;

    void setupUi(QWidget *chatting_room_client_main)
    {
        if (chatting_room_client_main->objectName().isEmpty())
            chatting_room_client_main->setObjectName(QString::fromUtf8("chatting_room_client_main"));
        chatting_room_client_main->resize(831, 496);
        MessageRec = new QTextEdit(chatting_room_client_main);
        MessageRec->setObjectName(QString::fromUtf8("MessageRec"));
        MessageRec->setGeometry(QRect(0, 0, 611, 331));
        MessageSend = new QLineEdit(chatting_room_client_main);
        MessageSend->setObjectName(QString::fromUtf8("MessageSend"));
        MessageSend->setGeometry(QRect(2, 374, 611, 71));
        ButtonSend = new QPushButton(chatting_room_client_main);
        ButtonSend->setObjectName(QString::fromUtf8("ButtonSend"));
        ButtonSend->setGeometry(QRect(520, 450, 101, 31));
        UserList = new QTextEdit(chatting_room_client_main);
        UserList->setObjectName(QString::fromUtf8("UserList"));
        UserList->setGeometry(QRect(620, 20, 201, 101));
        ChooseUser = new QLineEdit(chatting_room_client_main);
        ChooseUser->setObjectName(QString::fromUtf8("ChooseUser"));
        ChooseUser->setGeometry(QRect(680, 400, 141, 25));
        ListLabel = new QLabel(chatting_room_client_main);
        ListLabel->setObjectName(QString::fromUtf8("ListLabel"));
        ListLabel->setGeometry(QRect(610, 0, 67, 17));
        ChooseLabel = new QLabel(chatting_room_client_main);
        ChooseLabel->setObjectName(QString::fromUtf8("ChooseLabel"));
        ChooseLabel->setGeometry(QRect(630, 370, 181, 31));
        IdChoose = new QLabel(chatting_room_client_main);
        IdChoose->setObjectName(QString::fromUtf8("IdChoose"));
        IdChoose->setGeometry(QRect(640, 400, 31, 16));
        ChooseButton = new QPushButton(chatting_room_client_main);
        ChooseButton->setObjectName(QString::fromUtf8("ChooseButton"));
        ChooseButton->setGeometry(QRect(700, 430, 111, 31));
        LeaveButton = new QPushButton(chatting_room_client_main);
        LeaveButton->setObjectName(QString::fromUtf8("LeaveButton"));
        LeaveButton->setGeometry(QRect(418, 450, 91, 31));
        UserRefresh = new QPushButton(chatting_room_client_main);
        UserRefresh->setObjectName(QString::fromUtf8("UserRefresh"));
        UserRefresh->setGeometry(QRect(708, 340, 101, 31));
        Emoji = new QPushButton(chatting_room_client_main);
        Emoji->setObjectName(QString::fromUtf8("Emoji"));
        Emoji->setGeometry(QRect(10, 340, 89, 25));
        Picture = new QPushButton(chatting_room_client_main);
        Picture->setObjectName(QString::fromUtf8("Picture"));
        Picture->setGeometry(QRect(110, 340, 89, 25));
        File = new QPushButton(chatting_room_client_main);
        File->setObjectName(QString::fromUtf8("File"));
        File->setGeometry(QRect(220, 340, 89, 25));
        BG = new QLabel(chatting_room_client_main);
        BG->setObjectName(QString::fromUtf8("BG"));
        BG->setGeometry(QRect(620, 140, 191, 191));
        UserProfile = new QLabel(chatting_room_client_main);
        UserProfile->setObjectName(QString::fromUtf8("UserProfile"));
        UserProfile->setGeometry(QRect(610, 120, 91, 17));

        retranslateUi(chatting_room_client_main);

        QMetaObject::connectSlotsByName(chatting_room_client_main);
    } // setupUi

    void retranslateUi(QWidget *chatting_room_client_main)
    {
        chatting_room_client_main->setWindowTitle(QString());
        ButtonSend->setText(QApplication::translate("chatting_room_client_main", "send(enter)", nullptr));
#ifndef QT_NO_SHORTCUT
        ButtonSend->setShortcut(QApplication::translate("chatting_room_client_main", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        ListLabel->setText(QApplication::translate("chatting_room_client_main", "User List", nullptr));
        ChooseLabel->setText(QApplication::translate("chatting_room_client_main", "choose for private chat\357\274\232", nullptr));
        IdChoose->setText(QApplication::translate("chatting_room_client_main", "Id:", nullptr));
        ChooseButton->setText(QApplication::translate("chatting_room_client_main", "Ok(ctrl+enter)", nullptr));
#ifndef QT_NO_SHORTCUT
        ChooseButton->setShortcut(QApplication::translate("chatting_room_client_main", "Ctrl+Return", nullptr));
#endif // QT_NO_SHORTCUT
        LeaveButton->setText(QApplication::translate("chatting_room_client_main", "leave(ctrl+L)", nullptr));
#ifndef QT_NO_SHORTCUT
        LeaveButton->setShortcut(QApplication::translate("chatting_room_client_main", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        UserRefresh->setText(QApplication::translate("chatting_room_client_main", "refresh", nullptr));
        Emoji->setText(QApplication::translate("chatting_room_client_main", "Emoji", nullptr));
        Picture->setText(QApplication::translate("chatting_room_client_main", "Picture", nullptr));
        File->setText(QApplication::translate("chatting_room_client_main", "File", nullptr));
        BG->setText(QApplication::translate("chatting_room_client_main", "<html><head/><body><p><br/></p></body></html>", nullptr));
        UserProfile->setText(QApplication::translate("chatting_room_client_main", "User Proflie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatting_room_client_main: public Ui_chatting_room_client_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATTING_ROOM_CLIENT_MAIN_H
