#include "textcolorchange.h"
#include "ui_textcolorchange.h"

textColorChange::textColorChange(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::textColorChange)
{
    ui->setupUi(this);
    str = "fafewfwgwgegregefafefwfasdfsafsafewfwefwffsdcvreregvv";
}

textColorChange::~textColorChange()
{
    delete ui;
}

void textColorChange::on_pushButton_clicked()
{
    ui->textEdit->setTextColor(Qt::red);
    ui->textEdit->setText(str);
}

void textColorChange::on_pushButton_2_clicked()
{
     ui->textEdit->setText(str);
}
