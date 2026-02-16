/****************************************************************************
** Meta object code from reading C++ file 'qhexedit.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qhexedit/qhexedit.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhexedit.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8QHexEditE_t {};
} // unnamed namespace

template <> constexpr inline auto QHexEdit::qt_create_metaobjectdata<qt_meta_tag_ZN8QHexEditE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QHexEdit",
        "currentAddressChanged",
        "",
        "address",
        "currentSizeChanged",
        "size",
        "dataChanged",
        "overwriteModeChanged",
        "state",
        "addBytePatternRequested",
        "start",
        "length",
        "data",
        "redo",
        "undo",
        "adjust",
        "dataChangedPrivate",
        "idx",
        "refresh",
        "updateCursor",
        "showContextMenu",
        "QPoint",
        "pos",
        "copyText",
        "pasteText",
        "cutText",
        "addressArea",
        "addressAreaColor",
        "QColor",
        "addressFontColor",
        "asciiAreaColor",
        "asciiFontColor",
        "hexFontColor",
        "addressOffset",
        "addressWidth",
        "asciiArea",
        "bytesPerLine",
        "cursorPosition",
        "hexCaps",
        "dynamicBytesPerLine",
        "highlighting",
        "highlightingColor",
        "overwriteMode",
        "selectionColor",
        "readOnly",
        "font",
        "QFont"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentAddressChanged'
        QtMocHelpers::SignalData<void(qint64)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 3 },
        }}),
        // Signal 'currentSizeChanged'
        QtMocHelpers::SignalData<void(qint64)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 5 },
        }}),
        // Signal 'dataChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'overwriteModeChanged'
        QtMocHelpers::SignalData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Signal 'addBytePatternRequested'
        QtMocHelpers::SignalData<void(qint64, qint64, QByteArray)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 10 }, { QMetaType::LongLong, 11 }, { QMetaType::QByteArray, 12 },
        }}),
        // Slot 'redo'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'undo'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'adjust'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dataChangedPrivate'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 17 },
        }}),
        // Slot 'dataChangedPrivate'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'refresh'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateCursor'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Slot 'copyText'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'pasteText'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'cutText'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'addressArea'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'addressAreaColor'
        QtMocHelpers::PropertyData<QColor>(27, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'addressFontColor'
        QtMocHelpers::PropertyData<QColor>(29, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'asciiAreaColor'
        QtMocHelpers::PropertyData<QColor>(30, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'asciiFontColor'
        QtMocHelpers::PropertyData<QColor>(31, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hexFontColor'
        QtMocHelpers::PropertyData<QColor>(32, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'addressOffset'
        QtMocHelpers::PropertyData<qint64>(33, QMetaType::LongLong, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'addressWidth'
        QtMocHelpers::PropertyData<int>(34, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'asciiArea'
        QtMocHelpers::PropertyData<bool>(35, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'bytesPerLine'
        QtMocHelpers::PropertyData<int>(36, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'cursorPosition'
        QtMocHelpers::PropertyData<qint64>(37, QMetaType::LongLong, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'data'
        QtMocHelpers::PropertyData<QByteArray>(12, QMetaType::QByteArray, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'hexCaps'
        QtMocHelpers::PropertyData<bool>(38, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'dynamicBytesPerLine'
        QtMocHelpers::PropertyData<bool>(39, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'highlighting'
        QtMocHelpers::PropertyData<bool>(40, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'highlightingColor'
        QtMocHelpers::PropertyData<QColor>(41, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'overwriteMode'
        QtMocHelpers::PropertyData<bool>(42, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'selectionColor'
        QtMocHelpers::PropertyData<QColor>(43, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'readOnly'
        QtMocHelpers::PropertyData<bool>(44, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'font'
        QtMocHelpers::PropertyData<QFont>(45, 0x80000000 | 46, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QHexEdit, qt_meta_tag_ZN8QHexEditE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QHexEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8QHexEditE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8QHexEditE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8QHexEditE_t>.metaTypes,
    nullptr
} };

void QHexEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QHexEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentAddressChanged((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 1: _t->currentSizeChanged((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 2: _t->dataChanged(); break;
        case 3: _t->overwriteModeChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->addBytePatternRequested((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[3]))); break;
        case 5: _t->redo(); break;
        case 6: _t->undo(); break;
        case 7: _t->adjust(); break;
        case 8: _t->dataChangedPrivate((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->dataChangedPrivate(); break;
        case 10: _t->refresh(); break;
        case 11: _t->updateCursor(); break;
        case 12: _t->showContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 13: _t->copyText(); break;
        case 14: _t->pasteText(); break;
        case 15: _t->cutText(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QHexEdit::*)(qint64 )>(_a, &QHexEdit::currentAddressChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QHexEdit::*)(qint64 )>(_a, &QHexEdit::currentSizeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QHexEdit::*)()>(_a, &QHexEdit::dataChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QHexEdit::*)(bool )>(_a, &QHexEdit::overwriteModeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (QHexEdit::*)(qint64 , qint64 , QByteArray )>(_a, &QHexEdit::addBytePatternRequested, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->addressArea(); break;
        case 1: *reinterpret_cast<QColor*>(_v) = _t->addressAreaColor(); break;
        case 2: *reinterpret_cast<QColor*>(_v) = _t->addressFontColor(); break;
        case 3: *reinterpret_cast<QColor*>(_v) = _t->asciiAreaColor(); break;
        case 4: *reinterpret_cast<QColor*>(_v) = _t->asciiFontColor(); break;
        case 5: *reinterpret_cast<QColor*>(_v) = _t->hexFontColor(); break;
        case 6: *reinterpret_cast<qint64*>(_v) = _t->addressOffset(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->addressWidth(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->asciiArea(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->bytesPerLine(); break;
        case 10: *reinterpret_cast<qint64*>(_v) = _t->cursorPosition(); break;
        case 11: *reinterpret_cast<QByteArray*>(_v) = _t->data(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->hexCaps(); break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->dynamicBytesPerLine(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->highlighting(); break;
        case 15: *reinterpret_cast<QColor*>(_v) = _t->highlightingColor(); break;
        case 16: *reinterpret_cast<bool*>(_v) = _t->overwriteMode(); break;
        case 17: *reinterpret_cast<QColor*>(_v) = _t->selectionColor(); break;
        case 18: *reinterpret_cast<bool*>(_v) = _t->isReadOnly(); break;
        case 19: *reinterpret_cast<QFont*>(_v) = _t->font(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAddressArea(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setAddressAreaColor(*reinterpret_cast<QColor*>(_v)); break;
        case 2: _t->setAddressFontColor(*reinterpret_cast<QColor*>(_v)); break;
        case 3: _t->setAsciiAreaColor(*reinterpret_cast<QColor*>(_v)); break;
        case 4: _t->setAsciiFontColor(*reinterpret_cast<QColor*>(_v)); break;
        case 5: _t->setHexFontColor(*reinterpret_cast<QColor*>(_v)); break;
        case 6: _t->setAddressOffset(*reinterpret_cast<qint64*>(_v)); break;
        case 7: _t->setAddressWidth(*reinterpret_cast<int*>(_v)); break;
        case 8: _t->setAsciiArea(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setBytesPerLine(*reinterpret_cast<int*>(_v)); break;
        case 10: _t->setCursorPosition(*reinterpret_cast<qint64*>(_v)); break;
        case 11: _t->setData(*reinterpret_cast<QByteArray*>(_v)); break;
        case 12: _t->setHexCaps(*reinterpret_cast<bool*>(_v)); break;
        case 13: _t->setDynamicBytesPerLine(*reinterpret_cast<bool*>(_v)); break;
        case 14: _t->setHighlighting(*reinterpret_cast<bool*>(_v)); break;
        case 15: _t->setHighlightingColor(*reinterpret_cast<QColor*>(_v)); break;
        case 16: _t->setOverwriteMode(*reinterpret_cast<bool*>(_v)); break;
        case 17: _t->setSelectionColor(*reinterpret_cast<QColor*>(_v)); break;
        case 18: _t->setReadOnly(*reinterpret_cast<bool*>(_v)); break;
        case 19: _t->setFont(*reinterpret_cast<QFont*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QHexEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHexEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8QHexEditE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QHexEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void QHexEdit::currentAddressChanged(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QHexEdit::currentSizeChanged(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QHexEdit::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QHexEdit::overwriteModeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void QHexEdit::addBytePatternRequested(qint64 _t1, qint64 _t2, QByteArray _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
