/****************************************************************************
** Meta object code from reading C++ file 'bytemapdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../hexwalk/bytemapdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bytemapdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ByteMapDialog_t {
    QByteArrayData data[10];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ByteMapDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ByteMapDialog_t qt_meta_stringdata_ByteMapDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ByteMapDialog"
QT_MOC_LITERAL(1, 14, 9), // "updatePos"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "gotoAddress"
QT_MOC_LITERAL(4, 37, 7), // "refresh"
QT_MOC_LITERAL(5, 45, 24), // "on_spinCols_valueChanged"
QT_MOC_LITERAL(6, 70, 4), // "arg1"
QT_MOC_LITERAL(7, 75, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(8, 95, 24), // "on_colorBox_stateChanged"
QT_MOC_LITERAL(9, 120, 26) // "on_spinPixels_valueChanged"

    },
    "ByteMapDialog\0updatePos\0\0gotoAddress\0"
    "refresh\0on_spinCols_valueChanged\0arg1\0"
    "on_closeBtn_clicked\0on_colorBox_stateChanged\0"
    "on_spinPixels_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ByteMapDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
       9,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void ByteMapDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ByteMapDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updatePos(); break;
        case 1: _t->gotoAddress(); break;
        case 2: _t->refresh(); break;
        case 3: _t->on_spinCols_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_closeBtn_clicked(); break;
        case 5: _t->on_colorBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_spinPixels_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ByteMapDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ByteMapDialog.data,
    qt_meta_data_ByteMapDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ByteMapDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ByteMapDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ByteMapDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ByteMapDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
