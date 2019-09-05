#include "dialogcolorchange.h"
#include "ui_dialogcolorchange.h"
#include <QColor>
#include <QColorDialog>

dialogColorChange::dialogColorChange(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dialogColorChange)
{
    ui->setupUi(this);
}

dialogColorChange::~dialogColorChange()
{
    delete ui;
}

void dialogColorChange::on_pushButton_clicked()
{
    QColor qcolor = QColorDialog::getColor(Qt::black, this, "obtain color");
    if(qcolor.isValid())
    {
        QPalette qp = ui->label->palette();
        qp.setColor(QPalette::WindowText, qcolor);
        ui->label->setPalette(qp);

    }
}
