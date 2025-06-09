#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButtonSum_clicked()
{
    double firstNum = ui->lineEditNum1->text().toDouble();
    double secondNum = ui->lineEditNum2->text().toDouble();
    double result = firstNum + secondNum;
    ui->lineEditResult->setText(QString::number(result));
}

