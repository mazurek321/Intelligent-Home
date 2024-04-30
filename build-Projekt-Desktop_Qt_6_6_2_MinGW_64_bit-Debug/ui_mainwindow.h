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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *mainWindow;
    QStackedWidget *MainMenu;
    QWidget *stackedWidgetPage1;
    QLabel *label;
    QPushButton *Exit;
    QScrollArea *Pomieszczenia;
    QWidget *Pomieszczenia_scroll;
    QGridLayout *gridLayout;
    QFrame *CONTAINER;
    QLabel *TITLE;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *add_new_device;
    QTextEdit *new_device_name;
    QLabel *label_2;
    QPushButton *submit;
    QPushButton *cancel;
    QLabel *invalid_name;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1209, 643);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);"));
        mainWindow = new QWidget(MainWindow);
        mainWindow->setObjectName("mainWindow");
        MainMenu = new QStackedWidget(mainWindow);
        MainMenu->setObjectName("MainMenu");
        MainMenu->setGeometry(QRect(0, -20, 281, 941));
        MainMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(39,39,39)"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName("stackedWidgetPage1");
        label = new QLabel(stackedWidgetPage1);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 281, 91));
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
        Pomieszczenia = new QScrollArea(stackedWidgetPage1);
        Pomieszczenia->setObjectName("Pomieszczenia");
        Pomieszczenia->setGeometry(QRect(0, 110, 281, 371));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(200);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Pomieszczenia->sizePolicy().hasHeightForWidth());
        Pomieszczenia->setSizePolicy(sizePolicy1);
        Pomieszczenia->setStyleSheet(QString::fromUtf8("border: none;\n"
"outline: none;"));
        Pomieszczenia->setLineWidth(1);
        Pomieszczenia->setMidLineWidth(0);
        Pomieszczenia->setWidgetResizable(true);
        Pomieszczenia->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        Pomieszczenia_scroll = new QWidget();
        Pomieszczenia_scroll->setObjectName("Pomieszczenia_scroll");
        Pomieszczenia_scroll->setGeometry(QRect(0, 0, 281, 371));
        gridLayout = new QGridLayout(Pomieszczenia_scroll);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(50);
        gridLayout->setVerticalSpacing(20);
        Pomieszczenia->setWidget(Pomieszczenia_scroll);
        MainMenu->addWidget(stackedWidgetPage1);
        CONTAINER = new QFrame(mainWindow);
        CONTAINER->setObjectName("CONTAINER");
        CONTAINER->setGeometry(QRect(300, 20, 871, 561));
        CONTAINER->setStyleSheet(QString::fromUtf8("background-color: rgb(39,39,39);\n"
"border-radius: 20%;"));
        TITLE = new QLabel(CONTAINER);
        TITLE->setObjectName("TITLE");
        TITLE->setGeometry(QRect(2, -1, 871, 81));
        TITLE->setStyleSheet(QString::fromUtf8("background-color: rgb(30,30,30);\n"
"border-bottom-left-radius: 0;\n"
"border-bottom-right-radius: 0;"));
        scrollArea = new QScrollArea(CONTAINER);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 80, 871, 481));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 871, 481));
        scrollArea->setWidget(scrollAreaWidgetContents);
        add_new_device = new QWidget(mainWindow);
        add_new_device->setObjectName("add_new_device");
        add_new_device->setGeometry(QRect(0, 0, 1211, 641));
        add_new_device->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0.9);"));
        new_device_name = new QTextEdit(add_new_device);
        new_device_name->setObjectName("new_device_name");
        new_device_name->setGeometry(QRect(320, 170, 601, 71));
        new_device_name->setStyleSheet(QString::fromUtf8("background-color: rgb(30,30,30);\n"
"color: white;\n"
"font-size: 14pt;\n"
""));
        label_2 = new QLabel(add_new_device);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 90, 601, 71));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0,140,0);\n"
"color: white;"));
        submit = new QPushButton(add_new_device);
        submit->setObjectName("submit");
        submit->setGeometry(QRect(460, 290, 311, 71));
        submit->setCursor(QCursor(Qt::PointingHandCursor));
        submit->setStyleSheet(QString::fromUtf8("background-color: rgb(0,85,0);\n"
"color: white;\n"
"font-size: 16pt;"));
        cancel = new QPushButton(add_new_device);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(1150, 10, 51, 41));
        cancel->setCursor(QCursor(Qt::PointingHandCursor));
        cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(140,0,0);\n"
"color: white;\n"
"font-size: 14pt;"));
        invalid_name = new QLabel(add_new_device);
        invalid_name->setObjectName("invalid_name");
        invalid_name->setGeometry(QRect(320, 240, 601, 41));
        invalid_name->setStyleSheet(QString::fromUtf8("background-color: rgb(140,0,0);\n"
"color: white;"));
        MainWindow->setCentralWidget(mainWindow);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1209, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

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
        TITLE->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">Urz\304\205dzenia</span></p></body></html>", nullptr));
        new_device_name->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", nullptr));
        new_device_name->setPlaceholderText(QCoreApplication::translate("MainWindow", "Wprowad\305\272 nazw\304\231", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">New device detected</span></p></body></html>", nullptr));
        submit->setText(QCoreApplication::translate("MainWindow", "Potwierd\305\272", nullptr));
        cancel->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        invalid_name->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">Nazwa jest zaj\304\231ta</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
