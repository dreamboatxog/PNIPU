/********************************************************************************
** Form generated from reading UI file 'calc.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALC_H
#define UI_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Calc
{
public:
    QPushButton *pushButton;
    QLineEdit *value;
    QLabel *label;
    QLineEdit *procent;
    QLineEdit *years;
    QLineEdit *month;
    QPushButton *result;
    QPushButton *clear;
    QPushButton *pushButton_dot;
    QPushButton *valuta;
    QPushButton *pushButton_plusminus;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QComboBox *pick;
    QPushButton *pushButton_info;
    QLabel *label_3;
    QPushButton *dark;
    QLineEdit *days;
    QLabel *rub;

    void setupUi(QDialog *Calc)
    {
        if (Calc->objectName().isEmpty())
            Calc->setObjectName(QString::fromUtf8("Calc"));
        Calc->resize(1280, 720);
        Calc->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        pushButton = new QPushButton(Calc);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(15, 633, 61, 61));
        pushButton->setFocusPolicy(Qt::WheelFocus);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgba(255, 255, 255, 0);\n"
"	background-color: rgba(81, 255, 62,0);\n"
"  border: 3px rgb(31, 31, 31);\n"
" border-radius:30px;\n"
"}\n"
"QPushButton:pressed {\n"
"    \n"
"	\n"
"	background-color: rgba(255, 255, 255, 111);\n"
"}"));
        value = new QLineEdit(Calc);
        value->setObjectName(QString::fromUtf8("value"));
        value->setGeometry(QRect(307, 103, 311, 31));
        value->setStyleSheet(QString::fromUtf8("font: 12 9pt \"Okta Neue\";"));
        label = new QLabel(Calc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -10, 1280, 720));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/Ss/newcalc3.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        procent = new QLineEdit(Calc);
        procent->setObjectName(QString::fromUtf8("procent"));
        procent->setGeometry(QRect(664, 103, 311, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Okta Neue"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(1);
        procent->setFont(font);
        procent->setStyleSheet(QString::fromUtf8("font: 12 9pt \"Okta Neue\";"));
        years = new QLineEdit(Calc);
        years->setObjectName(QString::fromUtf8("years"));
        years->setGeometry(QRect(303, 320, 141, 31));
        years->setStyleSheet(QString::fromUtf8("font: 12 9pt \"Okta Neue\";"));
        month = new QLineEdit(Calc);
        month->setObjectName(QString::fromUtf8("month"));
        month->setGeometry(QRect(473, 320, 141, 31));
        month->setStyleSheet(QString::fromUtf8("font: 12 9pt \"Okta Neue\";"));
        result = new QPushButton(Calc);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(827, 320, 131, 36));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        result->setFont(font1);
        result->setCursor(QCursor(Qt::PointingHandCursor));
        result->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgba(25, 255, 255, 0);\n"
"	font: 75 20pt \"Century Gothic\";\n"
"	color: rgba(255, 255, 255, 0);\n"
"   qproperty-alignment: 'AlignVCenter | AlignHCenter';\n"
"   border: 2px rgb(0, 0, 0);\n"
"border-radius:16px;\n"
"   \n"
"\n"
"}\n"
"\n"
"QPushButton:hover:!pressed\n"
"{\n"
"	\n"
"	background-color: rgba(45, 123, 196,55);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"    \n"
"	background-color: rgba(21, 255, 95, 20);\n"
"}\n"
"\n"
""));
        clear = new QPushButton(Calc);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(145, 61, 61, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Impact"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        clear->setFont(font2);
        clear->setCursor(QCursor(Qt::PointingHandCursor));
        clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 10pt \"Impact\";\n"
"color:rgba(255, 170, 255,0);\n"
"	background-color: rgba(51, 51, 51, 0);\n"
"  border: 3px rgb(31, 31, 31);\n"
" border-radius:30px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"	background-color: rgba(255, 133, 11, 55);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"    \n"
"	background-color: rgba(21, 255, 95, 20);\n"
"}\n"
"\n"
""));
        pushButton_dot = new QPushButton(Calc);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(145, 141, 61, 61));
        pushButton_dot->setMaximumSize(QSize(836, 16777215));
        pushButton_dot->setFont(font2);
        pushButton_dot->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 10pt \"Impact\";\n"
"color:rgba(255, 170, 255,0);\n"
"	background-color: rgba(51, 51, 51, 0);\n"
"  border: 3px rgb(31, 31, 31);\n"
" border-radius:30px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"	background-color: rgba(255, 133, 11, 55);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"    \n"
"	background-color: rgba(21, 255, 95, 20);\n"
"}\n"
"\n"
""));
        valuta = new QPushButton(Calc);
        valuta->setObjectName(QString::fromUtf8("valuta"));
        valuta->setGeometry(QRect(1077, 62, 60, 60));
        valuta->setMaximumSize(QSize(836, 16777215));
        valuta->setFont(font2);
        valuta->setCursor(QCursor(Qt::PointingHandCursor));
        valuta->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 10pt \"Impact\";\n"
"color:rgba(255, 170, 255,0);\n"
"	background-color: rgba(51, 51, 51, 0);\n"
"  border: 3px rgb(31, 31, 31);\n"
" border-radius:30px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"	background-color: rgba(255, 133, 11, 55);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"    \n"
"	background-color: rgba(21, 255, 95, 20);\n"
"}\n"
"\n"
""));
        pushButton_plusminus = new QPushButton(Calc);
        pushButton_plusminus->setObjectName(QString::fromUtf8("pushButton_plusminus"));
        pushButton_plusminus->setGeometry(QRect(1077, 140, 61, 61));
        pushButton_plusminus->setFont(font2);
        pushButton_plusminus->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_plusminus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 10pt \"Impact\";\n"
"color:rgba(255, 170, 255,0);\n"
"	background-color: rgba(51, 51, 51, 0);\n"
"  border: 3px rgb(31, 31, 31);\n"
" border-radius:30px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"	background-color: rgba(255, 133, 11, 55);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"    \n"
"	background-color: rgba(21, 255, 95, 20);\n"
"}\n"
"\n"
""));
        textBrowser = new QTextBrowser(Calc);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(400, 470, 481, 111));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"border:0px;\n"
"font: 75 22pt  \"Okta Neue\";"));
        label_2 = new QLabel(Calc);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 1280, 720));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 80);"));
        pick = new QComboBox(Calc);
        pick->addItem(QString());
        pick->addItem(QString());
        pick->addItem(QString());
        pick->addItem(QString());
        pick->addItem(QString());
        pick->setObjectName(QString::fromUtf8("pick"));
        pick->setGeometry(QRect(450, 173, 381, 31));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pick->sizePolicy().hasHeightForWidth());
        pick->setSizePolicy(sizePolicy);
        pick->setMinimumSize(QSize(381, 31));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(219, 219, 219, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        pick->setPalette(palette);
        pick->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	background-color: rgb(219, 219, 219);\n"
"border-radius:10px;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QComboBox::Activated{\n"
"background-color:rgb(121,71,71);\n"
"}"));
        pick->setMaxVisibleItems(39);
        pick->setInsertPolicy(QComboBox::NoInsert);
        pick->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        pushButton_info = new QPushButton(Calc);
        pushButton_info->setObjectName(QString::fromUtf8("pushButton_info"));
        pushButton_info->setGeometry(QRect(965, 173, 31, 31));
        pushButton_info->setFocusPolicy(Qt::WheelFocus);
        pushButton_info->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgba(255, 255, 255, 0);\n"
"	background-color: rgba(81, 255, 62,0);\n"
"  border: 3px rgb(31, 31, 31);\n"
" border-radius:15px;\n"
"}\n"
"QPushButton:pressed {\n"
"    \n"
"	\n"
"	background-color: rgba(255, 255, 255, 111);\n"
"}"));
        label_3 = new QLabel(Calc);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 1280, 720));
        dark = new QPushButton(Calc);
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
        days = new QLineEdit(Calc);
        days->setObjectName(QString::fromUtf8("days"));
        days->setGeometry(QRect(643, 320, 141, 31));
        days->setStyleSheet(QString::fromUtf8("font: 12 9pt \"Okta Neue\";"));
        rub = new QLabel(Calc);
        rub->setObjectName(QString::fromUtf8("rub"));
        rub->setGeometry(QRect(468, 77, 55, 16));
        rub->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        label_2->raise();
        label_3->raise();
        label->raise();
        pushButton_plusminus->raise();
        pick->raise();
        procent->raise();
        pushButton_dot->raise();
        value->raise();
        month->raise();
        textBrowser->raise();
        result->raise();
        years->raise();
        pushButton_info->raise();
        valuta->raise();
        clear->raise();
        pushButton->raise();
        dark->raise();
        days->raise();
        rub->raise();

        retranslateUi(Calc);

        QMetaObject::connectSlotsByName(Calc);
    } // setupUi

    void retranslateUi(QDialog *Calc)
    {
        Calc->setWindowTitle(QApplication::translate("Calc", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Calc", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        value->setText(QString());
        label->setText(QString());
        result->setText(QApplication::translate("Calc", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        clear->setText(QApplication::translate("Calc", "C", nullptr));
        pushButton_dot->setText(QApplication::translate("Calc", ".", nullptr));
        valuta->setText(QApplication::translate("Calc", "$", nullptr));
        pushButton_plusminus->setText(QApplication::translate("Calc", "+/-", nullptr));
        label_2->setText(QString());
        pick->setItemText(0, QApplication::translate("Calc", "-", nullptr));
        pick->setItemText(1, QApplication::translate("Calc", "1. \320\222\320\272\320\273\320\260\320\264\342\204\2261", nullptr));
        pick->setItemText(2, QApplication::translate("Calc", "2. \320\222\320\272\320\273\320\260\320\264\342\204\2262", nullptr));
        pick->setItemText(3, QApplication::translate("Calc", "3. \320\222\320\272\320\273\320\260\320\264\342\204\2263", nullptr));
        pick->setItemText(4, QApplication::translate("Calc", "4. \320\222\320\272\320\273\320\260\320\264\342\204\2264", nullptr));

        pushButton_info->setText(QApplication::translate("Calc", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_3->setText(QString());
        dark->setText(QString());
        rub->setText(QApplication::translate("Calc", "\342\202\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calc: public Ui_Calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_H
