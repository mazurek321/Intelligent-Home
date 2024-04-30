#include "DeviceWidget.h"

DeviceWidget::DeviceWidget(const QString &deviceName, QWidget *parent)
    : QWidget{parent}, m_deviceName(deviceName)
{
    setObjectName(QString("%1_container").arg(deviceName));
    setStyleSheet("color: white;");
    setMinimumHeight(300);
    setMaximumHeight(300);
    setMinimumWidth(300);
    setMaximumWidth(300);

    QString message = QString("%1_label").arg(deviceName);
    m_label = new QLabel(deviceName);
    m_label->setObjectName(message);
    m_label->setMaximumHeight(50);
    m_label->setStyleSheet("font-weight: bold; color: white; font-size: 14pt;");
    m_label->setMinimumWidth(285);
    m_label->setAlignment(Qt::AlignCenter);

    m_layout = new QGridLayout(this);
    m_layout->setSpacing(20);
    m_layout->addWidget(m_label, 0,0);
}

DeviceWidget::~DeviceWidget(){
    delete m_label;
    delete m_layout;
}

void DeviceWidget::addWidget(QWidget *widget, int row, int column){
    m_layout->addWidget(widget, row, column);
}
