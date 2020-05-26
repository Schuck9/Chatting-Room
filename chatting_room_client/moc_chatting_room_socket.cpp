/****************************************************************************
** Meta object code from reading C++ file 'chatting_room_socket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "chatting_room_socket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatting_room_socket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_chatting_room_socket_t {
    QByteArrayData data[19];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_chatting_room_socket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_chatting_room_socket_t qt_meta_stringdata_chatting_room_socket = {
    {
QT_MOC_LITERAL(0, 0, 20), // "chatting_room_socket"
QT_MOC_LITERAL(1, 21, 13), // "signalMessage"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "type"
QT_MOC_LITERAL(4, 41, 4), // "name"
QT_MOC_LITERAL(5, 46, 7), // "dataVal"
QT_MOC_LITERAL(6, 54, 2), // "Id"
QT_MOC_LITERAL(7, 57, 5), // "Id_to"
QT_MOC_LITERAL(8, 63, 12), // "signalStatus"
QT_MOC_LITERAL(9, 76, 5), // "state"
QT_MOC_LITERAL(10, 82, 12), // "errorMessage"
QT_MOC_LITERAL(11, 95, 12), // "errormessage"
QT_MOC_LITERAL(12, 108, 14), // "SltSendMessage"
QT_MOC_LITERAL(13, 123, 13), // "change_NameId"
QT_MOC_LITERAL(14, 137, 2), // "id"
QT_MOC_LITERAL(15, 140, 5), // "cname"
QT_MOC_LITERAL(16, 146, 5), // "id_to"
QT_MOC_LITERAL(17, 152, 15), // "SltDisconnected"
QT_MOC_LITERAL(18, 168, 12) // "SltReadyRead"

    },
    "chatting_room_socket\0signalMessage\0\0"
    "type\0name\0dataVal\0Id\0Id_to\0signalStatus\0"
    "state\0errorMessage\0errormessage\0"
    "SltSendMessage\0change_NameId\0id\0cname\0"
    "id_to\0SltDisconnected\0SltReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_chatting_room_socket[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   49,    2, 0x06 /* Public */,
       8,    1,   60,    2, 0x06 /* Public */,
      10,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    5,   66,    2, 0x0a /* Public */,
      13,    3,   77,    2, 0x0a /* Public */,
      17,    0,   84,    2, 0x08 /* Private */,
      18,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::UChar,    9,
    QMetaType::Void, QMetaType::QString,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void chatting_room_socket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<chatting_room_socket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalMessage((*reinterpret_cast< const quint8(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5]))); break;
        case 1: _t->signalStatus((*reinterpret_cast< const quint8(*)>(_a[1]))); break;
        case 2: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->SltSendMessage((*reinterpret_cast< const quint8(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5]))); break;
        case 4: _t->change_NameId((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 5: _t->SltDisconnected(); break;
        case 6: _t->SltReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (chatting_room_socket::*)(const quint8 & , const QString & , const QString & , const int & , const int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chatting_room_socket::signalMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (chatting_room_socket::*)(const quint8 & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chatting_room_socket::signalStatus)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (chatting_room_socket::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chatting_room_socket::errorMessage)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject chatting_room_socket::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_chatting_room_socket.data,
    qt_meta_data_chatting_room_socket,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *chatting_room_socket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *chatting_room_socket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_chatting_room_socket.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int chatting_room_socket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void chatting_room_socket::signalMessage(const quint8 & _t1, const QString & _t2, const QString & _t3, const int & _t4, const int & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void chatting_room_socket::signalStatus(const quint8 & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void chatting_room_socket::errorMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
