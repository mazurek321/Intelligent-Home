#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    auto ip = "127.0.0.1";
    auto port = 12345;

    _controller.connectToDevice(ip, port);
    _controller.send(device_type);
    setDeviceController();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::setDeviceController(){
    connect(&_controller, &DeviceController::connected, this, &MainWindow::device_connected);
    connect(&_controller, &DeviceController::disconnected, this, &MainWindow::device_disconnected);
    connect(&_controller, &DeviceController::stateChanged, this, &MainWindow::device_stateChanged);
    connect(&_controller, &DeviceController::errorOccurred, this, &MainWindow::device_errorOccurred);
    connect(&_controller, &DeviceController::dataReady, this, &MainWindow::device_dataReady);
}


void MainWindow::device_connected(){
    std::cout<<"Connected to device"<<std::endl;
}

void MainWindow::device_disconnected(){
    std::cout<<"Disconnected from device"<<std::endl;
}

void MainWindow::device_stateChanged(QAbstractSocket::SocketState state){
    QMetaEnum metaEnum = QMetaEnum::fromType<QAbstractSocket::SocketState>();
    std::cout<<metaEnum.valueToKey(state)<<std::endl;
}

void MainWindow::device_errorOccurred(QAbstractSocket::SocketError error){
    QMetaEnum metaEnum = QMetaEnum::fromType<QAbstractSocket::SocketError>();
    std::cout<<metaEnum.valueToKey(error)<<std::endl;
}

void MainWindow::device_dataReady(QByteArray data){
    QString message = QString::fromStdString(data.toStdString());

    command = QString("name=(\\w+)");
    QRegularExpression regex_name(command);
    QRegularExpressionMatch match_name = regex_name.match(message);
    if (match_name.hasMatch()) {
        QString nameStr = match_name.captured(1);
        device_name = nameStr;
        ui->label->setText(device_name);
        ui->label->setStyleSheet("color: white; font-size: 24pt; tex-align: center; font-weight: bold;");
        ui->label->setAlignment(Qt::AlignCenter);
    }

    command = QString("%1_Intense:(\\d+)").arg(device_name);
    QRegularExpression regex_intense(command);
    QRegularExpressionMatch match_intense = regex_intense.match(message);
    if (match_intense.hasMatch()) {
        QString intenseStr = match_intense.captured(1);
        intense = intenseStr.toInt();
        intense_temp = intenseStr.toInt();
        if(toggle){simulateLight();}
    }

    command = QString("%1_r:(\\d+)").arg(device_name);
    QRegularExpression regex_r(command);
    QRegularExpressionMatch match_r = regex_r.match(message);
    if (match_r.hasMatch()) {
        QString rStr = match_r.captured(1);
        r = rStr.toInt();
        simulateLight();
    }

    command = QString("%1_g:(\\d+)").arg(device_name);
    QRegularExpression regex_g(command);
    QRegularExpressionMatch match_g = regex_g.match(message);
    if (match_g.hasMatch()) {
        QString gStr = match_g.captured(1);
        g = gStr.toInt();
        simulateLight();
    }

    command = QString("%1_b:(\\d+)").arg(device_name);
    QRegularExpression regex_b(command);
    QRegularExpressionMatch match_b = regex_b.match(message);
    if (match_b.hasMatch()) {
        QString bStr = match_b.captured(1);
        b = bStr.toInt();
        simulateLight();
    }

    command = QString("%1_Light:(\\d+)").arg(device_name);
    QRegularExpression regex_toggle(command);
    QRegularExpressionMatch match_toggle = regex_toggle.match(message);
    if (match_toggle.hasMatch()) {
        QString toggleStr = match_toggle.captured(1);
        toggle = toggleStr.toInt();
        if(toggle){
            intense = intense_temp;
        }else{
            intense_temp = intense;
            intense = 0;
        }
        simulateLight();
    }

    std::cout <<"Intense"<< intense << std::endl;
    std::cout <<"r"<< r << std::endl;
    std::cout <<"g"<< g << std::endl;
    std::cout <<"b"<< b << std::endl;
    std::cout <<"Status: "<< toggle << std::endl;

}

void MainWindow::simulateLight(){
    QString style = QString("border-radius: 50%; background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, "
                            "radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(%1, %2, %3, %4), "
                            "stop:1 rgba(%1, %2, %3, 0));").arg(r).arg(g).arg(b).arg(intense);
    ui->light->setStyleSheet(style);
}
