/****************************************************************************
** Meta object code from reading C++ file 'chatting_room_server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "chatting_room_server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatting_room_server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_chatting_room_server_t {
    QByteArrayData data[9];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_chatting_room_server_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_chatting_room_server_t qt_meta_stringdata_chatting_room_server = {
    {
QT_MOC_LITERAL(0, 0, 20), // "chatting_room_server"
QT_MOC_LITERAL(1, 21, 10), // "new_client"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "SltTcpReply"
QT_MOC_LITERAL(4, 45, 4), // "type"
QT_MOC_LITERAL(5, 50, 4), // "name"
QT_MOC_LITERAL(6, 55, 7), // "dataval"
QT_MOC_LITERAL(7, 63, 2), // "Id"
QT_MOC_LITERAL(8, 66, 5) // "Id_to"

    },
    "chatting_room_server\0new_client\0\0"
    "SltTcpReply\0type\0name\0dataval\0Id\0Id_to"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_chatting_room_server[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    5,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    4,    5,    6,    7,    8,

       0        // eod
};

void chatting_room_server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<chatting_room_server *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->new_client(); break;
        case 1: _t->SltTcpReply((*reinterpret_cast< const quint8(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject chatting_room_server::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_chatting_room_server.data,
    qt_meta_data_chatting_room_server,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *chatting_room_server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *chatting_room_server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_chatting_room_server.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int chatting_room_server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
