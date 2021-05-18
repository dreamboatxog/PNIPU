/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *pushButton;
    QLabel *label2;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *dark;
    QLabel *label_2;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(1280, 720);
        Menu->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 26, 26);"));
        pushButton = new QPushButton(Menu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(89, 223, 431, 191));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: rgba(255, 255, 255, 255);	\n"
"background-color: rgba(24, 255, 240, 10);\n"
"font: 75 12pt \"Source Code Pro\";\n"
"border-radius:90px;\n"
"}\n"
"\n"
"QPushButton:hover:!pressed\n"
"{\n"
"	background-color: rgba(24, 255, 240, 30);\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"	background-color: rgba(24, 255, 240, 77);\n"
"}\n"
""));
        label2 = new QLabel(Menu);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(0, 0, 1280, 720));
        label = new QLabel(Menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -10, 1280, 720));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/Ss/buttons.png);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 0);"));
        pushButton_3 = new QPushButton(Menu);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(759, 224, 431, 191));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: rgba(255, 255, 255, 255);	\n"
"background-color: rgba(24, 255, 240, 10);\n"
"font: 75 12pt \"Source Code Pro\";\n"
"border-radius:90px;\n"
"}\n"
"\n"
"QPushButton:hover:!pressed\n"
"{\n"
"	background-color: rgba(24, 255, 240, 30);\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"	background-color: rgba(24, 255, 240, 77);\n"
"}\n"
""));
        dark = new QPushButton(Menu);
        dark->setObjectName(QString::fromUtf8("dark"));
        dark->setGeometry(QRect(1120, 570, 111, 111));
        dark->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{background-color: rgba(255, 255, 255, 111);\n"
"background-image: url(:/Ss/switchnight.png);\n"
"border-radius: 55px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgba(128, 214, 250,22);\n"
"}"));
        label_2 = new QLabel(Menu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-10, -70, 1300, 800));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 150);"));
        label2->raise();
        label_2->raise();
        label->raise();
        pushButton_3->raise();
        dark->raise();
        pushButton->raise();

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Dialog", nullptr));
        pushButton->setText(QString());
        label2->setText(QString());
        label->setText(QApplication::translate("Menu", "TextLabel", nullptr));
        pushButton_3->setText(QString());
        dark->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
