#ifndef TEXTCOLORCHANGE_H
#define TEXTCOLORCHANGE_H

#include <QWidget>

namespace Ui {
class textColorChange;
}

class textColorChange : public QWidget
{
    Q_OBJECT

public:
    explicit textColorChange(QWidget *parent = nullptr);
    ~textColorChange();

private:
    Ui::textColorChange *ui;
};

#endif // TEXTCOLORCHANGE_H
