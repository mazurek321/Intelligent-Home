#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _server = new MyTCPServer();
    connect(_server, &MyTCPServer::newDeviceConnected, this, &MainWindow::newDeviceConnected);
    connect(_server, &MyTCPServer::dataReceived, this, &MainWindow::deviceDataReceived);
    connect(_server, &MyTCPServer::deviceDisconnect, this, &MainWindow::deviceDisconnected);
    connect(this, &MainWindow::deviceSubmitted, _server, &MyTCPServer::sendNameToDevice);

    gridLayout = new QGridLayout(ui->scrollAreaWidgetContents);
    ui->add_new_device->hide();
    ui->invalid_name->hide();
}


MainWindow::~MainWindow()
{
    delete ui;
    delete _server;
    delete gridLayout;
    foreach(auto widget, widgets){
        delete widget;
    }
}


void MainWindow::on_Exit_clicked()
{
    this->~MainWindow();
    MainWindow::close();
}

void MainWindow::deviceDisconnected(QString deviceName)
{
    qDebug()<<"Device disconnected";
}

void MainWindow::deviceDataReceived(QString data)
{
    this->device_type = data;
    this->newDeviceConnected();
}

void MainWindow::newDeviceConnected(){
    std::cout<<"New device connected"<<std::endl;
    ui->add_new_device->show();
}


void MainWindow::on_cancel_clicked()
{
    ui->add_new_device->hide();
    ui->new_device_name->setPlainText("");
    ui->new_device_name->setAlignment(Qt::AlignCenter);
    ui->invalid_name->hide();
}


void MainWindow::on_submit_clicked()
{
    device_name = ui->new_device_name->toPlainText();
    for(int i=0; i<device_name.length(); i++){
        if(device_name[i] == ' '){
            device_name[i] = '_';
        }
    }

    bool nameExists = false;
    foreach(auto name, usedNames) {
        if (name == device_name) {
            nameExists = true;
            ui->invalid_name->show();
            break;
        }
    }

    if(!nameExists){
        usedNames.append(device_name);
        emit deviceSubmitted(device_name);
        ui->invalid_name->hide();
        ui->add_new_device->hide();
        ui->new_device_name->setPlainText("");
        ui->new_device_name->setAlignment(Qt::AlignCenter);

        if(device_type == "Temperatura"){
            TemperatureDeviceWidget *temperature = new TemperatureDeviceWidget(_server, device_name);
            temperature->setObjectName(device_name);
            gridLayout->addWidget(temperature);
            widgets.append(temperature);
        }
        else if(device_type == "Rolety"){
            RollerBlindDeviceWidget *rollerBlinds = new RollerBlindDeviceWidget(_server, device_name);
            rollerBlinds->setObjectName(device_name);
            gridLayout->addWidget(rollerBlinds);
            widgets.append(rollerBlinds);
        }
        else if(device_type == "Swiatlo"){
            LightDeviceWidget *light = new LightDeviceWidget(_server, device_name);
            light->setObjectName(device_name);
            gridLayout->addWidget(light);
            widgets.append(light);
        }
        else{
            qDebug()<<"Unknown device";
        }
    }
}

