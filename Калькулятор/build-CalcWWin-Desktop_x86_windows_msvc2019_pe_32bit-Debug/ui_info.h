/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_info
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *dark;
    QLabel *label_3;

    void setupUi(QDialog *info)
    {
        if (info->objectName().isEmpty())
            info->setObjectName(QString::fromUtf8("info"));
        info->resize(1280, 720);
        label = new QLabel(info);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -20, 1280, 720));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/Ss/info.png);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 0);"));
        label_2 = new QLabel(info);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 1280, 720));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 0);"));
        pushButton = new QPushButton(info);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(540, 640, 201, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"	font: 16pt bold \"Candara\";\n"
"	background-color: rgb(37, 30, 59);\n"
"  border: 3px rgb(31, 31, 31);\n"
" border-radius:25px;\n"
"}\n"
"QPushButton:pressed {\n"
"    \n"
"	\n"
"	\n"
"	background-color: rgb(126, 36, 102);\n"
"}\n"
""));
        dark = new QPushButton(info);
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
        label_3 = new QLabel(info);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 1280, 720));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(74, 12, 13, 0);"));
        label_2->raise();
        label_3->raise();
        label->raise();
        dark->raise();
        pushButton->raise();

        retranslateUi(info);

        QMetaObject::connectSlotsByName(info);
    } // setupUi

    void retranslateUi(QDialog *info)
    {
        info->setWindowTitle(QApplication::translate("info", "Dialog", nullptr));
        label->setText(QApplication::translate("info", "TextLabel", nullptr));
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("info", "\320\237\320\276\320\275\321\217\321\202\320\275\320\276", nullptr));
        dark->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class info: public Ui_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
