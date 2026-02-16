/****************************************************************************
** Meta object code from reading C++ file 'advancedsearchdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../hexwalk/advancedsearchdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'advancedsearchdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TableModel_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TableModel_t qt_meta_stringdata_TableModel = {
    {
QT_MOC_LITERAL(0, 0, 10) // "TableModel"

    },
    "TableModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TableModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_TableModel.data,
    qt_meta_data_TableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TableModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int TableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AdvancedSearchDialog_t {
    QByteArrayData data[14];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdvancedSearchDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdvancedSearchDialog_t qt_meta_stringdata_AdvancedSearchDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AdvancedSearchDialog"
QT_MOC_LITERAL(1, 21, 17), // "on_pbFind_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 27), // "on_resultsTableView_clicked"
QT_MOC_LITERAL(4, 68, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 80, 5), // "index"
QT_MOC_LITERAL(6, 86, 20), // "on_pbFindAll_clicked"
QT_MOC_LITERAL(7, 107, 19), // "on_pbCancel_clicked"
QT_MOC_LITERAL(8, 127, 17), // "on_cbCase_clicked"
QT_MOC_LITERAL(9, 145, 24), // "on_cbInvertMatch_clicked"
QT_MOC_LITERAL(10, 170, 35), // "on_cbFindFormat_currentIndexC..."
QT_MOC_LITERAL(11, 206, 22), // "on_cbBackwards_clicked"
QT_MOC_LITERAL(12, 229, 18), // "on_cbBegin_clicked"
QT_MOC_LITERAL(13, 248, 18) // "on_cbRegex_clicked"

    },
    "AdvancedSearchDialog\0on_pbFind_clicked\0"
    "\0on_resultsTableView_clicked\0QModelIndex\0"
    "index\0on_pbFindAll_clicked\0"
    "on_pbCancel_clicked\0on_cbCase_clicked\0"
    "on_cbInvertMatch_clicked\0"
    "on_cbFindFormat_currentIndexChanged\0"
    "on_cbBackwards_clicked\0on_cbBegin_clicked\0"
    "on_cbRegex_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdvancedSearchDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    1,   65,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    1,   72,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdvancedSearchDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdvancedSearchDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pbFind_clicked(); break;
        case 1: _t->on_resultsTableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_pbFindAll_clicked(); break;
        case 3: _t->on_pbCancel_clicked(); break;
        case 4: _t->on_cbCase_clicked(); break;
        case 5: _t->on_cbInvertMatch_clicked(); break;
        case 6: _t->on_cbFindFormat_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_cbBackwards_clicked(); break;
        case 8: _t->on_cbBegin_clicked(); break;
        case 9: _t->on_cbRegex_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdvancedSearchDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AdvancedSearchDialog.data,
    qt_meta_data_AdvancedSearchDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdvancedSearchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdvancedSearchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdvancedSearchDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdvancedSearchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
