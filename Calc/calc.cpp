#include "calc.h"
#include "ui_calc.h"
#include "menu.h"
#include <QMessageBox>
#include <QMovie>
#include <QWidget>
#include "usloviya.h"
#include <QRegExpValidator>
#include <QString>

Menu *m2;
double labelNumber,labelNumber2,resulted;
QString newlabel;
double tempvalue,tempvalue2;
bool dolar =true;
bool check=true;
int temptime;
QString znacheniya;
bool checkdot=0;
Calc::Calc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calc)
{
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    ui->setupUi(this);
    QMovie *moviebckc = new QMovie(":/Ss/Calcback2.gif");
    ui->label_2->setMovie(moviebckc);
    moviebckc->setSpeed(111);
    moviebckc->start();
    connect(ui->pushButton_plusminus,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->valuta,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    ui->value->setValidator(new QRegExpValidator(QRegExp("[1-9][0-9]{1,11}\\.[0-9]{1,2}|[0-9]\\.[0-9]{1,2}")));
    ui->procent->setValidator(new QRegExpValidator(QRegExp("[1-9][0-9]{1,2}\\.[0-9]")));
    ui->years->setValidator(new QRegExpValidator(QRegExp("[1-9][0-9]{1,11}")));
    ui->month->setValidator(new QRegExpValidator(QRegExp(("[1-9]|[1][0-2]"))));
    ui->days->setValidator(new QRegExpValidator(QRegExp("[1-9][0-9]")));
    if(checkout==0)
    {
        ui->value->setText("0.00");
        ui->procent->setText("0.0");
        ui->days->setText("0");
        ui->years->setText("0");
        ui->month->setText("0");
        ui->pick->setCurrentIndex(0);
        ui->textBrowser->setText("");
    }
    else
    {
        znacheniya=QString::number(value);
        ui->value->setText(znacheniya);
        znacheniya=QString::number(procent);
        ui->procent->setText(znacheniya);
        znacheniya=QString::number(timey);
        ui->years->setText(znacheniya);
        znacheniya=QString::number(timem);
        ui->month->setText(znacheniya);
        znacheniya=QString::number(timed);
        ui->days->setText(znacheniya);

    }

//    ui->value->setValidator(new QDoubleValidator(0.0,9999999999999.9,2,this));
//    ui->procent->setValidator(new QDoubleValidator(0.0,100.0,2,this));
//    ui->years->setValidator(new QIntValidator(1,99999,this));
//    ui->month->setValidator(new QIntValidator(1,12,this));
//    ui->days->setValidator(new QIntValidator(1,30,this));
    if(light)
    {
        ui->label->setStyleSheet("background-image: url(:/Ss/newcalc42.png);\nbackground-color: rgba(255, 255, 255, 0);");
        ui->label_3->setStyleSheet("background-color: rgba(0, 0, 0, 50);");
        ui->month->setStyleSheet("background-color: rgba(255, 255, 255, 0);\nborder: 0px;font: 12 9pt light;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(0,0,0);");
        ui->years->setStyleSheet("background-color: rgba(255, 255, 255, 0);\nborder: 0px;font: 12 9pt light;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(0,0,0);");
    ui->value->setStyleSheet("background-color: rgba(255, 255, 255, 0);font: 12 9pt light;\nborder: 0px;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(0,0,0);");
    ui->procent->setStyleSheet("background-color: rgba(255, 255, 255, 0);font: 12 9pt light;\nborder: 0px;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(0,0,0);");
    ui->pick->setStyleSheet("QComboBox{\n	background-color: rgb(219, 219, 219);font: 12 9pt light;\nborder-radius:10px;\n	color: rgb(0, 0, 0);\n}\n\nQComboBox::Activated{\nbackground-color:rgb(121,71,71);\n}");
    ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);font: 12 9pt light;\nbackground-image: url(:/Ss/switchnight.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");
    ui->rub->setStyleSheet("color:rgb(0,0,0);font:11pt;");
        ui->days->setStyleSheet("background-color: rgba(255, 255, 255, 0);font: 12 9pt light;\nborder: 0px;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(0,0,0);");

        ui->textBrowser->setStyleSheet("color:rgb(0,0,0);font: 12 11pt light;\nbackground-color: rgba(255, 255, 255,0);\nborder:0px;");
    }
    else
    {
        ui->label->setStyleSheet("background-image: url(:/Ss/newcalc4DARK2.png);\nbackground-color: rgba(255, 255, 255, 0);");
        ui->label_3->setStyleSheet("background-color: rgba(0, 0, 0, 192);");
        ui->month->setStyleSheet("background-color: rgba(255, 255, 255, 0);font: 12 9pt light;\nborder: 0px;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(255,255,255);");
        ui->years->setStyleSheet("background-color: rgba(255, 255, 255, 0);\nborder: 0px;font: 12 9pt light;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(255,255,255);");
    ui->value->setStyleSheet("background-color: rgba(255, 255, 255, 0);\nborder: 0px;\nborder-radius:15px;font: 12 9pt light;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(255,255,255);");
    ui->procent->setStyleSheet("background-color: rgba(255, 255, 255, 0);\nborder: 0px;\nborder-radius:15px;font: 12 9pt light;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(255,255,255);");
       ui->pick->setStyleSheet("QComboBox{\n	background-color: rgb(119, 119, 119);\nborder-radius:10px;font: 12 9pt light;\n	color: rgb(255, 255, 255);\n}\n\nQComboBox::Activated{\nbackground-color:rgb(121,71,190);\n}");
       ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);font: 12 9pt light;\nbackground-image: url(:/Ss/switchsun.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");
    ui->rub->setStyleSheet("color:rgba(255,255,255,170);font:11pt;");
    ui->textBrowser->setStyleSheet("color:rgb(255,255,255);font: 12 11pt light;\nbackground-color: rgba(255, 255, 255,0);\nborder:0px;");
    ui->days->setStyleSheet("background-color: rgba(255, 255, 255, 0);font: 12 9pt light;\nborder: 0px;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(255,255,255);");


    }
};
Calc::~Calc()
{
    delete ui;
};
void Calc::on_pushButton_clicked()
{
    hide();
    m2=new Menu(this);
    m2->show();
};


void Calc::on_pushButton_dot_pressed()
{
    QString a;
checkdot=0;
    a=ui->value->text();
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==".")
        {
            checkdot=1;
        }
    }
    if(checkdot==0)
        ui->value->setText(ui->value->text()+ ".");
}

void Calc::unary_operation_pressed()
{
    QPushButton* button= (QPushButton*)sender();
    double labelNumber;
    QString newLabel;
    if (button->text()=="+/-")
    {
        labelNumber=ui->value->text().toDouble();
        labelNumber=labelNumber * -1;
        newLabel=QString::number(labelNumber,'g',15);
        ui->value->setText(newLabel);
    }
    if (button->text()=="$")
    {
        ui->textBrowser->setText(" ");
        if(check==1)
        {

            if (dolar==true)
            {   labelNumber=ui->value->text().toDouble();
                tempvalue=labelNumber;
                ui->valuta->setStyleSheet("QPushButton {\n\ncolor:rgba(255, 170, 255,0);\n	background-color: rgba(51, 51, 51,111);\n  border: 3px rgb(31, 31, 31);\n border-radius:30px;\n}\nQPushButton:pressed {\n    \n	background-color: rgba(21, 255, 95, 20);}");
                tempvalue2=tempvalue/74.56;
                tempvalue2=round(tempvalue2*100)/100;
                labelNumber=tempvalue2;
                newLabel=QString::number(labelNumber,'g',15);
                ui->rub->setText("$");
                ui->value->setText(newLabel);
                dolar=false;
            }
            else
            {
                labelNumber=ui->value->text().toDouble();
                tempvalue2=labelNumber;
                ui->valuta->setStyleSheet("QPushButton {\n\ncolor:rgba(255, 170, 255,0);\n	background-color: rgba(51, 51, 51,0);\n  border: 3px rgb(31, 31, 31);\n border-radius:30px;\n}\nQPushButton:pressed {\n    \n	background-color: rgba(21, 255, 95, 20);}");
                tempvalue=tempvalue2*74.56;
                tempvalue=round(tempvalue*100)/100;
                labelNumber=tempvalue;
                newLabel=QString::number(labelNumber,'g',15);
                ui->rub->setText("₽");
                ui->value->setText(newLabel);
                dolar=true;
            }
            check=false;
        }
        else
            if (dolar==true)
            {
                ui->valuta->setStyleSheet("QPushButton {\n\ncolor:rgba(255, 170, 255,0);\n	background-color: rgba(51, 51, 51,111);\n  border: 3px rgb(31, 31, 31);\n border-radius:30px;\n}\nQPushButton:pressed {\n    \n	background-color: rgba(21, 255, 95, 20);}");

                labelNumber=tempvalue2;
                newLabel=QString::number(labelNumber,'g',15);
                ui->rub->setText("$");
                ui->value->setText(newLabel);
                dolar=false;
            }
            else
            {
                ui->valuta->setStyleSheet("QPushButton {\n\ncolor:rgba(255, 170, 255,0);\n	background-color: rgba(51, 51, 51,0);\n  border: 3px rgb(31, 31, 31);\n border-radius:30px;\n}\nQPushButton:pressed {\n    \n	background-color: rgba(21, 255, 95, 20);}");
                labelNumber=tempvalue;
                newLabel=QString::number(labelNumber,'g',15);
                ui->rub->setText("₽");
                ui->value->setText(newLabel);
                dolar=true;
            }
    }
}

void Calc::on_clear_released()
{
    ui->value->setText("0.00");
    ui->procent->setText("0.0");
    ui->days->setText("0");
    ui->years->setText("0");
    ui->month->setText("0");
    ui->pick->setCurrentIndex(0);
    ui->textBrowser->setText("");
}

void Calc::on_result_released()
{
    if(ui->pick->currentIndex()==0)
    {
    ui->textBrowser->setText("Выбрерите, на каких условиях вы хотите вложить деньги!");
    }
    else
    {
        if(dolar==0)
        {
            ui->textBrowser->setText(newlabel+" $");
            ui->pick->setCurrentIndex(0);

        }
        else
        {
            ui->textBrowser->setText(newlabel+" ₽");
            ui->pick->setCurrentIndex(0);
        }
    }
}



void Calc::on_pick_activated(int index)
{
    procent=ui->procent->text().toDouble();
    value=ui->value->text().toDouble();
    timey=ui->years->text().toInt();
    timem=ui->month->text().toInt();
    timed=ui->days->text().toInt();
    times=(timey*12+timem)*30+timed;
    if(value<0)
    {
         ui->textBrowser->setText("Размер вклада должен быть положительным числом!");
        ui->pick->setCurrentIndex(0);
    }
    else if(value==0)
    {
         ui->textBrowser->setText("Заполните поле ''Размер вклада''!");
        ui->pick->setCurrentIndex(0);
    }
    else if(procent<0)
    {
        ui->textBrowser->setText("Процент должен быть положительным числом!");
        ui->pick->setCurrentIndex(0);
    }
    else if(procent==0)
    {
        ui->textBrowser->setText("Заполните поле ''Процент''!");
    }
    else if(timey<0||timem<0||timed<0)
    {
        ui->textBrowser->setText("Срок не может быть отрицательным!");
        ui->pick->setCurrentIndex(0);
    }
    else  if(timey==0&&timem==0&&timed==0)
    {
        ui->textBrowser->setText("Заполните поле ''Срок''!");
        ui->pick->setCurrentIndex(0);
    }
    else switch(index)
    {
    case 1:
        temptime=int((times/30)/12);
        for(int i=0;i<temptime;i++)
        {
            value=value+(value*(procent/100));
            value=round(value*100)/100;
        }
        resulted=value;
        newlabel= QString::number(resulted,'g',5);
        break;
    case 2:
        temptime=times/30;
        for(int i=0;i<temptime;i++)
        {
            value=value+(value*(procent/(12*100)));
            value=round(value*100)/100;
        }
        resulted=double(value);
        newlabel= QString::number(resulted,'g',15);
        break;
    case 3:
        if((value/1000)>1)
        {
            temptime=times;
            for(int i=0;i<temptime;i++)
            {
                value=value+(1000*int(value/1000))*(procent/(365*100));
                value=round(value*100)/100;
            }
            resulted=value;
            newlabel= QString::number(resulted,'g',15);
        }
        break;
    case 4:
        temptime=times;
        for(int i=0;i<temptime;i++)
        {
            value=value+(value*procent/(365*100));
            value=round(value*100)/100;
        }

        labelNumber=value;
        newlabel= QString::number(labelNumber,'g',15);

        break;
    }
}

void Calc::on_pushButton_info_clicked()
{
    procent=ui->procent->text().toDouble();
    value=ui->value->text().toDouble();
    timey=ui->years->text().toInt();
    timem=ui->month->text().toInt();
    timed=ui->days->text().toInt();
    checkout=1;
    hide();
    us=new usloviya(this);
    us->show();
}

void Calc::on_dark_clicked()
{
    if(light)
    {
        light=0;

        ui->label->setStyleSheet("background-image: url(:/Ss/newcalc4DARK2.png);\nbackground-color: rgba(255, 255, 255, 0);");
        ui->label_3->setStyleSheet("background-color: rgba(0, 0, 0, 192);");
        ui->month->setStyleSheet("background-color: rgba(255, 255, 255, 0);font: 12 9pt light;\nborder: 0px;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(255,255,255);");
        ui->years->setStyleSheet("background-color: rgba(255, 255, 255, 0);\nborder: 0px;font: 12 9pt light;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(255,255,255);");
    ui->value->setStyleSheet("background-color: rgba(255, 255, 255, 0);\nborder: 0px;\nborder-radius:15px;font: 12 9pt light;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(255,255,255);");
    ui->procent->setStyleSheet("background-color: rgba(255, 255, 255, 0);\nborder: 0px;\nborder-radius:15px;font: 12 9pt light;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(255,255,255);");
       ui->pick->setStyleSheet("QComboBox{\n	background-color: rgb(119, 119, 119);\nborder-radius:10px;font: 12 9pt light;\n	color: rgb(255, 255, 255);\n}\n\nQComboBox::Activated{\nbackground-color:rgb(121,71,190);\n}");
       ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);font: 12 9pt light;\nbackground-image: url(:/Ss/switchsun.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");
    ui->rub->setStyleSheet("color:rgba(255,255,255,170);font:11pt;");
    ui->textBrowser->setStyleSheet("color:rgb(255,255,255);font: 12 11pt light;\nbackground-color: rgba(255, 255, 255,0);\nborder:0px;");
    ui->days->setStyleSheet("background-color: rgba(255, 255, 255, 0);font: 12 9pt light;\nborder: 0px;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(255,255,255);");
    }
    else
    {
        light=1;
        ui->label->setStyleSheet("background-image: url(:/Ss/newcalc42.png);\nbackground-color: rgba(255, 255, 255, 0);");
        ui->label_3->setStyleSheet("background-color: rgba(0, 0, 0, 50);");
        ui->month->setStyleSheet("background-color: rgba(255, 255, 255, 0);\nborder: 0px;font: 12 9pt light;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(0,0,0);");
        ui->years->setStyleSheet("background-color: rgba(255, 255, 255, 0);\nborder: 0px;font: 12 9pt light;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(0,0,0);");
    ui->value->setStyleSheet("background-color: rgba(255, 255, 255, 0);font: 12 9pt light;\nborder: 0px;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(0,0,0);");
    ui->procent->setStyleSheet("background-color: rgba(255, 255, 255, 0);font: 12 9pt light;\nborder: 0px;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(0,0,0);");
    ui->pick->setStyleSheet("QComboBox{\n	background-color: rgb(219, 219, 219);font: 12 9pt light;\nborder-radius:10px;\n	color: rgb(0, 0, 0);\n}\n\nQComboBox::Activated{\nbackground-color:rgb(121,71,71);\n}");
    ui->dark->setStyleSheet("QPushButton\n{background-color: rgba(255, 255, 255, 0);font: 12 9pt light;\nbackground-image: url(:/Ss/switchnight.png);\nborder-radius: 55px;\n}\nQPushButton:hover\n{\n	background-color: rgba(128, 214, 250,22);\n}");
    ui->rub->setStyleSheet("color:rgb(0,0,0);font:11pt;");
        ui->days->setStyleSheet("background-color: rgba(255, 255, 255, 0);font: 12 9pt light;\nborder: 0px;\nborder-radius:15px;\nborder-color: rgba(255, 255, 255, 0);\ncolor:rgb(0,0,0);");

        ui->textBrowser->setStyleSheet("color:rgb(0,0,0);font: 12 11pt light;\nbackground-color: rgba(255, 255, 255,0);\nborder:0px;");

    }

}



void Calc::on_value_editingFinished()
{
    check=1;
}

void Calc::on_value_textChanged(const QString &arg1)
{
    if(arg1==arg1)
        check=true;
}


void Calc::on_procent_selectionChanged()
{
    ui->procent->setText("");
}

void Calc::on_value_selectionChanged()
{
        ui->value->setText("");
}

void Calc::on_years_selectionChanged()
{
        ui->years->setText("");
}

void Calc::on_month_selectionChanged()
{
        ui->month->setText("");
}

void Calc::on_days_selectionChanged()
{
        ui->days->setText("");
}
