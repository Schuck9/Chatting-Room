/****************************************************************************
** Meta object code from reading C++ file 'chatting_room_private.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chatting_room_client/chatting_room_private.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatting_room_private.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_chatting_room_private_t {
    QByteArrayData data[11];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_chatting_room_private_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_chatting_room_private_t qt_meta_stringdata_chatting_room_private = {
    {
QT_MOC_LITERAL(0, 0, 21), // "chatting_room_private"
QT_MOC_LITERAL(1, 22, 4), // "quit"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "on_BackBtn_clicked"
QT_MOC_LITERAL(4, 47, 18), // "on_SendBtn_clicked"
QT_MOC_LITERAL(5, 66, 16), // "on_Emoji_clicked"
QT_MOC_LITERAL(6, 83, 18), // "on_Picture_clicked"
QT_MOC_LITERAL(7, 102, 15), // "on_File_clicked"
QT_MOC_LITERAL(8, 118, 19), // "on_EmojiSet_clicked"
QT_MOC_LITERAL(9, 138, 3), // "Row"
QT_MOC_LITERAL(10, 142, 3) // "Col"

    },
    "chatting_room_private\0quit\0\0"
    "on_BackBtn_clicked\0on_SendBtn_clicked\0"
    "on_Emoji_clicked\0on_Picture_clicked\0"
    "on_File_clicked\0on_EmojiSet_clicked\0"
    "Row\0Col"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_chatting_room_private[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    2,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,

       0        // eod
};

void chatting_room_private::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<chatting_room_private *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->quit(); break;
        case 1: _t->on_BackBtn_clicked(); break;
        case 2: _t->on_SendBtn_clicked(); break;
        case 3: _t->on_Emoji_clicked(); break;
        case 4: _t->on_Picture_clicked(); break;
        case 5: _t->on_File_clicked(); break;
        case 6: _t->on_EmojiSet_clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (chatting_room_private::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chatting_room_private::quit)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject chatting_room_private::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_chatting_room_private.data,
    qt_meta_data_chatting_room_private,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *chatting_room_private::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *chatting_room_private::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_chatting_room_private.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int chatting_room_private::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void chatting_room_private::quit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
