#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_horizontalSlider_valueChanged(int value)
{
      QString r = QString::number(value*2.5);
      QString g = QString::number(130);
      QString b = QString::number(242);

      QString colorString = "background-color: rgb("+ r+"," +g+"," +b+")";
      setStyleSheet(colorString);
}
