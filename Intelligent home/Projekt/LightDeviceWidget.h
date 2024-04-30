#ifndef LIGHTDEVICEWIDGET_H
#define LIGHTDEVICEWIDGET_H

#include <QWidget>
#include <QPixmap>
#include "MyTCPServer.h"
#include "DeviceWidget.h"

class LightDeviceWidget : public DeviceWidget
{
    Q_OBJECT
public:
    LightDeviceWidget(MyTCPServer *server, QString device_name, QWidget *parent = nullptr);
    ~LightDeviceWidget();
    bool toggle = false;
    int intense=123, intense_temp=123, r=255, g=255, b=255;


private:
    QLabel *light_bulb;
    void simulateLight();
};

#endif // LIGHTDEVICEWIDGET_H
