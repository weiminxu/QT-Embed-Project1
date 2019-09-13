#ifndef QFILEDIALOGOPERATION2_H
#define QFILEDIALOGOPERATION2_H

#include <QMainWindow>

namespace Ui {
class qFileDialogOperation2;
}

class qFileDialogOperation2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit qFileDialogOperation2(QWidget *parent = nullptr);
    ~qFileDialogOperation2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::qFileDialogOperation2 *ui;
};

#endif // QFILEDIALOGOPERATION2_H
