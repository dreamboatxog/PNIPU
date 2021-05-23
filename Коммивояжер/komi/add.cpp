#include "add.h"
#include "ui_Add.h"

#include <QFile>
#include <QTextStream>

QFile ASize("C:/Users/79194/Documents/test/MatrixSize.txt");
QTextStream AstreamSize(&ASize);
QFile AMatrix("C:/Users/79194/Documents/test/Matrix.txt");
QTextStream AstreamMatrix(&AMatrix);

int Alen;
int** amatrix;

Add::Add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);

    ASize.open(QFile::ReadOnly | QFile::Text);
    Alen = AstreamSize.readLine().toInt(0, 10) + 1;
    ASize.flush();
    ASize.close();
    ASize.open(QFile::WriteOnly | QFile::Text);
    AstreamSize << QString::number(Alen);
    ASize.flush();
    ASize.close();
    amatrix = new int* [Alen];
    for (int i = 0; i < Alen; i++)
    {
        amatrix[i] = new int [Alen];
    }

    for (int i = 0; i < Alen; i++)
    {
        for (int j = 0; j < Alen; j++)
        {
            amatrix[i][j] = 0;
        }
    }

    ui->startNode->setText(QString::number(Alen));
    connect(ui->btnAdd, &QPushButton::clicked, this, &Add::AddNode);
}


void Add::AddNode()
{
AMatrix.close();
    AMatrix.open(QFile::ReadOnly | QFile::Text);
    for (int i = 0; i < Alen - 1; i++)
    {
        for (int j = 0; j < Alen - 1; j++)
        {
            amatrix[i][j] = AstreamMatrix.readLine().toInt(0, 10);
        }
    }
    AMatrix.flush();
    AMatrix.close();
    AMatrix.open(QFile::WriteOnly | QFile::Text);
    for (int i = 0; i < Alen; i++)
    {
        for (int j = 0; j < Alen; j++)
        {
            AstreamMatrix << QString::number(amatrix[i][j]) << "\n";
        }
    }
    AMatrix.close();
    close();
}

Add::~Add()
{
    delete ui;
}
