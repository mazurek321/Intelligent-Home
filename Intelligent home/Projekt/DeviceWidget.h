#ifndef DEVICEWIDGET_H
#define DEVICEWIDGET_H

#include <QWidget>
#include <QtWidgets>

class DeviceWidget : public QWidget
{
    Q_OBJECT

public:
    DeviceWidget(const QString &deviceName="", QWidget *parent = nullptr);
    ~DeviceWidget();
    QString m_deviceName;
    QLabel *m_label;
    QGridLayout *m_layout;
    void addWidget(QWidget *widget, int row, int column);
};

#endif // DEVICEWIDGET_H
