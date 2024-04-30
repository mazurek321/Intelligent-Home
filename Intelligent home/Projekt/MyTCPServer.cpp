#include "MyTCPServer.h"

MyTCPServer::MyTCPServer(QObject *parent)
    :QObject{parent}{

    _server = new QTcpServer(this);
    connect(_server, &QTcpServer::newConnection, this, &MyTCPServer::on_device_connecting);
    _isStarted = _server->listen(QHostAddress("127.0.0.1"), 12345);
    if(!_isStarted){
        qDebug() << "Server could not start";
    }else{
        qDebug() << "Server started";
    }
}

MyTCPServer::~MyTCPServer(){
    delete _server;
    foreach(auto socket, _socketsList){
        delete socket;
    }
}

void MyTCPServer::on_device_connecting(){
    qDebug()<<"New device detected";
    auto socket = _server->nextPendingConnection();
    _socketsList.append(socket);
    socket->write("Connected");
    connect(socket, &QTcpSocket::readyRead, this, &MyTCPServer::deviceDataReady);
    connect(socket, &QTcpSocket::disconnected, this, &MyTCPServer::deviceDisconnected);
}

void MyTCPServer::deviceDisconnected()
{
    emit deviceDisconnect(device_name);
}

void MyTCPServer::deviceDataReady()
{
    auto socket = qobject_cast<QTcpSocket *>(sender());
    QString data = QString(socket->readAll());
    emit dataReceived(data);
}

bool MyTCPServer::isStarted() const{
    return _isStarted;
}

void MyTCPServer::sendToAll(QString message)
{
    foreach (auto socket, _socketsList) {
        socket->write(message.toUtf8());
    }
}

void MyTCPServer::sendNameToDevice(QString deviceName){
    QString message = QString("name=%1").arg(deviceName);
    device_name = deviceName;
    _socketsList.last()->write(message.toUtf8());
    _socketsList.last()->setObjectName(deviceName);
}
