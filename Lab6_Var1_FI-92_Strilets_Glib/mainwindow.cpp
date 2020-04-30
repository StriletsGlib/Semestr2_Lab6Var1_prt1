#include "header.h"
#include "mainwindow.h"
calc mainCalc(0,0);


void calcRefresh(calc* mainC, QPlainTextEdit* tx, QPlainTextEdit* ty, QPlainTextEdit* tres, QPlainTextEdit* hist, bool t=true){
    QString sx, sy, srez, sHistory;
    sx=tx->toPlainText();
    if(testForInt(sx.toStdString())) {
        mainC->setx(sx.toDouble());
    }
    else{
        if(!t)hist->appendPlainText("x="+sx+" ISNT a double!");
        //QMessageBox::critical(this,"error","Double not converted");
        return;
    }
    //mainCalc.setx(sx);
    sy=ty->toPlainText();
    if(testForInt(sy.toStdString())) {
        mainCalc.sety(sy.toDouble());
    }
    else{
        if(!t)hist->appendPlainText("y="+sy+" ISNT a double!");
        //QMessageBox::critical(this,"error","Double not converted");
        return;
    }
    std::stringstream place;
    place<<mainC->getres();
    std::string pl;
    place>>pl;
    srez=srez.fromStdString(pl);
    tres->setPlainText(srez);
    sHistory=sHistory.fromStdString(mainC->getHistory());
    if(t) hist->appendPlainText(sHistory);
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_plus_clicked(){
    calcRefresh(&mainCalc, ui->plainTextEdit_x, ui->plainTextEdit_y, ui->plainTextEdit_res, ui->plainTextHistory, false);
    //mainCalc.setx(sx);
    mainCalc.sum();
    calcRefresh(&mainCalc, ui->plainTextEdit_x, ui->plainTextEdit_y, ui->plainTextEdit_res, ui->plainTextHistory);
};


void MainWindow::on_pushButton_Minus_clicked()
{
    calcRefresh(&mainCalc, ui->plainTextEdit_x, ui->plainTextEdit_y, ui->plainTextEdit_res, ui->plainTextHistory, false);
    //mainCalc.setx(sx);
    mainCalc.dif();
    calcRefresh(&mainCalc, ui->plainTextEdit_x, ui->plainTextEdit_y, ui->plainTextEdit_res, ui->plainTextHistory);
}

void MainWindow::on_pushButton_Multiply_clicked()
{
    calcRefresh(&mainCalc, ui->plainTextEdit_x, ui->plainTextEdit_y, ui->plainTextEdit_res, ui->plainTextHistory, false);
    //mainCalc.setx(sx);
    mainCalc.umn();
    calcRefresh(&mainCalc, ui->plainTextEdit_x, ui->plainTextEdit_y, ui->plainTextEdit_res, ui->plainTextHistory);
}

void MainWindow::on_pushButton_Divide_clicked()
{
    calcRefresh(&mainCalc, ui->plainTextEdit_x, ui->plainTextEdit_y, ui->plainTextEdit_res, ui->plainTextHistory, false);
    //mainCalc.setx(sx);
    mainCalc.divide();
    calcRefresh(&mainCalc, ui->plainTextEdit_x, ui->plainTextEdit_y, ui->plainTextEdit_res, ui->plainTextHistory);
}
