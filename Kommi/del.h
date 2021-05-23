#ifndef DEL_H
#define DEL_H

#include <QDialog>

namespace Ui {
class Del;
}

class Del : public QDialog
{
    Q_OBJECT

public:
    explicit Del(QWidget *parent = nullptr);
    ~Del();

private slots:

    void DeleteNode();


private:
    Ui::Del *ui;
};

#endif // Del_H
