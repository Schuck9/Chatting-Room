/********************************************************************************
** Form generated from reading UI file 'chatting_room_client_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATTING_ROOM_CLIENT_MAINWINDOW_H
#define UI_CHATTING_ROOM_CLIENT_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatting_room_client_mainwindow
{
public:
    QWidget *centralwidget;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menufuck;

    void setupUi(QMainWindow *chatting_room_client_mainwindow)
    {
        if (chatting_room_client_mainwindow->objectName().isEmpty())
            chatting_room_client_mainwindow->setObjectName(QString::fromUtf8("chatting_room_client_mainwindow"));
        chatting_room_client_mainwindow->resize(800, 600);
        centralwidget = new QWidget(chatting_room_client_mainwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        chatting_room_client_mainwindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(chatting_room_client_mainwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        chatting_room_client_mainwindow->setStatusBar(statusbar);
        menubar = new QMenuBar(chatting_room_client_mainwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        menufuck = new QMenu(menubar);
        menufuck->setObjectName(QString::fromUtf8("menufuck"));
        chatting_room_client_mainwindow->setMenuBar(menubar);

        menubar->addAction(menufuck->menuAction());

        retranslateUi(chatting_room_client_mainwindow);

        QMetaObject::connectSlotsByName(chatting_room_client_mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *chatting_room_client_mainwindow)
    {
        chatting_room_client_mainwindow->setWindowTitle(QApplication::translate("chatting_room_client_mainwindow", "MainWindow", nullptr));
        menufuck->setTitle(QApplication::translate("chatting_room_client_mainwindow", "fuck", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatting_room_client_mainwindow: public Ui_chatting_room_client_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATTING_ROOM_CLIENT_MAINWINDOW_H
