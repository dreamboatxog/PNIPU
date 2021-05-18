/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 720);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 26, 26);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 255, 8, 0);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 1261, 851));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1280, 720));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        pushButton->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 20));
        menubar->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 255, 8, 0);"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 255, 8, 0);"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "LET'S GO!", nullptr));
        label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
