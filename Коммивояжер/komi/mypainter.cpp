 #include "mypainter.h"

#include <QPaintEvent>
#include <QPainter>
#include <QWidget>
#include <QtCore/qmath.h>
#include <QFile>
#include <QTextStream>

QFile Size("C:/Users/79194/Documents/test/MatrixSize.txt");
QTextStream streamSize(&Size);
QFile Matrix("C:/Users/79194/Documents/test/Matrix.txt");
QTextStream streamMatrix(&Matrix);

int len;
int R = 300;
int r = 40;
double pi = 3.1415;
int Txt = 30;
int xa = 600;
int ya = 400;
double angle = pi / 8;
int str = 23;
int **matrix;

void MyPainter::make_matrix()
{
    Size.open(QFile::ReadOnly | QFile::Text);
    len = streamSize.readLine().toInt(0, 10);
    Size.flush();
    Size.close();
    matrix = new int* [len];
    for (int i = 0; i < len; i++)
    {
        matrix[i] = new int [len];
    }
    Matrix.open(QFile::ReadOnly | QFile::Text);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            matrix[i][j] = streamMatrix.readLine().toInt(0, 10);
        }
    }
    Matrix.flush();
    Matrix.close();
}

MyPainter::MyPainter()
{
    front = QBrush(QColor(12, 111, 199));
    back = QBrush(QColor(220, 241, 250));
    textPen = QPen(QColor(33, 33, 33));
    textPen.style();
//    QFont my("Broadway");
    glFont.setPixelSize(Txt);
}

void MyPainter::draw(QPainter *painter, QPaintEvent *event)
{
    make_matrix();
    painter->fillRect(event->rect(),back);
    painter->setBrush(front);
    painter->setPen(textPen);
    painter->setFont(glFont);
    textPen.setWidth(4);

    for (int i = 0; i < len; i++)
    {
        double a = pi * 3 / 2 + pi * 2 / len * i;

        int xc = cos(a) * R + xa;
        int yc = sin(a) * R + ya;

        int c1 = xc - 20;
        int c2 = yc - Txt / 2;
        int c3 = 40;
        int c4 = Txt;

        QString text; text.setNum(i + 1);

        painter->drawEllipse(QRectF(xc - r, yc - r, 2 * r, 2 * r));
        painter->drawText(QRect(c1, c2, c3, c4), Qt::AlignCenter, text);

        for (int k = 0 ; k < len; k++)
        {
            if (matrix[i][k] != 0)
            {

                double a2 = pi * 3 / 2 + pi * 2 / len * k;

                double xc2 = cos(a2) * R + xa;
                double yc2 = sin(a2) * R + ya;

                double l = sqrt((xc2 - xc) * (xc2 - xc) + (yc2 - yc) * (yc2 - yc));

                int xl1 = (xc2-xc) / l * r + xc;
                int yl1 = (yc2-yc) / l * r + yc;

                int xl2 = xc2-(xc2-xc)/l * r;
                int yl2 = yc2 - (yc2 - yc) / l * r;

                painter->drawLine(xl1, yl1 , xl2 , yl2);

                double b;

                if (xc2 == xl2 && yl2 < yc2)
                    b = pi * 3 / 2;
                else
                    if (yc2 == yl2 && xl2 < xc2)
                        b = pi;
                else
                    if (xc2 == xl2 && yl2 > yc2)
                        b = pi / 2;
                else
                    if (yc2 == yl2 && xl2 > xc2)
                        b = 0;
                else
                    if (xl2 > xc2 && yl2 < yc2)
                        b = atan((yc2 - yl2) / (xc2 - xl2)) + pi * 2;
                else
                    if (xl2 < xc2 && yl2 < yc2)
                        b = atan((yc2 - yl2) / (xc2 - xl2)) + pi;
                else
                    if (xl2 < xc2 && yl2 > yc2)
                        b = atan((yc2 - yl2) / (xc2 - xl2)) + pi;
                else
                    if (xl2 > xc2 && yl2 > yc2)
                        b = atan((yc2 - yl2) / (xc2 - xl2));

                int xs1 = cos(b + angle) * str + xl2;
                int ys1 = sin(b + angle) * str + yl2;

                int xs2 = cos(b - angle) * str + xl2;
                int ys2 = sin(b - angle) * str + yl2;

                painter->drawLine(xl2, yl2, xs1, ys1);
                painter->drawLine(xl2, yl2, xs2, ys2);

                // Текст

                c1 = (xl2 + xl1) / 2 ;
                c2 = (yl2 + yl1) / 2 ;
                c3 = 40;
                c4 = Txt;

                text.setNum(matrix[i][k]);
                painter->drawText(QRect(c1, c2, c3, c4), Qt::AlignCenter, text);
            }
        }
    }
}
