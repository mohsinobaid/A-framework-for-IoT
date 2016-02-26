/****************************************************************************
** Meta object code from reading C++ file 'arduinoUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QTStart/arduinoUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'arduinoUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ArduinoUI_t {
    QByteArrayData data[8];
    char stringdata[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArduinoUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArduinoUI_t qt_meta_stringdata_ArduinoUI = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ArduinoUI"
QT_MOC_LITERAL(1, 10, 29), // "on_configAcceptSerial_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "on_serialButton_clicked"
QT_MOC_LITERAL(4, 65, 25), // "on_ethernetButton_clicked"
QT_MOC_LITERAL(5, 91, 21), // "on_wifiButton_clicked"
QT_MOC_LITERAL(6, 113, 27), // "on_configAcceptWifi_clicked"
QT_MOC_LITERAL(7, 141, 31) // "on_configAcceptEthernet_clicked"

    },
    "ArduinoUI\0on_configAcceptSerial_clicked\0"
    "\0on_serialButton_clicked\0"
    "on_ethernetButton_clicked\0"
    "on_wifiButton_clicked\0on_configAcceptWifi_clicked\0"
    "on_configAcceptEthernet_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArduinoUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ArduinoUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ArduinoUI *_t = static_cast<ArduinoUI *>(_o);
        switch (_id) {
        case 0: _t->on_configAcceptSerial_clicked(); break;
        case 1: _t->on_serialButton_clicked(); break;
        case 2: _t->on_ethernetButton_clicked(); break;
        case 3: _t->on_wifiButton_clicked(); break;
        case 4: _t->on_configAcceptWifi_clicked(); break;
        case 5: _t->on_configAcceptEthernet_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ArduinoUI::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ArduinoUI.data,
      qt_meta_data_ArduinoUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ArduinoUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArduinoUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ArduinoUI.stringdata))
        return static_cast<void*>(const_cast< ArduinoUI*>(this));
    return QWidget::qt_metacast(_clname);
}

int ArduinoUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
