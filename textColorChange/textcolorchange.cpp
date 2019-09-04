#include "textcolorchange.h"
#include "ui_textcolorchange.h"

textColorChange::textColorChange(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::textColorChange)
{
    ui->setupUi(this);
}

textColorChange::~textColorChange()
{
    delete ui;
}
