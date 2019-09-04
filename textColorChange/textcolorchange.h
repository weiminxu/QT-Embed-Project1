#ifndef TEXTCOLORCHANGE_H
#define TEXTCOLORCHANGE_H

#include <QWidget>
#include <QColor>
#include <QString>

namespace Ui {
class textColorChange;
}

class textColorChange : public QWidget
{
    Q_OBJECT

public:
    explicit textColorChange(QWidget *parent = nullptr);
    ~textColorChange();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::textColorChange *ui;
    QColor NewColor;
    QString str;

};

#endif // TEXTCOLORCHANGE_H
