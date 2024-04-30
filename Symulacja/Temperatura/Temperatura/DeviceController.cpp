#include "DeviceController.h"
#include "qregularexpression.h"
#include <iostream>

DeviceController::DeviceController(QObject *parent)
    : QObject{parent}
{
    connect(&_socket, &QTcpSocket::connected, this, &DeviceController::connected);
    connect(&_socket, &QTcpSocket::disconnected, this, &DeviceController::disconnected);
    connect(&_socket, &QTcpSocket::stateChanged, this, &DeviceController::socket_stateChanged);
    connect(&_socket, &QTcpSocket::errorOccurred, this, &DeviceController::errorOccurred);
    connect(&_socket, &QTcpSocket::readyRead, this, &DeviceController::socket_readyRead);
}


void DeviceController::connectToDevice(QString ip, int port){

    if(_socket.isOpen()){
        if(ip == _ip && port == _port){
            return;
        }

        _socket.close();
    }

    _ip = ip;
    _port = port;
    _socket.connectToHost(_ip, _port);

}


void DeviceController::socket_stateChanged(QAbstractSocket::SocketState state){
    if(state == QAbstractSocket::UnconnectedState){
        _socket.close();
    }
    emit stateChanged(state);
}


void DeviceController::disconnect(){
    QString command = QString("name=(\\w+)");
    send(command);
    _socket.close();
}

void DeviceController::socket_readyRead(){
    auto data = _socket.readAll();

    QString message = QString::fromStdString(data.toStdString());
    QString command = QString("name=(\\w+)");
    QRegularExpression regex(command);
    QRegularExpressionMatch match = regex.match(message);
    if (match.hasMatch()) {
        QString nameStr = match.captured(1);
        _device_name = nameStr;
    }

    emit dataReady(data);
}

void DeviceController::send(QString message){
    _socket.write(message.toUtf8());
}
