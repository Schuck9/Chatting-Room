/****************************************************************************
** Meta object code from reading C++ file 'chatting_room_client_main.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "chatting_room_client_main.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatting_room_client_main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_chatting_room_client_main_t {
    QByteArrayData data[19];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_chatting_room_client_main_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_chatting_room_client_main_t qt_meta_stringdata_chatting_room_client_main = {
    {
QT_MOC_LITERAL(0, 0, 25), // "chatting_room_client_main"
QT_MOC_LITERAL(1, 26, 11), // "PrivateShow"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 4), // "name"
QT_MOC_LITERAL(4, 44, 7), // "dataVal"
QT_MOC_LITERAL(5, 52, 11), // "SltTcpReply"
QT_MOC_LITERAL(6, 64, 4), // "type"
QT_MOC_LITERAL(7, 69, 2), // "Id"
QT_MOC_LITERAL(8, 72, 5), // "Id_to"
QT_MOC_LITERAL(9, 78, 9), // "ErrorShow"
QT_MOC_LITERAL(10, 88, 12), // "errormessage"
QT_MOC_LITERAL(11, 101, 8), // "QuitBack"
QT_MOC_LITERAL(12, 110, 21), // "on_ButtonSend_clicked"
QT_MOC_LITERAL(13, 132, 16), // "on_Emoji_clicked"
QT_MOC_LITERAL(14, 149, 18), // "on_Picture_clicked"
QT_MOC_LITERAL(15, 168, 23), // "on_ChooseButton_clicked"
QT_MOC_LITERAL(16, 192, 22), // "on_LeaveButton_clicked"
QT_MOC_LITERAL(17, 215, 15), // "on_File_clicked"
QT_MOC_LITERAL(18, 231, 22) // "on_UserRefresh_clicked"

    },
    "chatting_room_client_main\0PrivateShow\0"
    "\0name\0dataVal\0SltTcpReply\0type\0Id\0"
    "Id_to\0ErrorShow\0errormessage\0QuitBack\0"
    "on_ButtonSend_clicked\0on_Emoji_clicked\0"
    "on_Picture_clicked\0on_ChooseButton_clicked\0"
    "on_LeaveButton_clicked\0on_File_clicked\0"
    "on_UserRefresh_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_chatting_room_client_main[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    5,   74,    2, 0x0a /* Public */,
       9,    1,   85,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,
      15,    0,   92,    2, 0x08 /* Private */,
      16,    0,   93,    2, 0x08 /* Private */,
      17,    0,   94,    2, 0x08 /* Private */,
      18,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    6,    3,    4,    7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void chatting_room_client_main::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<chatting_room_client_main *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PrivateShow((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->SltTcpReply((*reinterpret_cast< const quint8(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5]))); break;
        case 2: _t->ErrorShow((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->QuitBack(); break;
        case 4: _t->on_ButtonSend_clicked(); break;
        case 5: _t->on_Emoji_clicked(); break;
        case 6: _t->on_Picture_clicked(); break;
        case 7: _t->on_ChooseButton_clicked(); break;
        case 8: _t->on_LeaveButton_clicked(); break;
        case 9: _t->on_File_clicked(); break;
        case 10: _t->on_UserRefresh_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (chatting_room_client_main::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chatting_room_client_main::PrivateShow)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject chatting_room_client_main::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_chatting_room_client_main.data,
    qt_meta_data_chatting_room_client_main,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *chatting_room_client_main::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *chatting_room_client_main::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_chatting_room_client_main.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int chatting_room_client_main::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void chatting_room_client_main::PrivateShow(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
