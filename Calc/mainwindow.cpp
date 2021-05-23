#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QMovie>
#include "menu.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
   QMovie *movie = new QMovie(":/Ss/Newstart2.gif");
   ui->label->setMovie(movie);
   movie->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    hide();
    m=new Menu(this);
    m->show();
}
