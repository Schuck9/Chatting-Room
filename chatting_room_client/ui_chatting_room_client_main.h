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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
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
    QLabel *Emoji1;
    QLabel *Emoji2;
    QLabel *VS;
    QTableWidget *EmojiSet;

    void setupUi(QWidget *chatting_room_client_main)
    {
        if (chatting_room_client_main->objectName().isEmpty())
            chatting_room_client_main->setObjectName(QString::fromUtf8("chatting_room_client_main"));
        chatting_room_client_main->resize(849, 568);
        MessageRec = new QTextEdit(chatting_room_client_main);
        MessageRec->setObjectName(QString::fromUtf8("MessageRec"));
        MessageRec->setGeometry(QRect(220, 0, 391, 411));
        MessageSend = new QLineEdit(chatting_room_client_main);
        MessageSend->setObjectName(QString::fromUtf8("MessageSend"));
        MessageSend->setGeometry(QRect(0, 450, 611, 71));
        ButtonSend = new QPushButton(chatting_room_client_main);
        ButtonSend->setObjectName(QString::fromUtf8("ButtonSend"));
        ButtonSend->setGeometry(QRect(510, 530, 101, 31));
        UserList = new QTextEdit(chatting_room_client_main);
        UserList->setObjectName(QString::fromUtf8("UserList"));
        UserList->setGeometry(QRect(620, 20, 201, 101));
        ChooseUser = new QLineEdit(chatting_room_client_main);
        ChooseUser->setObjectName(QString::fromUtf8("ChooseUser"));
        ChooseUser->setGeometry(QRect(650, 450, 141, 25));
        ListLabel = new QLabel(chatting_room_client_main);
        ListLabel->setObjectName(QString::fromUtf8("ListLabel"));
        ListLabel->setGeometry(QRect(610, 0, 67, 17));
        ChooseLabel = new QLabel(chatting_room_client_main);
        ChooseLabel->setObjectName(QString::fromUtf8("ChooseLabel"));
        ChooseLabel->setGeometry(QRect(630, 421, 161, 20));
        IdChoose = new QLabel(chatting_room_client_main);
        IdChoose->setObjectName(QString::fromUtf8("IdChoose"));
        IdChoose->setGeometry(QRect(630, 450, 31, 21));
        ChooseButton = new QPushButton(chatting_room_client_main);
        ChooseButton->setObjectName(QString::fromUtf8("ChooseButton"));
        ChooseButton->setGeometry(QRect(680, 480, 111, 31));
        LeaveButton = new QPushButton(chatting_room_client_main);
        LeaveButton->setObjectName(QString::fromUtf8("LeaveButton"));
        LeaveButton->setGeometry(QRect(400, 530, 91, 31));
        UserRefresh = new QPushButton(chatting_room_client_main);
        UserRefresh->setObjectName(QString::fromUtf8("UserRefresh"));
        UserRefresh->setGeometry(QRect(720, 120, 101, 31));
        Emoji = new QPushButton(chatting_room_client_main);
        Emoji->setObjectName(QString::fromUtf8("Emoji"));
        Emoji->setGeometry(QRect(0, 420, 89, 25));
        Picture = new QPushButton(chatting_room_client_main);
        Picture->setObjectName(QString::fromUtf8("Picture"));
        Picture->setGeometry(QRect(98, 420, 111, 25));
        File = new QPushButton(chatting_room_client_main);
        File->setObjectName(QString::fromUtf8("File"));
        File->setGeometry(QRect(220, 420, 111, 25));
        BG = new QLabel(chatting_room_client_main);
        BG->setObjectName(QString::fromUtf8("BG"));
        BG->setGeometry(QRect(620, 190, 201, 211));
        UserProfile = new QLabel(chatting_room_client_main);
        UserProfile->setObjectName(QString::fromUtf8("UserProfile"));
        UserProfile->setGeometry(QRect(610, 160, 91, 17));
        Emoji1 = new QLabel(chatting_room_client_main);
        Emoji1->setObjectName(QString::fromUtf8("Emoji1"));
        Emoji1->setEnabled(true);
        Emoji1->setGeometry(QRect(0, 240, 221, 171));
        Emoji2 = new QLabel(chatting_room_client_main);
        Emoji2->setObjectName(QString::fromUtf8("Emoji2"));
        Emoji2->setGeometry(QRect(0, 0, 221, 191));
        VS = new QLabel(chatting_room_client_main);
        VS->setObjectName(QString::fromUtf8("VS"));
        VS->setGeometry(QRect(0, 190, 221, 51));
        EmojiSet = new QTableWidget(chatting_room_client_main);
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
        EmojiSet->setGeometry(QRect(0, 290, 141, 131));
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
        ChooseLabel->setText(QApplication::translate("chatting_room_client_main", "Private Chatting Room\357\274\232", nullptr));
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
        Picture->setText(QApplication::translate("chatting_room_client_main", "FIle Transfer", nullptr));
        File->setText(QApplication::translate("chatting_room_client_main", "Record Loader", nullptr));
        BG->setText(QApplication::translate("chatting_room_client_main", "<html><head/><body><p><br/></p></body></html>", nullptr));
        UserProfile->setText(QApplication::translate("chatting_room_client_main", "User Proflie", nullptr));
        Emoji1->setText(QApplication::translate("chatting_room_client_main", "<html><head/><body><p><br/></p></body></html>", nullptr));
        Emoji2->setText(QApplication::translate("chatting_room_client_main", "<html><head/><body><p><br/></p></body></html>", nullptr));
        VS->setText(QString());

        const bool __sortingEnabled = EmojiSet->isSortingEnabled();
        EmojiSet->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = EmojiSet->item(0, 0);
        ___qtablewidgetitem->setText(QApplication::translate("chatting_room_client_main", "\360\237\214\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = EmojiSet->item(0, 1);
        ___qtablewidgetitem1->setText(QApplication::translate("chatting_room_client_main", "\360\237\214\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = EmojiSet->item(0, 2);
        ___qtablewidgetitem2->setText(QApplication::translate("chatting_room_client_main", "\360\237\214\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = EmojiSet->item(0, 3);
        ___qtablewidgetitem3->setText(QApplication::translate("chatting_room_client_main", "\360\237\244\223", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = EmojiSet->item(1, 0);
        ___qtablewidgetitem4->setText(QApplication::translate("chatting_room_client_main", "\360\237\244\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = EmojiSet->item(1, 1);
        ___qtablewidgetitem5->setText(QApplication::translate("chatting_room_client_main", "\360\237\244\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = EmojiSet->item(1, 2);
        ___qtablewidgetitem6->setText(QApplication::translate("chatting_room_client_main", "\360\237\231\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = EmojiSet->item(1, 3);
        ___qtablewidgetitem7->setText(QApplication::translate("chatting_room_client_main", "\360\237\244\243", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = EmojiSet->item(2, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("chatting_room_client_main", "\360\237\244\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = EmojiSet->item(2, 1);
        ___qtablewidgetitem9->setText(QApplication::translate("chatting_room_client_main", "\360\237\217\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = EmojiSet->item(2, 2);
        ___qtablewidgetitem10->setText(QApplication::translate("chatting_room_client_main", "\360\237\221\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = EmojiSet->item(2, 3);
        ___qtablewidgetitem11->setText(QApplication::translate("chatting_room_client_main", "\360\237\244\220", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = EmojiSet->item(3, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("chatting_room_client_main", "\360\237\231\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = EmojiSet->item(3, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("chatting_room_client_main", "\360\237\225\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = EmojiSet->item(3, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("chatting_room_client_main", "\360\237\225\231", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = EmojiSet->item(3, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("chatting_room_client_main", "\360\237\221\200", nullptr));
        EmojiSet->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class chatting_room_client_main: public Ui_chatting_room_client_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATTING_ROOM_CLIENT_MAIN_H
