#include "del.h"
#include "ui_Del.h"

#include <QFile>
#include <QTextStream>

QFile DSize("C:/Users/79194/Documents/test/MatrixSize.txt");
QTextStream DstreamSize(&DSize);
QFile DMatrix("C:/Users/79194/Documents/test/Matrix.txt");
QTextStream DstreamMatrix(&DMatrix);

int Dlen;
int** dmatrix;
int** temp;

Del::Del(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Del)
{
    ui->setupUi(this);
    DSize.open(QFile::ReadOnly | QFile::Text);
    bool ok;
    QString row = DstreamSize.readLine();
    if (row.toInt(&ok, 10))
    {
        Dlen = row.toInt(0, 10);
        Dlen--;
        temp = new int* [Dlen + 1];
        dmatrix = new int*[Dlen];
        for (int i = 0; i < Dlen; i++)
        {
            temp[i] = new int[Dlen + 1];
            dmatrix[i] = new int [Dlen];
        }
        temp[Dlen] = new int[Dlen + 1];
        DMatrix.close();
        DMatrix.open(QFile::ReadOnly | QFile::Text);
        for (int i = 0; i < Dlen + 1; i++)
        {
            for (int j = 0; j < Dlen + 1; j++)
            {
                temp[i][j] = DstreamMatrix.readLine().toInt(0, 10);
            }
        }
        DMatrix.flush();
        DMatrix.close();

        connect(ui->btnDelete, &QPushButton::clicked, this, &Del::DeleteNode);
    }
}

void Del::DeleteNode()
{
    bool isWritten;
    if ((ui->deleteNode->text().toInt(&isWritten, 10)))
    {
        int Idel = ui->deleteNode->text().toInt(0, 10) - 1,
            Jdel = ui->deleteNode->text().toInt(0, 10) - 1;

        int k = 0;
        for (int i = 0; i < Dlen + 1; i++)
        {
            if (i != Idel)
            {
                int l = 0;
                for (int j = 0; j < Dlen + 1; j++)
                {
                    if (j != Jdel)
                    {
                        dmatrix[k][l] = temp[i][j];
                        l++;
                    }
                }
                k++;
            }
        }
        DSize.flush();
        DSize.close();
        DSize.open(QFile::WriteOnly | QFile::Text);
        DstreamSize << QString::number(Dlen);
        DSize.flush();
        DSize.close();
        DMatrix.open(QFile::WriteOnly | QFile::Text);
        for (int i = 0; i < Dlen; i++)
        {
            for (int j = 0; j < Dlen; j++)
            {
                DstreamMatrix << QString::number(dmatrix[i][j]) << "\n";
            }
        }
        DMatrix.close();
        close();
    }
}

Del::~Del()
{
    delete ui;
}
