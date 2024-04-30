/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Projekt/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "device_connected",
    "",
    "device_disconnected",
    "device_stateChanged",
    "QAbstractSocket::SocketState",
    "device_errorOccurred",
    "QAbstractSocket::SocketError",
    "device_dataReady",
    "on_Exit_clicked",
    "on_light_bulb_bedroom_ON_clicked",
    "on_light_bulb_bedroom_OFF_clicked",
    "on_ligh_bulb_intense_changer_valueChanged",
    "value",
    "light_bulb_bedroom_intense_change",
    "on_red_bedroom_slider_valueChanged",
    "on_green_bedroom_slider_valueChanged",
    "on_blue_bedroom_slider_valueChanged",
    "on_Sypialnia_przycisk_clicked",
    "on_wifi_active_clicked",
    "on_computer_active_clicked",
    "on_bedroom_temperature_changer_valueChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[44];
    char stringdata0[11];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[20];
    char stringdata5[29];
    char stringdata6[21];
    char stringdata7[29];
    char stringdata8[17];
    char stringdata9[16];
    char stringdata10[33];
    char stringdata11[34];
    char stringdata12[42];
    char stringdata13[6];
    char stringdata14[34];
    char stringdata15[35];
    char stringdata16[37];
    char stringdata17[36];
    char stringdata18[30];
    char stringdata19[23];
    char stringdata20[27];
    char stringdata21[44];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 16),  // "device_connected"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 19),  // "device_disconnected"
        QT_MOC_LITERAL(49, 19),  // "device_stateChanged"
        QT_MOC_LITERAL(69, 28),  // "QAbstractSocket::SocketState"
        QT_MOC_LITERAL(98, 20),  // "device_errorOccurred"
        QT_MOC_LITERAL(119, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(148, 16),  // "device_dataReady"
        QT_MOC_LITERAL(165, 15),  // "on_Exit_clicked"
        QT_MOC_LITERAL(181, 32),  // "on_light_bulb_bedroom_ON_clicked"
        QT_MOC_LITERAL(214, 33),  // "on_light_bulb_bedroom_OFF_cli..."
        QT_MOC_LITERAL(248, 41),  // "on_ligh_bulb_intense_changer_..."
        QT_MOC_LITERAL(290, 5),  // "value"
        QT_MOC_LITERAL(296, 33),  // "light_bulb_bedroom_intense_ch..."
        QT_MOC_LITERAL(330, 34),  // "on_red_bedroom_slider_valueCh..."
        QT_MOC_LITERAL(365, 36),  // "on_green_bedroom_slider_value..."
        QT_MOC_LITERAL(402, 35),  // "on_blue_bedroom_slider_valueC..."
        QT_MOC_LITERAL(438, 29),  // "on_Sypialnia_przycisk_clicked"
        QT_MOC_LITERAL(468, 22),  // "on_wifi_active_clicked"
        QT_MOC_LITERAL(491, 26),  // "on_computer_active_clicked"
        QT_MOC_LITERAL(518, 43)   // "on_bedroom_temperature_change..."
    },
    "MainWindow",
    "device_connected",
    "",
    "device_disconnected",
    "device_stateChanged",
    "QAbstractSocket::SocketState",
    "device_errorOccurred",
    "QAbstractSocket::SocketError",
    "device_dataReady",
    "on_Exit_clicked",
    "on_light_bulb_bedroom_ON_clicked",
    "on_light_bulb_bedroom_OFF_clicked",
    "on_ligh_bulb_intense_changer_valueChanged",
    "value",
    "light_bulb_bedroom_intense_change",
    "on_red_bedroom_slider_valueChanged",
    "on_green_bedroom_slider_valueChanged",
    "on_blue_bedroom_slider_valueChanged",
    "on_Sypialnia_przycisk_clicked",
    "on_wifi_active_clicked",
    "on_computer_active_clicked",
    "on_bedroom_temperature_changer_valueChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x06,    1 /* Public */,
       3,    0,  117,    2, 0x06,    2 /* Public */,
       4,    1,  118,    2, 0x06,    3 /* Public */,
       6,    1,  121,    2, 0x06,    5 /* Public */,
       8,    1,  124,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,  127,    2, 0x08,    9 /* Private */,
      10,    0,  128,    2, 0x08,   10 /* Private */,
      11,    0,  129,    2, 0x08,   11 /* Private */,
      12,    1,  130,    2, 0x08,   12 /* Private */,
      14,    0,  133,    2, 0x08,   14 /* Private */,
      15,    1,  134,    2, 0x08,   15 /* Private */,
      16,    1,  137,    2, 0x08,   17 /* Private */,
      17,    1,  140,    2, 0x08,   19 /* Private */,
      18,    0,  143,    2, 0x08,   21 /* Private */,
      19,    0,  144,    2, 0x08,   22 /* Private */,
      20,    0,  145,    2, 0x08,   23 /* Private */,
      21,    1,  146,    2, 0x08,   24 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'device_connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'device_disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'device_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::false_type>,
        // method 'device_errorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'device_dataReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'on_Exit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_light_bulb_bedroom_ON_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_light_bulb_bedroom_OFF_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ligh_bulb_intense_changer_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'light_bulb_bedroom_intense_change'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_red_bedroom_slider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_green_bedroom_slider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_blue_bedroom_slider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_Sypialnia_przycisk_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_wifi_active_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_computer_active_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bedroom_temperature_changer_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->device_connected(); break;
        case 1: _t->device_disconnected(); break;
        case 2: _t->device_stateChanged((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketState>>(_a[1]))); break;
        case 3: _t->device_errorOccurred((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 4: _t->device_dataReady((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 5: _t->on_Exit_clicked(); break;
        case 6: _t->on_light_bulb_bedroom_ON_clicked(); break;
        case 7: _t->on_light_bulb_bedroom_OFF_clicked(); break;
        case 8: _t->on_ligh_bulb_intense_changer_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->light_bulb_bedroom_intense_change(); break;
        case 10: _t->on_red_bedroom_slider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_green_bedroom_slider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_blue_bedroom_slider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_Sypialnia_przycisk_clicked(); break;
        case 14: _t->on_wifi_active_clicked(); break;
        case 15: _t->on_computer_active_clicked(); break;
        case 16: _t->on_bedroom_temperature_changer_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::device_connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::device_disconnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QAbstractSocket::SocketState );
            if (_t _q_method = &MainWindow::device_stateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QAbstractSocket::SocketError );
            if (_t _q_method = &MainWindow::device_errorOccurred; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QByteArray );
            if (_t _q_method = &MainWindow::device_dataReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}


