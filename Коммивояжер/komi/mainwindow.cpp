#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPainter>
#include <QGridLayout>
#include <QPushButton>
#include <QProcess>
#include <QFile>

QFile fSize("C:/Users/79194/Documents/test/MatrixSize.txt");
QFile fMatrix("C:/Users/79194/Documents/test/Matrix.txt");

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    openGLW = new MyGLWidget(this);
    ui->grid->addWidget(openGLW, 0, 0);
    connect(ui->btnCreate, &QPushButton::clicked, this, &MainWindow::CreateGraph);
    connect(ui->btnAdd, &QPushButton::clicked, this, &MainWindow::ButtonAdd);
    connect(ui->btnEdit, &QPushButton::clicked, this, &MainWindow::ButtonEdit);
    connect(ui->btnDelete, &QPushButton::clicked, this, &MainWindow::ButtonDelete);
    connect(ui->btnAnswer, &QPushButton::clicked, this, &MainWindow::GetResult);
}

void MainWindow::GetResult()
{
    ui->wayText->setText(man.GetResult(ui->rootText->text()));
    ui->lengthText->setText(man.WayLength(ui->rootText->text()));
}


void MainWindow::CreateGraph()
{
    ui->wayText->setText("");
    ui->lengthText->setText("");
    QProcess process(this);
    process.startDetached("C:/Users/79194/Documents/test/run.bat");
}

void MainWindow::ButtonDelete()
{
    ui->wayText->setText("");
    ui->lengthText->setText("");
    Del window;
    window.setModal(true);
    window.exec();
}


void MainWindow::ButtonAdd()
{
    ui->wayText->setText("");
    ui->lengthText->setText("");
    Add window;
    window.setModal(true);
    window.exec();
}

void MainWindow::ButtonEdit()
{
    ui->wayText->setText("");
    ui->lengthText->setText("");
    Edit window;
    window.setModal(true);
    window.exec();
}



MainWindow::~MainWindow()
{
    delete ui;
}
