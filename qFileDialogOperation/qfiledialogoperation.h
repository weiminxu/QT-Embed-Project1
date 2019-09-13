#ifndef QFILEDIALOGOPERATION_H
#define QFILEDIALOGOPERATION_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include <QString>
#include <QDebug>

namespace Ui {
class qFileDialogOperation;
}

class qFileDialogOperation : public QMainWindow
{
    Q_OBJECT

public:
    explicit qFileDialogOperation(QWidget *parent = nullptr);
    ~qFileDialogOperation();


private slots:
    void on_btnOpenFile_clicked();

private:
    Ui::qFileDialogOperation *ui;
};

#endif // QFILEDIALOGOPERATION_H
