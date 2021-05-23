#ifndef MainWindow_H
#define MainWindow_H

#include <QMainWindow>
#include "glwidget.h"
#include "add.h"
#include "edit.h"
#include "del.h"
#include "komi.h"

QT_BEGIN_NAMESPACE

namespace Ui { class MainWindow; }

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void CreateGraph();
    void ButtonAdd();
    void ButtonEdit();
    void ButtonDelete();
    void GetResult();

private:
    Ui::MainWindow *ui;
    MyGLWidget *openGLW;
    Komi man;
};

#endif // MainWindow_H
