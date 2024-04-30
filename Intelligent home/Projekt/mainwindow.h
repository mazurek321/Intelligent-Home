#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include "MyTCPServer.h"
#include <QtWidgets>
#include <QFile>
#include <QTextStream>
#include <QPixmap>
#include <cstring>
#include "TemperatureDeviceWidget.h"
#include "LightDeviceWidget.h"
#include "RollerBlindDeviceWidget.h"

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
    QString device_type;
    QString device_name;

signals:
    void deviceSubmitted(QString deviceName);

private slots:
    void on_Exit_clicked();
    void newDeviceConnected();
    void deviceDisconnected(QString deviceName);
    void deviceDataReceived(QString data);
    void on_cancel_clicked();
    void on_submit_clicked();

private:
    Ui::MainWindow *ui;
    MyTCPServer *_server;
    QGridLayout *gridLayout;
    QList <QString> usedNames;
    QList <QWidget *> widgets;
};
#endif // MAINWINDOW_H
