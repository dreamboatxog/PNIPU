#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "calc.h"
#include "info.h"
#include "usloviya.h"
#include <QString>

extern bool light;
extern double value,procent,timey,timem,times,timed;
extern bool checkout;
namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_dark_clicked();

private:
    Ui::Menu *ui;
    Calc *c;
    info *i;
};

#endif // MENU_H

