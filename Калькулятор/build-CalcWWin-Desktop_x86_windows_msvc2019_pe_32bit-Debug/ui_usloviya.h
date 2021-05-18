/********************************************************************************
** Form generated from reading UI file 'usloviya.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USLOVIYA_H
#define UI_USLOVIYA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_usloviya
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *dark;

    void setupUi(QDialog *usloviya)
    {
        if (usloviya->objectName().isEmpty())
            usloviya->setObjectName(QString::fromUtf8("usloviya"));
        usloviya->resize(1280, 720);
        label = new QLabel(usloviya);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1280, 720));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/Ss/usloviyanew2.png);"));
        label_2 = new QLabel(usloviya);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 1280, 720));
        label_3 = new QLabel(usloviya);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-10, -30, 1300, 800));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(31, 32, 93, 155);"));
        pushButton = new QPushButton(usloviya);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(39, 65, 131, 61));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgba(255, 255, 255, 0);\n"
"	background-color: rgba(85, 176, 255,60);\n"
"  border: 3px rgb(31, 31, 31);\n"
" border-radius:30px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"	background-color: rgba(85, 176, 255,110);\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"	\n"
"	\n"
"	\n"
"	\n"
"	background-color: rgba(143, 255, 251, 88);\n"
"}\n"
""));
        pushButton_2 = new QPushButton(usloviya);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1108, 65, 131, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgba(255, 255, 255, 0);\n"
"	background-color: rgba(85, 176, 255,60);\n"
"  border: 3px rgb(31, 31, 31);\n"
" border-radius:30px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"	background-color: rgba(85, 176, 255,110);\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"	\n"
"	\n"
"	\n"
"	\n"
"	background-color: rgba(143, 255, 251, 88);\n"
"}\n"
""));
        dark = new QPushButton(usloviya);
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
        label_2->raise();
        label_3->raise();
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        dark->raise();

        retranslateUi(usloviya);

        QMetaObject::connectSlotsByName(usloviya);
    } // setupUi

    void retranslateUi(QDialog *usloviya)
    {
        usloviya->setWindowTitle(QApplication::translate("usloviya", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        pushButton->setText(QApplication::translate("usloviya", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("usloviya", "PushButton", nullptr));
        dark->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class usloviya: public Ui_usloviya {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USLOVIYA_H
