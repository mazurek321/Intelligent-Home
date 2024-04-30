#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QMetaEnum>
#include <QRegularExpression>
#include "DeviceController.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString device_type = "Temperatura";
    QString device_name = "";
    int temperature = 20;

signals:
    void device_connected();
    void device_disconnected();
    void device_stateChanged(QAbstractSocket::SocketState);
    void device_errorOccurred(QAbstractSocket::SocketError);
    void device_dataReady(QByteArray);

private:
    Ui::MainWindow *ui;
    DeviceController _controller;
    void setDeviceController();
    QString command;
};
#endif // MAINWINDOW_H
