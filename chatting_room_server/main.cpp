#include "chatting_room_server.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    chatting_room_server w;
    w.show();
    return a.exec();
}
