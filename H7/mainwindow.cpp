#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
        QString s = QString::number(counter);


     qDebug()<<"created";
}

MainWindow::~MainWindow()
{
    delete ui;
     qDebug()<<"ui deleted";

}

void MainWindow::on_btnCount_clicked()
{
    counter++;
     ui->txtResult->setText(QString::number(counter));
      ui->labelInfo->setText("Painiketta Count painettu " + QString::number(counter)+" kertaa");

    qDebug()<<"count button";
}


void MainWindow::on_btnReset_clicked()
{
    counter=0;
    ui->txtResult->setText(QString::number(counter));
    ui->labelInfo->setText("Painiketta Count painettu " + QString::number(counter)+" kertaa");

    qDebug()<<"reset button";
}

