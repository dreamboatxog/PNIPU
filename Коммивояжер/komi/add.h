#ifndef Add_H
#define Add_H

#include <QDialog>

namespace Ui {
class Add;
}

class Add : public QDialog
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = nullptr);
    ~Add();

private slots:
    void AddNode();


private:
    Ui::Add *ui;
};

#endif // Add_H
