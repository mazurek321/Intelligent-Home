#ifndef ROLLERBLINDDEVICEWIDGET_H
#define ROLLERBLINDDEVICEWIDGET_H

#include <QWidget>
#include "MyTCPServer.h"
#include "DeviceWidget.h"

class RollerBlindDeviceWidget : public DeviceWidget
{
    Q_OBJECT
public:
    explicit RollerBlindDeviceWidget(MyTCPServer *server, QString device_name, QWidget *parent = nullptr);

private:
    int toggle;
};

#endif // ROLLERBLINDDEVICEWIDGET_H
