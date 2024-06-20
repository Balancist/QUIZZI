#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_pvpbtn_clicked()
{
    delete ui;
}


void MainWindow::on_survivalbtn_clicked()
{
    delete ui;
}


void MainWindow::on_exitbtn_clicked()
{
    delete ui;
}

