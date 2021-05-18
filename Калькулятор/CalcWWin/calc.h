#ifndef CALC_H
#define CALC_H
#include <QMessageBox>
#include <QDialog>
#include "usloviya.h"
namespace Ui {
class Calc;
}

class Calc : public QDialog
{
    Q_OBJECT

public:
    explicit Calc(QWidget *parent = nullptr);
    ~Calc();
private:
    Ui::Calc *ui;
    usloviya *us;
private slots:

    void on_pushButton_clicked();
    void on_pushButton_dot_pressed();
    void unary_operation_pressed();
    void on_clear_released();
    void on_result_released();
    void on_pick_activated(int index);
    void on_pushButton_info_clicked();
    void on_dark_clicked();
    void on_value_editingFinished();
    void on_value_textChanged(const QString &arg1);
    void on_procent_selectionChanged();
    void on_value_selectionChanged();
    void on_years_selectionChanged();
    void on_month_selectionChanged();
    void on_days_selectionChanged();
};

#endif // CALC_H
