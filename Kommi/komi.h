#ifndef Komi_H
#define Komi_H

#include <QString>

class Komi
{
public:
    Komi();
    ~Komi();

    QString GetResult(QString root);
    QString WayLength(QString root);

private:
    int getNumber(int I, int J);
    void RemoveNode(int I, int J);
    void GetWay(int Node);
    void SetSize_Matrix();

private:
    int Mainlen;
    int di;
    int** MainMatrix;
    int** Mtemp;
    int** roads;
    int Result = 0;
    int start;
    QString way;
    int counter;
};

#endif // Komi_H
