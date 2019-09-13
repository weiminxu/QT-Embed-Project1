#include "qfiledialogoperation2.h"
#include "ui_qfiledialogoperation2.h"
#include <QFileDialog>
qFileDialogOperation2::qFileDialogOperation2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::qFileDialogOperation2)
{
    ui->setupUi(this);
}

qFileDialogOperation2::~qFileDialogOperation2()
{
    delete ui;
}

void qFileDialogOperation2::on_pushButton_clicked()
{
    QString fileNameSelection = QFileDialog::getOpenFileName(this, "select file",
                                "/Users/al/Documents/GitHub/QT-Embed-Project1/qFileDialogOperation2",
                                "HEADERS(*.h);;FORMS(*.ui);;SOURCES(*.cpp)");
}
