/****************************************************************************
** Meta object code from reading C++ file 'calc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CalcWWin/calc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calc_t {
    QByteArrayData data[19];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calc_t qt_meta_stringdata_Calc = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Calc"
QT_MOC_LITERAL(1, 5, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 25), // "on_pushButton_dot_pressed"
QT_MOC_LITERAL(4, 54, 23), // "unary_operation_pressed"
QT_MOC_LITERAL(5, 78, 17), // "on_clear_released"
QT_MOC_LITERAL(6, 96, 18), // "on_result_released"
QT_MOC_LITERAL(7, 115, 17), // "on_pick_activated"
QT_MOC_LITERAL(8, 133, 5), // "index"
QT_MOC_LITERAL(9, 139, 26), // "on_pushButton_info_clicked"
QT_MOC_LITERAL(10, 166, 15), // "on_dark_clicked"
QT_MOC_LITERAL(11, 182, 24), // "on_value_editingFinished"
QT_MOC_LITERAL(12, 207, 20), // "on_value_textChanged"
QT_MOC_LITERAL(13, 228, 4), // "arg1"
QT_MOC_LITERAL(14, 233, 27), // "on_procent_selectionChanged"
QT_MOC_LITERAL(15, 261, 25), // "on_value_selectionChanged"
QT_MOC_LITERAL(16, 287, 25), // "on_years_selectionChanged"
QT_MOC_LITERAL(17, 313, 25), // "on_month_selectionChanged"
QT_MOC_LITERAL(18, 339, 24) // "on_days_selectionChanged"

    },
    "Calc\0on_pushButton_clicked\0\0"
    "on_pushButton_dot_pressed\0"
    "unary_operation_pressed\0on_clear_released\0"
    "on_result_released\0on_pick_activated\0"
    "index\0on_pushButton_info_clicked\0"
    "on_dark_clicked\0on_value_editingFinished\0"
    "on_value_textChanged\0arg1\0"
    "on_procent_selectionChanged\0"
    "on_value_selectionChanged\0"
    "on_years_selectionChanged\0"
    "on_month_selectionChanged\0"
    "on_days_selectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calc[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    1,   94,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    1,  100,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,
      17,    0,  106,    2, 0x08 /* Private */,
      18,    0,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Calc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Calc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_dot_pressed(); break;
        case 2: _t->unary_operation_pressed(); break;
        case 3: _t->on_clear_released(); break;
        case 4: _t->on_result_released(); break;
        case 5: _t->on_pick_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_info_clicked(); break;
        case 7: _t->on_dark_clicked(); break;
        case 8: _t->on_value_editingFinished(); break;
        case 9: _t->on_value_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_procent_selectionChanged(); break;
        case 11: _t->on_value_selectionChanged(); break;
        case 12: _t->on_years_selectionChanged(); break;
        case 13: _t->on_month_selectionChanged(); break;
        case 14: _t->on_days_selectionChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Calc::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Calc.data,
    qt_meta_data_Calc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calc.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Calc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
