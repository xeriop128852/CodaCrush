/****************************************************************************
** Meta object code from reading C++ file 'level.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../COdat/level.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'level.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Level_t {
    QByteArrayData data[14];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Level_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Level_t qt_meta_stringdata_Level = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Level"
QT_MOC_LITERAL(1, 6, 25), // "on_LV1_pushButton_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 25), // "on_LV2_pushButton_clicked"
QT_MOC_LITERAL(4, 59, 25), // "on_LV3_pushButton_clicked"
QT_MOC_LITERAL(5, 85, 25), // "on_LV4_pushButton_clicked"
QT_MOC_LITERAL(6, 111, 25), // "on_LV5_pushButton_clicked"
QT_MOC_LITERAL(7, 137, 25), // "on_LV6_pushButton_clicked"
QT_MOC_LITERAL(8, 163, 25), // "on_LV7_pushButton_clicked"
QT_MOC_LITERAL(9, 189, 25), // "on_LV8_pushButton_clicked"
QT_MOC_LITERAL(10, 215, 25), // "on_LV9_pushButton_clicked"
QT_MOC_LITERAL(11, 241, 25), // "on_ten_pushButton_clicked"
QT_MOC_LITERAL(12, 267, 29), // "on_signout_pushButton_clicked"
QT_MOC_LITERAL(13, 297, 11) // "label_check"

    },
    "Level\0on_LV1_pushButton_clicked\0\0"
    "on_LV2_pushButton_clicked\0"
    "on_LV3_pushButton_clicked\0"
    "on_LV4_pushButton_clicked\0"
    "on_LV5_pushButton_clicked\0"
    "on_LV6_pushButton_clicked\0"
    "on_LV7_pushButton_clicked\0"
    "on_LV8_pushButton_clicked\0"
    "on_LV9_pushButton_clicked\0"
    "on_ten_pushButton_clicked\0"
    "on_signout_pushButton_clicked\0label_check"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Level[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void Level::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Level *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_LV1_pushButton_clicked(); break;
        case 1: _t->on_LV2_pushButton_clicked(); break;
        case 2: _t->on_LV3_pushButton_clicked(); break;
        case 3: _t->on_LV4_pushButton_clicked(); break;
        case 4: _t->on_LV5_pushButton_clicked(); break;
        case 5: _t->on_LV6_pushButton_clicked(); break;
        case 6: _t->on_LV7_pushButton_clicked(); break;
        case 7: _t->on_LV8_pushButton_clicked(); break;
        case 8: _t->on_LV9_pushButton_clicked(); break;
        case 9: _t->on_ten_pushButton_clicked(); break;
        case 10: _t->on_signout_pushButton_clicked(); break;
        case 11: _t->label_check(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Level::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Level.data,
    qt_meta_data_Level,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Level::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Level::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Level.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Level::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
