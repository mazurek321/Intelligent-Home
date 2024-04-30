#include "LightDeviceWidget.h"

LightDeviceWidget::LightDeviceWidget(MyTCPServer *server, QString device_name, QWidget *parent)
    :  DeviceWidget(device_name, parent)
{
    light_bulb = new QLabel;
    light_bulb->setMinimumWidth(100);
    light_bulb->setMinimumHeight(100);
    light_bulb->setMaximumHeight(100);
    light_bulb->setMaximumWidth(100);
    QString message = QString("%1_light_bulb").arg(device_name);
    light_bulb->setObjectName(message);
    addWidget(light_bulb, 1,0);

    QPushButton *lightToggle = new QPushButton;
    lightToggle->setText("OFF");
    lightToggle->setStyleSheet("background-color: rgb(30,30,30); color: white;");
    lightToggle->setMaximumHeight(50);
    lightToggle->setMaximumWidth(50);
    lightToggle->setMinimumHeight(50);
    lightToggle->setMinimumWidth(50);
    message = QString("%1_light_toggle").arg(device_name);
    lightToggle->setObjectName(message);
    addWidget(lightToggle, 1, 1);
    connect(lightToggle, &QPushButton::clicked, this, [=]() {
        toggle = !toggle;
        if(toggle){
            lightToggle->setStyleSheet("background-color: rgb(0,140,0); color: white;");
            lightToggle->setText("ON");
            intense = intense_temp;
            QString message = QString("%1_Light:1").arg(device_name);
            server->sendToAll(message);
        }else{
            lightToggle->setStyleSheet("background-color: rgb(30,30,30); color: white;");
            lightToggle->setText("OFF");
            intense_temp = intense;
            intense = 0;
            QString message = QString("%1_Light:0").arg(device_name);
            server->sendToAll(message);
        }
        simulateLight();
    });

    QSlider *intense = new QSlider;
    addWidget(intense, 1,3);
    intense->setMaximumHeight(190);
    intense->setMinimum(0);
    intense->setMaximum(255);
    intense->setValue(123);
    message = QString("%1_intense").arg(device_name);
    intense->setObjectName(message);
    connect(intense, &QSlider::valueChanged, this, [=](int value) {
        this->intense=value;
        this->intense_temp=value;
        QString message = QString("%1_Intense:%2").arg(device_name).arg(value);
        server->sendToAll(message);
        if(toggle){simulateLight();}
    });


    QSlider *r = new QSlider;
    addWidget(r, 1,4);
    r->setStyleSheet("background-color: rgb(140,0,0)");
    r->setMaximumHeight(190);
    r->setMinimum(0);
    r->setMaximum(255);
    r->setValue(255);
    message = QString("%1_r").arg(device_name);
    r->setObjectName(message);
    connect(r, &QSlider::valueChanged, this, [=](int value) {
        this->r=value;
        QString message = QString("%1_r:%2").arg(device_name).arg(value);
        server->sendToAll(message);
        simulateLight();
    });

    QSlider *g = new QSlider;
    addWidget(g, 1,5);
    g->setStyleSheet("background-color: rgb(0,140,0)");
    g->setMaximumHeight(190);
    g->setMinimum(0);
    g->setMaximum(255);
    g->setValue(255);
    message = QString("%1_g").arg(device_name);
    g->setObjectName(message);
    connect(g, &QSlider::valueChanged, this, [=](int value) {
        this->g=value;
        QString message = QString("%1_g:%2").arg(device_name).arg(value);
        server->sendToAll(message);
        simulateLight();
    });

    QSlider *b = new QSlider;
    addWidget(b, 1,6);
    b->setStyleSheet("background-color: rgb(0,0,140)");
    b->setMaximumHeight(190);
    b->setMinimum(0);
    b->setMaximum(255);
    b->setValue(255);
    message = QString("%1_b").arg(device_name);
    b->setObjectName(message);
    connect(b, &QSlider::valueChanged, this, [=](int value) {
        this->b=value;
        QString message = QString("%1_b:%2").arg(device_name).arg(value);
        server->sendToAll(message);
        simulateLight();
    });
}

LightDeviceWidget::~LightDeviceWidget(){
    delete light_bulb;
}

void LightDeviceWidget::simulateLight(){
    QString style = QString("border-radius: 50%; background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, "
                            "radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(%1, %2, %3, %4), "
                                "stop:1 rgba(%1, %2, %3, 0));").arg(r).arg(g).arg(b).arg(intense);
    light_bulb->setStyleSheet(style);
}
