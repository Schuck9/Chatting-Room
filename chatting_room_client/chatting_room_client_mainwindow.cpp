#include "chatting_room_client.h"
#include "ui_chatting_room_client.h"
#include "chatting_room_client_mainwindow.h"
#include "ui_chatting_room_client_mainwindow.h"

extern QString name;
chatting_room_client_mainwindow::chatting_room_client_mainwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chatting_room_client_mainwindow)
{
    ui->setupUi(this);
    //ui->menubar->addMenu("welcome");
    ui->
}

chatting_room_client_mainwindow::~chatting_room_client_mainwindow()
{
    delete ui;
}
