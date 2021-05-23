#include "menu.h"
#include "ui_menu.h"
#include <QMovie>
#include "calc.h"
#include <QPropertyAnimation>
usloviya *u;
bool light=1;
double procent=0;double timey=0;double timem=0;double times;double timed=0,value=0;
bool checkout=0;
Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    QMovie *movie2 = new QMovie(":/Ss/menunew.gif");
    ui->label2->setMovie(movie2);
    movie2->start();
    if(light)
    {
        ui->label->setStyleSheet("background-image: url(:/Ss/buttons.png);\nbackground-color: rgba(255, 255, 255, 0);\ncolor: rgba(255, 255, 255, 0);");
    ui->label_2->setStyleSheet("background-color: rgba(0, 0, 0, 50);");
    ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);\nbackground-image: url(:/Ss/switchnight.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");
}
    else
    {
            ui->label->setStyleSheet("background-image: url(:/Ss/buttonsdark.png);\nbackground-color: rgba(255, 255, 255, 0);\ncolor: rgba(255, 255, 255, 0);");
            ui->label_2->setStyleSheet("background-color: rgba(0, 0, 0, 192);");
            ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);\nbackground-image: url(:/Ss/switchsun.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");
    }
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    hide();
    c=new Calc(this);
    c->show();
}


void Menu::on_pushButton_3_clicked()
{
    hide();
    i=new info(this);
    i->show();
}



void Menu::on_dark_clicked()
{
    //QPropertyAnimation *a=new QPropertyAnimation(ui->pushButton_4,"geometry");
    //a->setDuration(500);
    //a->setStartValue(QRect(90,223,431,191));
    //a->setEndValue(QRect(111,222,431,191));
    //a->start();
    //ui->label_2->setStyleSheet("background-color:rgba(0,0,0,0");
    if(light)
    {
    light=0;
    ui->label->setStyleSheet("background-image: url(:/Ss/buttonsdark.png);\nbackground-color: rgba(255, 255, 255, 0);\ncolor: rgba(255, 255, 255, 0);");
    ui->label_2->setStyleSheet("background-color: rgba(0, 0, 0, 192);");
     ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);\nbackground-image: url(:/Ss/switchsun.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");
    }
    else
    {
        light=1;
        ui->label->setStyleSheet("background-image: url(:/Ss/buttons.png);\nbackground-color: rgba(255, 255, 255, 0);\ncolor: rgba(255, 255, 255, 0);");
    ui->label_2->setStyleSheet("background-color: rgba(0, 0, 0, 50);");

    ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);\nbackground-image: url(:/Ss/switchnight.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");
    }
}
