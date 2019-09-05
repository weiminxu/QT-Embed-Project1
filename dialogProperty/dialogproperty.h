#ifndef DIALOGPROPERTY_H
#define DIALOGPROPERTY_H

#include <QMainWindow>
#include <QMessageBox>


namespace Ui {
class dialogProperty;
}

class dialogProperty : public QMainWindow
{
    Q_OBJECT

public:
    explicit dialogProperty(QWidget *parent = nullptr);
    ~dialogProperty();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dialogProperty *ui;
    QMessageBox *qmb;
};

#endif // DIALOGPROPERTY_H
