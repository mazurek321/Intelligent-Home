#include "TemperatureDeviceWidget.h"

TemperatureDeviceWidget::TemperatureDeviceWidget(MyTCPServer *server, QString device_name, QWidget *parent)
    : DeviceWidget(device_name, parent)
{
    m_temperatureDial = new QDial;
    m_temperatureDial->setMinimum(0);
    m_temperatureDial->setMaximum(40);
    m_temperatureDial->setValue(20);
    m_temperatureDial->setMaximumHeight(125);
    m_temperatureDial->setMaximumWidth(125);
    m_temperatureDial->setMinimumHeight(125);
    m_temperatureDial->setMinimumWidth(125);
    QString message = QString("%1_dial").arg(device_name);
    m_temperatureDial->setObjectName(message);

    m_lcdNumber = new QLCDNumber;
    m_lcdNumber->setDigitCount(2);
    m_lcdNumber->display(m_temperatureDial->value());
    connect(m_temperatureDial, &QDial::valueChanged, this, [=](int value) {
        m_lcdNumber->display(value);
        QString message = QString("%1:%2").arg(device_name).arg(value);
        server->sendToAll(message);
    });
    m_lcdNumber->setMaximumWidth(75);
    m_lcdNumber->setMinimumWidth(75);
    message = QString("%1_lcdNumber").arg(device_name);
    m_lcdNumber->setObjectName(message);

    m_temperatureDegrees = new QLabel("℃");
    message = QString("%1_degrees").arg(device_name);
    m_temperatureDegrees->setObjectName(message);

    addWidget(m_temperatureDial, 1, 0);
    addWidget(m_lcdNumber, 1, 1);
    addWidget(m_temperatureDegrees, 1, 2);
}

TemperatureDeviceWidget::~TemperatureDeviceWidget(){
    delete m_temperatureDial;
    delete m_lcdNumber;
    delete m_temperatureDegrees;
}
