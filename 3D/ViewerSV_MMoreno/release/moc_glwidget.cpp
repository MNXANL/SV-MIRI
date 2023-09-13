/****************************************************************************
** Meta object code from reading C++ file 'glwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../glwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GLWidget_t {
    QByteArrayData data[14];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GLWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GLWidget_t qt_meta_stringdata_GLWidget = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GLWidget"
QT_MOC_LITERAL(1, 9, 7), // "paintGL"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "SetK"
QT_MOC_LITERAL(4, 23, 3), // "val"
QT_MOC_LITERAL(5, 27, 10), // "SetBasicTF"
QT_MOC_LITERAL(6, 38, 8), // "SetPhong"
QT_MOC_LITERAL(7, 47, 6), // "SetHAS"
QT_MOC_LITERAL(8, 54, 10), // "SetColourR"
QT_MOC_LITERAL(9, 65, 10), // "SetColourG"
QT_MOC_LITERAL(10, 76, 10), // "SetColourB"
QT_MOC_LITERAL(11, 87, 7), // "SetPosX"
QT_MOC_LITERAL(12, 95, 7), // "SetPosY"
QT_MOC_LITERAL(13, 103, 7) // "SetPosZ"

    },
    "GLWidget\0paintGL\0\0SetK\0val\0SetBasicTF\0"
    "SetPhong\0SetHAS\0SetColourR\0SetColourG\0"
    "SetColourB\0SetPosX\0SetPosY\0SetPosZ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x09 /* Protected */,
       3,    1,   70,    2, 0x09 /* Protected */,
       5,    1,   73,    2, 0x09 /* Protected */,
       6,    1,   76,    2, 0x09 /* Protected */,
       7,    1,   79,    2, 0x09 /* Protected */,
       8,    1,   82,    2, 0x09 /* Protected */,
       9,    1,   85,    2, 0x09 /* Protected */,
      10,    1,   88,    2, 0x09 /* Protected */,
      11,    1,   91,    2, 0x09 /* Protected */,
      12,    1,   94,    2, 0x09 /* Protected */,
      13,    1,   97,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,

       0        // eod
};

void GLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GLWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paintGL(); break;
        case 1: _t->SetK((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SetBasicTF((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->SetPhong((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->SetHAS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->SetColourR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->SetColourG((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->SetColourB((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->SetPosX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->SetPosY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->SetPosZ((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GLWidget::staticMetaObject = { {
    &QGLWidget::staticMetaObject,
    qt_meta_stringdata_GLWidget.data,
    qt_meta_data_GLWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GLWidget.stringdata0))
        return static_cast<void*>(this);
    return QGLWidget::qt_metacast(_clname);
}

int GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
