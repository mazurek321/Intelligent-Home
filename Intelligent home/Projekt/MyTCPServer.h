
#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QRegularExpression>

class MyTCPServer : public QObject
{
    Q_OBJECT
public:
    MyTCPServer(QObject *parent = nullptr);
    ~MyTCPServer();
    void sendToAll(QString message);

signals:
    void newDeviceConnected();
    void deviceDisconnect(QString deviceName);
    void dataReceived(QString data);
    void showAddNewDeviceForm();
public slots:
    void sendNameToDevice(QString deviceName);

private slots:
    void on_device_connecting();
    void deviceDisconnected();
    void deviceDataReady();

private:
    QTcpServer *_server;
    QList<QTcpSocket *> _socketsList;
    bool _isStarted;
    bool isStarted() const;
    QString device_name;
};

#endif // MYTCPSERVER_H
