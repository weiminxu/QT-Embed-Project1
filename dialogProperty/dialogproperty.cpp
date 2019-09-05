#include "dialogproperty.h"
#include "ui_dialogproperty.h"

dialogProperty::dialogProperty(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dialogProperty)
{
    ui->setupUi(this);
    qmb = new QMessageBox();
}

dialogProperty::~dialogProperty()
{
    delete ui;
}



void dialogProperty::on_pushButton_clicked()
{
    QMessageBox::about(this, "masseage", "THIS IS YOUR SCHEDULE, IT IS TIME FOR YOU TO STUDY!");
    QMessageBox::information(this, "information", "system error!",QMessageBox::Yes|QMessageBox::No);
}
