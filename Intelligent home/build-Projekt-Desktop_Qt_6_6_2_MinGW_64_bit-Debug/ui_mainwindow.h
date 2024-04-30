/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QLabel *label;
    QPushButton *Exit;
    QPushButton *S;
    QFrame *Sypialnia;
    QLabel *label_3;
    QWidget *temperatura;
    QLabel *label_2;
    QDial *bedroom_temperature_changer;
    QLCDNumber *tempNumber;
    QLabel *label_4;
    QWidget *swiatlo;
    QLabel *label_5;
    QLabel *light_bul_bedroom;
    QPushButton *light_bulb_bedroom_ON;
    QPushButton *light_bulb_bedroom_OFF;
    QLabel *label_6;
    QSlider *ligh_bulb_intense_changer;
    QLabel *label_7;
    QSlider *red_bedroom_slider;
    QSlider *green_bedroom_slider;
    QSlider *blue_bedroom_slider;
    QWidget *rolety;
    QLabel *label_8;
    QPushButton *light_bulb_bedroom_ON_2;
    QPushButton *light_bulb_bedroom_ON_3;
    QWidget *wolne;
    QLabel *light_bul_bedroom_2;
    QLabel *light_bul_bedroom_4;
    QPushButton *wifi_active;
    QPushButton *computer_active;
    QWidget *drzwi;
    QLabel *label_9;
    QPushButton *light_bulb_bedroom_ON_4;
    QPushButton *light_bulb_bedroom_ON_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1209, 643);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, -20, 281, 941));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(39,39,39)"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName("stackedWidgetPage1");
        label = new QLabel(stackedWidgetPage1);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 0, 221, 91));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMouseTracking(true);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 39, 39);"));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        Exit = new QPushButton(stackedWidgetPage1);
        Exit->setObjectName("Exit");
        Exit->setEnabled(true);
        Exit->setGeometry(QRect(50, 490, 191, 71));
        Exit->setCursor(QCursor(Qt::PointingHandCursor));
        Exit->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0.549, y1:0.505682, x2:1, y2:1, stop:0 rgba(173, 0, 0, 238), stop:1 rgba(92, 8, 8, 242));\n"
"color: #fefefe;\n"
"border-radius: 10%;"));
        S = new QPushButton(stackedWidgetPage1);
        S->setObjectName("S");
        S->setEnabled(true);
        S->setGeometry(QRect(40, 110, 191, 71));
        S->setCursor(QCursor(Qt::PointingHandCursor));
        S->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(111, 101, 198, 246), stop:1 rgba(93, 83, 122, 248));\n"
"font: 14pt \"Segoe UI\";\n"
"color: #fefefe;\n"
"border-radius: 10%;"));
        stackedWidget->addWidget(stackedWidgetPage1);
        Sypialnia = new QFrame(centralwidget);
        Sypialnia->setObjectName("Sypialnia");
        Sypialnia->setGeometry(QRect(300, 20, 871, 561));
        Sypialnia->setStyleSheet(QString::fromUtf8("background-color: rgb(39,39,39);\n"
"border-radius: 20%;"));
        label_3 = new QLabel(Sypialnia);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(2, -1, 871, 81));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(30,30,30);\n"
"border-bottom-left-radius: 0;\n"
"border-bottom-right-radius: 0;"));
        temperatura = new QWidget(Sypialnia);
        temperatura->setObjectName("temperatura");
        temperatura->setGeometry(QRect(20, 110, 251, 191));
        temperatura->setStyleSheet(QString::fromUtf8("background-color: rgb(30,30,30);\n"
"border-radius: 10%;"));
        label_2 = new QLabel(temperatura);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 251, 61));
        bedroom_temperature_changer = new QDial(temperatura);
        bedroom_temperature_changer->setObjectName("bedroom_temperature_changer");
        bedroom_temperature_changer->setGeometry(QRect(10, 50, 111, 121));
        bedroom_temperature_changer->setCursor(QCursor(Qt::OpenHandCursor));
        bedroom_temperature_changer->setMaximum(40);
        bedroom_temperature_changer->setValue(20);
        tempNumber = new QLCDNumber(temperatura);
        tempNumber->setObjectName("tempNumber");
        tempNumber->setGeometry(QRect(50, 70, 151, 81));
        tempNumber->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: transparent;\n"
"color: white;\n"
"\n"
""));
        tempNumber->setProperty("value", QVariant(20.000000000000000));
        label_4 = new QLabel(temperatura);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(210, 70, 41, 51));
        label_4->setStyleSheet(QString::fromUtf8("color: white;"));
        tempNumber->raise();
        label_2->raise();
        label_4->raise();
        bedroom_temperature_changer->raise();
        swiatlo = new QWidget(Sypialnia);
        swiatlo->setObjectName("swiatlo");
        swiatlo->setGeometry(QRect(290, 110, 541, 191));
        swiatlo->setStyleSheet(QString::fromUtf8("background-color: rgb(30,30,30);\n"
"border-radius: 10%;"));
        label_5 = new QLabel(swiatlo);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 0, 541, 61));
        light_bul_bedroom = new QLabel(swiatlo);
        light_bul_bedroom->setObjectName("light_bul_bedroom");
        light_bul_bedroom->setGeometry(QRect(20, 60, 101, 101));
        light_bul_bedroom->setStyleSheet(QString::fromUtf8("border-radius: 50%;\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.489, stop:0 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));\n"
""));
        light_bul_bedroom->setPixmap(QPixmap(QString::fromUtf8(":/pics/images/light_bulb.png")));
        light_bul_bedroom->setScaledContents(true);
        light_bulb_bedroom_ON = new QPushButton(swiatlo);
        light_bulb_bedroom_ON->setObjectName("light_bulb_bedroom_ON");
        light_bulb_bedroom_ON->setGeometry(QRect(160, 70, 41, 41));
        light_bulb_bedroom_ON->setCursor(QCursor(Qt::PointingHandCursor));
        light_bulb_bedroom_ON->setStyleSheet(QString::fromUtf8("background-color: rgb(39,39,39);\n"
"color: white;\n"
""));
        light_bulb_bedroom_OFF = new QPushButton(swiatlo);
        light_bulb_bedroom_OFF->setObjectName("light_bulb_bedroom_OFF");
        light_bulb_bedroom_OFF->setGeometry(QRect(160, 110, 41, 41));
        light_bulb_bedroom_OFF->setCursor(QCursor(Qt::PointingHandCursor));
        light_bulb_bedroom_OFF->setStyleSheet(QString::fromUtf8("background-color: rgb(180,0,0);\n"
"color: white;"));
        label_6 = new QLabel(swiatlo);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(220, 50, 101, 20));
        ligh_bulb_intense_changer = new QSlider(swiatlo);
        ligh_bulb_intense_changer->setObjectName("ligh_bulb_intense_changer");
        ligh_bulb_intense_changer->setGeometry(QRect(260, 80, 20, 101));
        ligh_bulb_intense_changer->setCursor(QCursor(Qt::SizeVerCursor));
        ligh_bulb_intense_changer->setMaximum(255);
        ligh_bulb_intense_changer->setOrientation(Qt::Vertical);
        label_7 = new QLabel(swiatlo);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(390, 50, 101, 20));
        red_bedroom_slider = new QSlider(swiatlo);
        red_bedroom_slider->setObjectName("red_bedroom_slider");
        red_bedroom_slider->setGeometry(QRect(380, 80, 20, 101));
        red_bedroom_slider->setCursor(QCursor(Qt::SizeVerCursor));
        red_bedroom_slider->setLayoutDirection(Qt::LeftToRight);
        red_bedroom_slider->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border-radius: 5%;\n"
""));
        red_bedroom_slider->setMaximum(255);
        red_bedroom_slider->setValue(255);
        red_bedroom_slider->setOrientation(Qt::Vertical);
        green_bedroom_slider = new QSlider(swiatlo);
        green_bedroom_slider->setObjectName("green_bedroom_slider");
        green_bedroom_slider->setGeometry(QRect(430, 80, 20, 101));
        green_bedroom_slider->setCursor(QCursor(Qt::SizeVerCursor));
        green_bedroom_slider->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"border-radius: 5%;"));
        green_bedroom_slider->setMaximum(255);
        green_bedroom_slider->setValue(255);
        green_bedroom_slider->setOrientation(Qt::Vertical);
        blue_bedroom_slider = new QSlider(swiatlo);
        blue_bedroom_slider->setObjectName("blue_bedroom_slider");
        blue_bedroom_slider->setGeometry(QRect(480, 80, 20, 101));
        blue_bedroom_slider->setCursor(QCursor(Qt::SizeVerCursor));
        blue_bedroom_slider->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);\n"
"border-radius: 5%;\n"
""));
        blue_bedroom_slider->setMaximum(255);
        blue_bedroom_slider->setValue(255);
        blue_bedroom_slider->setOrientation(Qt::Vertical);
        rolety = new QWidget(Sypialnia);
        rolety->setObjectName("rolety");
        rolety->setGeometry(QRect(20, 320, 251, 191));
        rolety->setStyleSheet(QString::fromUtf8("background-color: rgb(30,30,30);\n"
"border-radius: 10%;"));
        label_8 = new QLabel(rolety);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 0, 251, 61));
        light_bulb_bedroom_ON_2 = new QPushButton(rolety);
        light_bulb_bedroom_ON_2->setObjectName("light_bulb_bedroom_ON_2");
        light_bulb_bedroom_ON_2->setGeometry(QRect(70, 60, 101, 41));
        light_bulb_bedroom_ON_2->setCursor(QCursor(Qt::PointingHandCursor));
        light_bulb_bedroom_ON_2->setStyleSheet(QString::fromUtf8("background-color: rgb(39,39,39);\n"
"color: white;"));
        light_bulb_bedroom_ON_3 = new QPushButton(rolety);
        light_bulb_bedroom_ON_3->setObjectName("light_bulb_bedroom_ON_3");
        light_bulb_bedroom_ON_3->setGeometry(QRect(70, 110, 101, 41));
        light_bulb_bedroom_ON_3->setCursor(QCursor(Qt::PointingHandCursor));
        light_bulb_bedroom_ON_3->setStyleSheet(QString::fromUtf8("background-color: rgb(39,39,39);\n"
"color: white;"));
        wolne = new QWidget(Sypialnia);
        wolne->setObjectName("wolne");
        wolne->setGeometry(QRect(290, 320, 271, 191));
        wolne->setStyleSheet(QString::fromUtf8("background-color: rgb(30,30,30);\n"
"border-radius: 10%;"));
        light_bul_bedroom_2 = new QLabel(wolne);
        light_bul_bedroom_2->setObjectName("light_bul_bedroom_2");
        light_bul_bedroom_2->setGeometry(QRect(30, 30, 51, 41));
        light_bul_bedroom_2->setStyleSheet(QString::fromUtf8("padding: 5px;\n"
"background-color: rgb(0, 98, 211);\n"
"border: 1px solid grey;"));
        light_bul_bedroom_2->setPixmap(QPixmap(QString::fromUtf8(":/pics/images/wifi.png")));
        light_bul_bedroom_2->setScaledContents(true);
        light_bul_bedroom_4 = new QLabel(wolne);
        light_bul_bedroom_4->setObjectName("light_bul_bedroom_4");
        light_bul_bedroom_4->setGeometry(QRect(30, 100, 51, 51));
        light_bul_bedroom_4->setStyleSheet(QString::fromUtf8("padding: 5px;\n"
"background-color: rgb(0, 98, 211);\n"
"border: 1px solid grey;"));
        light_bul_bedroom_4->setPixmap(QPixmap(QString::fromUtf8(":/pics/images/computer.png")));
        light_bul_bedroom_4->setScaledContents(true);
        wifi_active = new QPushButton(wolne);
        wifi_active->setObjectName("wifi_active");
        wifi_active->setGeometry(QRect(120, 30, 81, 41));
        wifi_active->setCursor(QCursor(Qt::PointingHandCursor));
        wifi_active->setStyleSheet(QString::fromUtf8("background-color: rgb(0,140,0);\n"
"color: white;\n"
""));
        computer_active = new QPushButton(wolne);
        computer_active->setObjectName("computer_active");
        computer_active->setGeometry(QRect(120, 100, 81, 41));
        computer_active->setCursor(QCursor(Qt::PointingHandCursor));
        computer_active->setStyleSheet(QString::fromUtf8("background-color: rgb(39,39,39);\n"
"color: white;\n"
""));
        drzwi = new QWidget(Sypialnia);
        drzwi->setObjectName("drzwi");
        drzwi->setGeometry(QRect(580, 320, 251, 191));
        drzwi->setStyleSheet(QString::fromUtf8("background-color: rgb(30,30,30);\n"
"border-radius: 10%;"));
        label_9 = new QLabel(drzwi);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 0, 251, 61));
        light_bulb_bedroom_ON_4 = new QPushButton(drzwi);
        light_bulb_bedroom_ON_4->setObjectName("light_bulb_bedroom_ON_4");
        light_bulb_bedroom_ON_4->setGeometry(QRect(70, 60, 101, 41));
        light_bulb_bedroom_ON_4->setCursor(QCursor(Qt::PointingHandCursor));
        light_bulb_bedroom_ON_4->setStyleSheet(QString::fromUtf8("background-color: rgb(39,39,39);\n"
"color: white;"));
        light_bulb_bedroom_ON_5 = new QPushButton(drzwi);
        light_bulb_bedroom_ON_5->setObjectName("light_bulb_bedroom_ON_5");
        light_bulb_bedroom_ON_5->setGeometry(QRect(70, 110, 101, 41));
        light_bulb_bedroom_ON_5->setCursor(QCursor(Qt::PointingHandCursor));
        light_bulb_bedroom_ON_5->setStyleSheet(QString::fromUtf8("background-color: rgb(39,39,39);\n"
"color: white;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1209, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(bedroom_temperature_changer, SIGNAL(valueChanged(int)), tempNumber, SLOT(display(int)));
        QObject::connect(bedroom_temperature_changer, SIGNAL(valueChanged(int)), tempNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">Intelligent home</span></p></body></html>", nullptr));
        Exit->setText(QCoreApplication::translate("MainWindow", "Wyjd\305\272", nullptr));
        S->setText(QCoreApplication::translate("MainWindow", "Sypialnia", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Sypialnia</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">Temperatura</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\342\204\203", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">\305\232wiat\305\202o</span></p></body></html>", nullptr));
        light_bul_bedroom->setText(QString());
        light_bulb_bedroom_ON->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        light_bulb_bedroom_OFF->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Intensywno\305\233\304\207</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Barwa</span></p><p align=\"center\"><span style=\" color:#ffffff;\"><br/></span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">Rolety</span></p></body></html>", nullptr));
        light_bulb_bedroom_ON_2->setText(QCoreApplication::translate("MainWindow", "Zasu\305\204", nullptr));
        light_bulb_bedroom_ON_3->setText(QCoreApplication::translate("MainWindow", "Ods\305\202o\305\204", nullptr));
        light_bul_bedroom_2->setText(QString());
        light_bul_bedroom_4->setText(QString());
        wifi_active->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        computer_active->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">Drzwi</span></p></body></html>", nullptr));
        light_bulb_bedroom_ON_4->setText(QCoreApplication::translate("MainWindow", "Otw\303\263rz", nullptr));
        light_bulb_bedroom_ON_5->setText(QCoreApplication::translate("MainWindow", "Zamknij", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
