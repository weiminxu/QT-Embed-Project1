#include "qfiledialogoperation.h"
#include "ui_qfiledialogoperation.h"
#include <QMessageBox>

qFileDialogOperation::qFileDialogOperation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::qFileDialogOperation)
{
    ui->setupUi(this);

}

qFileDialogOperation::~qFileDialogOperation()
{
    delete ui;
}


void qFileDialogOperation::on_btnOpenFile_clicked()
{
    QString fileNameSelect = QFileDialog::getOpenFileName(this,"select file",
                             "/Users/al/Documents/GitHub/QT-Embed-Project1/qFileDialogOperation/",
                             "HEADERS(*.h);;SOURCES(*.cpp);;FORMS(*.ui)");

    if(fileNameSelect.isEmpty())
    {
        QMessageBox::warning(this, "warning", "You do not select a file");
        return;
    }


}


