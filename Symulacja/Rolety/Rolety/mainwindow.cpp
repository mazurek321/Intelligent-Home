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
        ui->label->setStyleSheet("color: white; font-size: 14pt; tex-align: center; font-weight: bold;");
        ui->label->setAlignment(Qt::AlignCenter);
    }

    command = QString("%1_roleta:(\\d+)").arg(device_name);
    QRegularExpression regex(command);
    QRegularExpressionMatch match = regex.match(message);
    QString rollerBlinds = match.captured(1);
    if (match.hasMatch()) {
        QString toggleStr = match.captured(1);
        int toggle = toggleStr.toInt();
        simulate(toggle);
    }
}

void MainWindow::simulate(int toggle){
    animation = new QPropertyAnimation(ui->roleta, "geometry");
    animation->setDuration(5000);
    animation->setStartValue(ui->roleta->geometry());
    toggle ? animation->setEndValue(QRect(ui->roleta->x(),110,ui->roleta->width(),ui->roleta->height())) : animation->setEndValue(QRect(ui->roleta->x(),-250,ui->roleta->width(),ui->roleta->height()));
    animation->start();
}


