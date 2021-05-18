#include "usloviya.h"
#include "ui_usloviya.h"
#include<QMovie>
#include "menu.h"
#include "calc.h"


Menu *m3;
Calc *cl;
usloviya::usloviya(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::usloviya)
{
    ui->setupUi(this);
 setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    QMovie *movie4 = new QMovie(":/Ss/Usloviyaback2.gif");
    ui->label_2->setMovie(movie4);
    movie4->setSpeed(100);
    movie4->start();

    if(light)
    {
        ui->label->setStyleSheet("background-image: url(:/Ss/usloviyanew2.png);\nbackground-color: rgba(255, 255, 255, 0);\ncolor: rgba(255, 255, 255, 0);");
        ui->label_3->setStyleSheet("background-color: rgba(31, 32, 93, 0);");
    ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);\nbackground-image: url(:/Ss/switchnight.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");
    }
    else
    {
        ui->label->setStyleSheet("background-image: url(:/Ss/usloviyanewdark.png);\nbackground-color: rgba(255, 255, 255, 0);\ncolor: rgba(255, 255, 255, 0);");
        ui->label_3->setStyleSheet("background-color: rgba(0, 0, 0,210);");
        ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);\nbackground-image: url(:/Ss/switchsun.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");
    }
}

usloviya::~usloviya()
{
    delete ui;
}

void usloviya::on_pushButton_clicked()
{

    hide();
    cl=new Calc(this);
    cl->show();
}


void usloviya::on_pushButton_2_clicked()
{
    hide();
    m3=new Menu(this);
    m3->show();
}

void usloviya::on_dark_clicked()
{
    if(light)
    {
    light=0;
    ui->label->setStyleSheet("background-image: url(:/Ss/usloviyanewdark.png);\nbackground-color: rgba(255, 255, 255, 0);\ncolor: rgba(255, 255, 255, 0);");
    ui->label_3->setStyleSheet("background-color: rgba(0, 0, 0,210);");
    ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);\nbackground-image: url(:/Ss/switchsun.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");
    }
    else
    {
        light=1;
        ui->label->setStyleSheet("background-image: url(:/Ss/usloviyanew2.png);\nbackground-color: rgba(255, 255, 255, 0);\ncolor: rgba(255, 255, 255, 0);");
            ui->label_3->setStyleSheet("background-color: rgba(31, 32, 93, 0);");

    ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);\nbackground-image: url(:/Ss/switchnight.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");
    }
}
