/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(1280, 720);
        Menu->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 26, 26);"));
        pushButton = new QPushButton(Menu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 130, 80, 25));
        pushButton_2 = new QPushButton(Menu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 130, 80, 25));
        pushButton_3 = new QPushButton(Menu);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(440, 130, 80, 25));
        pushButton_4 = new QPushButton(Menu);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 130, 80, 25));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Menu", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        pushButton_2->setText(QApplication::translate("Menu", "\320\243\321\201\320\273\320\276\320\262\320\270\321\217", nullptr));
        pushButton_3->setText(QApplication::translate("Menu", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        pushButton_4->setText(QApplication::translate("Menu", "\320\232\320\276\320\275\321\202\320\260\320\272\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
