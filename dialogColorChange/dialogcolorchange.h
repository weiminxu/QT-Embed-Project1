#ifndef DIALOGCOLORCHANGE_H
#define DIALOGCOLORCHANGE_H

#include <QMainWindow>

namespace Ui {
class dialogColorChange;
}

class dialogColorChange : public QMainWindow
{
    Q_OBJECT

public:
    explicit dialogColorChange(QWidget *parent = nullptr);
    ~dialogColorChange();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dialogColorChange *ui;
};

#endif // DIALOGCOLORCHANGE_H
