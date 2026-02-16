/****************************************************************************
** Meta object code from reading C++ file 'hexwalkmain.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../hexwalkmain.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hexwalkmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN11HexWalkMainE_t {};
} // unnamed namespace

template <> constexpr inline auto HexWalkMain::qt_create_metaobjectdata<qt_meta_tag_ZN11HexWalkMainE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "HexWalkMain",
        "fileLoaded",
        "",
        "about",
        "dataChanged",
        "open",
        "close",
        "openRecent",
        "findNext",
        "save",
        "saveAs",
        "saveSelectionToReadableFile",
        "saveToReadableFile",
        "setAddress",
        "address",
        "setOverwriteMode",
        "mode",
        "setSize",
        "size",
        "showSearchDialog",
        "showAdvancedSearchDialog",
        "showEntropyDialog",
        "showBinaryDialog",
        "showDiffDialog",
        "showOptionsDialog",
        "showConverterWidget",
        "showHashDialog",
        "showTagsDialog",
        "showStringsDialog",
        "showByteMap",
        "showDisasm",
        "toggleOverwriteMode",
        "gotoAddress",
        "setWidth",
        "updateOptions",
        "on_signedcb_clicked",
        "onTagsAddBtnClicked",
        "onTagsDelBtnClicked",
        "onTagsLoadBtnClicked",
        "onTagsSaveBtnClicked",
        "onTagsResetBtnClicked",
        "onTagsTableClicked",
        "QModelIndex",
        "index",
        "onTagsTableDoubleClicked",
        "triggerTagsUpdate",
        "triggerTagsFileUpdate",
        "onAddBytePatternFromSelection",
        "start",
        "length",
        "data"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fileLoaded'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'about'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dataChanged'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'open'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'close'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openRecent'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'findNext'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<bool()>(9, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'saveAs'
        QtMocHelpers::SlotData<bool()>(10, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'saveSelectionToReadableFile'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveToReadableFile'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setAddress'
        QtMocHelpers::SlotData<void(qint64)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 14 },
        }}),
        // Slot 'setOverwriteMode'
        QtMocHelpers::SlotData<void(bool)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Slot 'setSize'
        QtMocHelpers::SlotData<void(qint64)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 18 },
        }}),
        // Slot 'showSearchDialog'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showAdvancedSearchDialog'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showEntropyDialog'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showBinaryDialog'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showDiffDialog'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showOptionsDialog'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showConverterWidget'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showHashDialog'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showTagsDialog'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showStringsDialog'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showByteMap'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showDisasm'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleOverwriteMode'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'gotoAddress'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setWidth'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateOptions'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_signedcb_clicked'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTagsAddBtnClicked'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTagsDelBtnClicked'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTagsLoadBtnClicked'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTagsSaveBtnClicked'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTagsResetBtnClicked'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTagsTableClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 42, 43 },
        }}),
        // Slot 'onTagsTableDoubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 42, 43 },
        }}),
        // Slot 'triggerTagsUpdate'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'triggerTagsFileUpdate'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onAddBytePatternFromSelection'
        QtMocHelpers::SlotData<void(qint64, qint64, QByteArray)>(47, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 48 }, { QMetaType::LongLong, 49 }, { QMetaType::QByteArray, 50 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<HexWalkMain, qt_meta_tag_ZN11HexWalkMainE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject HexWalkMain::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11HexWalkMainE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11HexWalkMainE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11HexWalkMainE_t>.metaTypes,
    nullptr
} };

void HexWalkMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HexWalkMain *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fileLoaded(); break;
        case 1: _t->about(); break;
        case 2: _t->dataChanged(); break;
        case 3: _t->open(); break;
        case 4: _t->close(); break;
        case 5: _t->openRecent(); break;
        case 6: _t->findNext(); break;
        case 7: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->saveSelectionToReadableFile(); break;
        case 10: _t->saveToReadableFile(); break;
        case 11: _t->setAddress((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 12: _t->setOverwriteMode((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->setSize((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 14: _t->showSearchDialog(); break;
        case 15: _t->showAdvancedSearchDialog(); break;
        case 16: _t->showEntropyDialog(); break;
        case 17: _t->showBinaryDialog(); break;
        case 18: _t->showDiffDialog(); break;
        case 19: _t->showOptionsDialog(); break;
        case 20: _t->showConverterWidget(); break;
        case 21: _t->showHashDialog(); break;
        case 22: _t->showTagsDialog(); break;
        case 23: _t->showStringsDialog(); break;
        case 24: _t->showByteMap(); break;
        case 25: _t->showDisasm(); break;
        case 26: _t->toggleOverwriteMode(); break;
        case 27: _t->gotoAddress(); break;
        case 28: _t->setWidth(); break;
        case 29: _t->updateOptions(); break;
        case 30: _t->on_signedcb_clicked(); break;
        case 31: _t->onTagsAddBtnClicked(); break;
        case 32: _t->onTagsDelBtnClicked(); break;
        case 33: _t->onTagsLoadBtnClicked(); break;
        case 34: _t->onTagsSaveBtnClicked(); break;
        case 35: _t->onTagsResetBtnClicked(); break;
        case 36: _t->onTagsTableClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 37: _t->onTagsTableDoubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 38: _t->triggerTagsUpdate(); break;
        case 39: _t->triggerTagsFileUpdate(); break;
        case 40: _t->onAddBytePatternFromSelection((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (HexWalkMain::*)()>(_a, &HexWalkMain::fileLoaded, 0))
            return;
    }
}

const QMetaObject *HexWalkMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HexWalkMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11HexWalkMainE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int HexWalkMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void HexWalkMain::fileLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
