#ifndef DIALOGPROPERTY_H
#define DIALOGPROPERTY_H

#include <QMainWindow>

namespace Ui {
class dialogProperty;
}

class dialogProperty : public QMainWindow
{
    Q_OBJECT

public:
    explicit dialogProperty(QWidget *parent = nullptr);
    ~dialogProperty();

private:
    Ui::dialogProperty *ui;
};

#endif // DIALOGPROPERTY_H
