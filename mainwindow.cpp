#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    QString r = QString::number(value*2.5);
    QString g = QString::number(130);
    QString b = QString::number(242);

    QString colorString = "background-color: rgb("+ r+"," +g+"," +b+")";
    setStyleSheet(colorString);
}

