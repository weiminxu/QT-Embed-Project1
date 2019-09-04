#include "dialogproperty.h"
#include "ui_dialogproperty.h"

dialogProperty::dialogProperty(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dialogProperty)
{
    ui->setupUi(this);
}

dialogProperty::~dialogProperty()
{
    delete ui;
}
