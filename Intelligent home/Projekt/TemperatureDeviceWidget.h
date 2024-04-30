#ifndef TEMPERATUREDEVICEWIDGET_H
#define TEMPERATUREDEVICEWIDGET_H

#include <QWidget>
#include "MyTCPServer.h"
#include "DeviceWidget.h"

class TemperatureDeviceWidget : public DeviceWidget
{
    Q_OBJECT
public:
    TemperatureDeviceWidget(MyTCPServer *server, QString device_name, QWidget *parent = nullptr);
    ~TemperatureDeviceWidget();

private:
    QDial *m_temperatureDial;
    QLCDNumber *m_lcdNumber;
    QLabel *m_temperatureDegrees;
};

#endif // TEMPERATUREDEVICEWIDGET_H
