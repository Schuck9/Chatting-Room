#include "chatting_room_client.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    chatting_room_client w;
    w.show();
    return a.exec();
}
