#include "edit.h"
#include "ui_Edit.h"

#include <QFile>
#include <QTextStream>

QFile ESize("C:/Users/79194/Documents/test/MatrixSize.txt");
QTextStream EstreamSize(&ESize);
QFile EMatrix("C:/Users/79194/Documents/test/Matrix.txt");
QTextStream EstreamMatrix(&EMatrix);

int Elen;
int** ematrix;

Edit::Edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit)
{
    ui->setupUi(this);

    ESize.open(QFile::ReadOnly | QFile::Text);
    Elen = EstreamSize.readLine().toInt(0, 10);
    ESize.flush();
    ESize.close();
    ESize.open(QFile::WriteOnly | QFile::Text);
    EstreamSize << QString::number(Elen);
    ESize.flush();
    ESize.close();
    ematrix = new int* [Elen];
    for (int i = 0; i < Elen; i++)
    {
        ematrix[i] = new int [Elen];
    }

    for (int i = 0; i < Elen; i++)
    {
        for (int j = 0; j < Elen; j++)
        {
            ematrix[i][j] = 0;
        }
    }

    EMatrix.close();
    EMatrix.open(QFile::ReadOnly | QFile::Text);
    for (int i = 0; i < Elen; i++)
    {
        for (int j = 0; j < Elen; j++)
        {
            ematrix[i][j] = EstreamMatrix.readLine().toInt(0, 10);
        }
    }
    EMatrix.flush();
    EMatrix.close();

    connect(ui->btnEdit, &QPushButton::clicked, this, &Edit::EditNode);
}

void Edit::EditRoad()
{
    bool isWritten;
    if (ui->startNode->text().toInt(&isWritten, 10) && ui->endNode->text().toInt(&isWritten, 10) && (ui->normalLength->text().toInt(&isWritten, 10) ||  ui->normalLength->text() == "0") && (ui->reverseLength->text().toInt(&isWritten, 10) ||  ui->reverseLength->text() == "0"))
    {
        int i = ui->startNode->text().toInt(0, 10) - 1,
            j = ui->endNode->text().toInt(0, 10) - 1;

        ematrix [i][j] = ui->normalLength->text().toInt(0, 10);
        ematrix [j][i] = ui->reverseLength->text().toInt(0, 10);
        if (ui->normalLength->text() == 0)
        {
            ematrix [i][j] = 0;
        }
        if (ui->reverseLength->text() == 0)
        {
            ematrix [j][i] = 0;
        }

        ui->endNode->setText("");
        ui->normalLength->setText("");
        ui->reverseLength->setText("");
    }
}

void Edit::EditNode()
{
    EditRoad();
    EMatrix.open(QFile::WriteOnly | QFile::Text);
    for (int i = 0; i < Elen; i++)
    {
        for (int j = 0; j < Elen; j++)
        {
            EstreamMatrix << QString::number(ematrix[i][j]) << "\n";
        }
    }
    EMatrix.close();
    close();
}

Edit::~Edit()
{
    delete ui;
}
