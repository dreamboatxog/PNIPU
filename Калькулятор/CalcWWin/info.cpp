#include "info.h"
#include "ui_info.h"
#include <QMovie>
#include "menu.h"

Menu *mn;
info::info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::info)
{
    ui->setupUi(this);
    QMovie *moviei = new QMovie(":/Ss/Infoback2.gif");
    ui->label_2->setMovie(moviei);
    moviei->setSpeed(150);
    moviei->start();
    if(light)
    {
        ui->pushButton->setStyleSheet("QPushButton {\n	\n	color: rgb(0, 0, 0);\n	\n	font: 16pt bold ;\n	background-color: rgb(255, 124, 170);\n  border: 3px rgb(31, 31, 31);\n border-radius:25px;\n}QPushButton:hover:!pressed{background-color: rgb(255, 255, 33);}\nQPushButton:pressed {\n    \n	\n	\n	background-color: rgb(255, 88, 160);\n}");
        ui->label_3->setStyleSheet("background-color: rgba(74, 12, 13, 0);");
        ui->label->setStyleSheet("background-image: url(:/Ss/infofixed.png);\nbackground-color: rgba(255, 255, 255, 0);\ncolor: rgba(255, 255, 255, 0);");
        ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);\nbackground-image: url(:/Ss/switchnight.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");
    }
    else
    {
        ui->pushButton->setStyleSheet("QPushButton {\n	\n	color: rgb(255, 255, 255);\n	\n	font: 16pt bold ;\n	background-color: rgb(37, 30, 59);\n  border: 3px rgb(31, 31, 31);\n border-radius:25px;\n}QPushButton:hover:!pressed{background-color: rgb(126, 36, 80);}\nQPushButton:pressed {\n    \n	\n	\n	background-color: rgb(126, 36, 102);\n}");
        ui->label_3->setStyleSheet("background-color: rgba(32, 12, 13, 210);");
        ui->label->setStyleSheet("background-image: url(:/Ss/infodarkfixed.png);\nbackground-color: rgba(255, 255, 255, 0);\ncolor: rgba(255, 255, 255, 0);");
        ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);\nbackground-image: url(:/Ss/switchsun.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");
    }
}

info::~info()
{
    delete ui;
}

void info::on_pushButton_clicked()
{
    hide();
    mn=new Menu(this);
    mn->show();
}

void info::on_dark_clicked()
{
    if(light)
    {
        ui->pushButton->setStyleSheet("QPushButton {\n	\n	color: rgb(255, 255, 255);\n	\n	font: 16pt bold ;\n	background-color: rgb(37, 30, 59);\n  border: 3px rgb(31, 31, 31);\n border-radius:25px;\n}QPushButton:hover:!pressed{background-color: rgb(126, 36, 80);}\nQPushButton:pressed {\n    \n	\n	\n	background-color: rgb(126, 36, 102);\n}");
        ui->label_3->setStyleSheet("background-color: rgba(32, 12, 13, 210);");
        ui->label->setStyleSheet("background-image: url(:/Ss/infodarkfixed.png);\nbackground-color: rgba(255, 255, 255, 0);\ncolor: rgba(255, 255, 255, 0);");
        ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);\nbackground-image: url(:/Ss/switchsun.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");

        light=0;
    }
    else
    {
        ui->pushButton->setStyleSheet("QPushButton {\n	\n	color: rgb(0, 0, 0);\n	\n	font: 16pt bold ;\n	background-color: rgb(255, 124, 170);\n  border: 3px rgb(31, 31, 31);\n border-radius:25px;\n}QPushButton:hover:!pressed{background-color: rgb(255, 255, 33);}\nQPushButton:pressed {\n    \n	\n	\n	background-color: rgb(255, 88, 160);\n}");
        ui->label_3->setStyleSheet("background-color: rgba(74, 12, 13, 0);");
        ui->label->setStyleSheet("background-image: url(:/Ss/infofixed.png);\nbackground-color: rgba(255, 255, 255, 0);\ncolor: rgba(255, 255, 255, 0);");
        ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);\nbackground-image: url(:/Ss/switchnight.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");

        light=1;
    }
}
