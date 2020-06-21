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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
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
    QPushButton *Emoji;
    QTableWidget *EmojiSet;
    QPushButton *Picture;
    QPushButton *File;

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
        MessageSendTo->setGeometry(QRect(10, 330, 461, 71));
        SendBtn = new QPushButton(chatting_room_private);
        SendBtn->setObjectName(QString::fromUtf8("SendBtn"));
        SendBtn->setGeometry(QRect(270, 410, 89, 25));
        BackBtn = new QPushButton(chatting_room_private);
        BackBtn->setObjectName(QString::fromUtf8("BackBtn"));
        BackBtn->setGeometry(QRect(380, 410, 89, 25));
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
        Emoji = new QPushButton(chatting_room_private);
        Emoji->setObjectName(QString::fromUtf8("Emoji"));
        Emoji->setGeometry(QRect(10, 300, 89, 25));
        EmojiSet = new QTableWidget(chatting_room_private);
        if (EmojiSet->columnCount() < 4)
            EmojiSet->setColumnCount(4);
        if (EmojiSet->rowCount() < 4)
            EmojiSet->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        EmojiSet->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        EmojiSet->setItem(0, 1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        EmojiSet->setItem(0, 2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        EmojiSet->setItem(0, 3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        EmojiSet->setItem(1, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        EmojiSet->setItem(1, 1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        EmojiSet->setItem(1, 2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        EmojiSet->setItem(1, 3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        EmojiSet->setItem(2, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        EmojiSet->setItem(2, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        EmojiSet->setItem(2, 2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        EmojiSet->setItem(2, 3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        EmojiSet->setItem(3, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        EmojiSet->setItem(3, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        EmojiSet->setItem(3, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        EmojiSet->setItem(3, 3, __qtablewidgetitem15);
        EmojiSet->setObjectName(QString::fromUtf8("EmojiSet"));
        EmojiSet->setGeometry(QRect(10, 170, 141, 131));
        EmojiSet->setAutoScroll(true);
        EmojiSet->setAutoScrollMargin(16);
        EmojiSet->setEditTriggers(QAbstractItemView::NoEditTriggers);
        EmojiSet->setTabKeyNavigation(true);
        EmojiSet->setSelectionMode(QAbstractItemView::SingleSelection);
        EmojiSet->setTextElideMode(Qt::ElideNone);
        EmojiSet->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        EmojiSet->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        EmojiSet->setShowGrid(true);
        EmojiSet->setRowCount(4);
        EmojiSet->setColumnCount(4);
        EmojiSet->horizontalHeader()->setVisible(false);
        EmojiSet->horizontalHeader()->setMinimumSectionSize(25);
        EmojiSet->horizontalHeader()->setDefaultSectionSize(34);
        EmojiSet->horizontalHeader()->setHighlightSections(true);
        EmojiSet->horizontalHeader()->setStretchLastSection(true);
        EmojiSet->verticalHeader()->setVisible(false);
        EmojiSet->verticalHeader()->setMinimumSectionSize(25);
        EmojiSet->verticalHeader()->setDefaultSectionSize(34);
        EmojiSet->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        EmojiSet->verticalHeader()->setStretchLastSection(false);
        Picture = new QPushButton(chatting_room_private);
        Picture->setObjectName(QString::fromUtf8("Picture"));
        Picture->setGeometry(QRect(108, 300, 111, 25));
        File = new QPushButton(chatting_room_private);
        File->setObjectName(QString::fromUtf8("File"));
        File->setGeometry(QRect(230, 300, 111, 25));

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
        Emoji->setText(QApplication::translate("chatting_room_private", "Emoji", nullptr));

        const bool __sortingEnabled = EmojiSet->isSortingEnabled();
        EmojiSet->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = EmojiSet->item(0, 0);
        ___qtablewidgetitem->setText(QApplication::translate("chatting_room_private", "\360\237\214\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = EmojiSet->item(0, 1);
        ___qtablewidgetitem1->setText(QApplication::translate("chatting_room_private", "\360\237\214\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = EmojiSet->item(0, 2);
        ___qtablewidgetitem2->setText(QApplication::translate("chatting_room_private", "\360\237\214\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = EmojiSet->item(0, 3);
        ___qtablewidgetitem3->setText(QApplication::translate("chatting_room_private", "\360\237\244\223", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = EmojiSet->item(1, 0);
        ___qtablewidgetitem4->setText(QApplication::translate("chatting_room_private", "\360\237\244\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = EmojiSet->item(1, 1);
        ___qtablewidgetitem5->setText(QApplication::translate("chatting_room_private", "\360\237\244\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = EmojiSet->item(1, 2);
        ___qtablewidgetitem6->setText(QApplication::translate("chatting_room_private", "\360\237\231\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = EmojiSet->item(1, 3);
        ___qtablewidgetitem7->setText(QApplication::translate("chatting_room_private", "\360\237\244\243", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = EmojiSet->item(2, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("chatting_room_private", "\360\237\244\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = EmojiSet->item(2, 1);
        ___qtablewidgetitem9->setText(QApplication::translate("chatting_room_private", "\360\237\217\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = EmojiSet->item(2, 2);
        ___qtablewidgetitem10->setText(QApplication::translate("chatting_room_private", "\360\237\221\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = EmojiSet->item(2, 3);
        ___qtablewidgetitem11->setText(QApplication::translate("chatting_room_private", "\360\237\244\220", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = EmojiSet->item(3, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("chatting_room_private", "\360\237\231\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = EmojiSet->item(3, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("chatting_room_private", "\360\237\225\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = EmojiSet->item(3, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("chatting_room_private", "\360\237\225\231", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = EmojiSet->item(3, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("chatting_room_private", "\360\237\221\200", nullptr));
        EmojiSet->setSortingEnabled(__sortingEnabled);

        Picture->setText(QApplication::translate("chatting_room_private", "FIle Transfer", nullptr));
        File->setText(QApplication::translate("chatting_room_private", "Record Loader", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatting_room_private: public Ui_chatting_room_private {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATTING_ROOM_PRIVATE_H
