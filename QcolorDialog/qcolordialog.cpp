#include "qcolordialog.h"
#include "ui_qcolordialog.h"

QcolorDialog::QcolorDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QcolorDialog)
{
    ui->setupUi(this);
}

QcolorDialog::~QcolorDialog()
{
    delete ui;
}
