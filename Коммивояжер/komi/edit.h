#ifndef Edit_H
#define Edit_H

#include <QDialog>

namespace Ui {
class Edit;
}

class Edit : public QDialog
{
    Q_OBJECT

public:
    explicit Edit(QWidget *parent = nullptr);
    ~Edit();

private slots:

    void EditRoad();
    void EditNode();

private:
    Ui::Edit *ui;
};

#endif // Edit_H
