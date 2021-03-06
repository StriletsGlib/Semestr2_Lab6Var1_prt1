#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMessageBox>
#include "calc.h"
#include "ui_mainwindow.h"
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

    void on_pushButton_plus_clicked();




    void on_pushButton_Minus_clicked();

    void on_pushButton_Multiply_clicked();

    void on_pushButton_Divide_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
