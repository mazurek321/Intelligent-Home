/****************************************************************************
** Meta object code from reading C++ file 'TemperatureDeviceWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Intelligent home/Projekt/TemperatureDeviceWidget.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TemperatureDeviceWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTemperatureDeviceWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTemperatureDeviceWidgetENDCLASS = QtMocHelpers::stringData(
    "TemperatureDeviceWidget"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTemperatureDeviceWidgetENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTemperatureDeviceWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTemperatureDeviceWidgetENDCLASS_t qt_meta_stringdata_CLASSTemperatureDeviceWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23)   // "TemperatureDeviceWidget"
    },
    "TemperatureDeviceWidget"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTemperatureDeviceWidgetENDCLASS[] = {

 // content:
      12,       // revision
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

Q_CONSTINIT const QMetaObject TemperatureDeviceWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTemperatureDeviceWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTemperatureDeviceWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTemperatureDeviceWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TemperatureDeviceWidget, std::true_type>
    >,
    nullptr
} };

void TemperatureDeviceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *TemperatureDeviceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TemperatureDeviceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTemperatureDeviceWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DeviceWidget::qt_metacast(_clname);
}

int TemperatureDeviceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
