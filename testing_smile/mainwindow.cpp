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


int firstNumber, secondNumber, outputResult;

void MainWindow::on_add_clicked()
{
    firstNumber = ui->firstNum->text().toInt();
    secondNumber = ui->secondNum->text().toInt();
    outputResult = firstNumber + secondNumber;
    ui->result->setText(QString::number(outputResult));
}


void MainWindow::on_subtract_clicked()
{
    firstNumber = ui->firstNum->text().toInt();
    secondNumber = ui->secondNum->text().toInt();
    outputResult = firstNumber - secondNumber;
    ui->result->setText(QString::number(outputResult));
}


void MainWindow::on_divide_clicked()
{
    firstNumber = ui->firstNum->text().toInt();
    secondNumber = ui->secondNum->text().toInt();
    outputResult = firstNumber / secondNumber;
    ui->result->setText(QString::number(outputResult));
}


void MainWindow::on_multiply_clicked()
{
    firstNumber = ui->firstNum->text().toInt();
    secondNumber = ui->secondNum->text().toInt();
    outputResult = firstNumber * secondNumber;
    ui->result->setText(QString::number(outputResult));
}
