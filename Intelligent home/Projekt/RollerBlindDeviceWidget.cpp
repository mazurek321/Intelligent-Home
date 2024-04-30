#include "RollerBlindDeviceWidget.h"

RollerBlindDeviceWidget::RollerBlindDeviceWidget(MyTCPServer *server, QString device_name, QWidget *parent)
    : DeviceWidget(device_name, parent)
{
    QPushButton *degreeButton = new QPushButton;
    degreeButton->setText("Odsuniete");
    degreeButton->setMinimumHeight(50);
    degreeButton->setMaximumHeight(50);
    degreeButton->setMinimumWidth(285);
    degreeButton->setMaximumWidth(285);
    degreeButton->setStyleSheet("background-color: rgb(30,30,30); color: white;");
    QString message = QString("%1_degreeButton").arg(device_name);
    degreeButton->setObjectName(message);
    addWidget(degreeButton, 1, 0);
    connect(degreeButton, &QPushButton::clicked, this, [=]() {
        toggle = !toggle;
        QString message = QString("%1_roleta:%2").arg(device_name).arg(toggle);
        server->sendToAll(message);
        if(toggle){
            degreeButton->setStyleSheet("background-color: rgb(140,0,0); color: white;");
            degreeButton->setText("Zasloniete");
        }else{
            degreeButton->setStyleSheet("background-color: rgb(30,30,30); color: white;");
            degreeButton->setText("Odsuniete");
        }
    });
}
