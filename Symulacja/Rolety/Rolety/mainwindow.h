#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QMetaEnum>
#include <QRegularExpression>
#include <QPropertyAnimation>
#include "DeviceController.h"
#include <iostream>

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
    QString device_type = "Rolety";
    QString device_name = "";


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
    void simulate(int toggle);
    QPropertyAnimation *animation;
};
#endif // MAINWINDOW_H
