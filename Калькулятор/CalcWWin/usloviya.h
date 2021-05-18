#ifndef USLOVIYA_H
#define USLOVIYA_H

#include <QDialog>

namespace Ui {
class usloviya;
}

class usloviya : public QDialog
{
    Q_OBJECT

public:
    explicit usloviya(QWidget *parent = nullptr);
    ~usloviya();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_dark_clicked();

private:
    Ui::usloviya *ui;
};

#endif // USLOVIYA_H
