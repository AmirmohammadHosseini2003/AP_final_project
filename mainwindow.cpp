#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

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


void MainWindow::on_pushButton_clicked()
{
    srand(time(0));
    int tass_1 = rand()%6+1;
    int tass_2 = rand()%6+1;
    ui->label->setText(QString::number(tass_1));
    ui->label_2->setText(QString::number(tass_2));
}
