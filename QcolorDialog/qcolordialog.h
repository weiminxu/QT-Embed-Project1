#ifndef QCOLORDIALOG_H
#define QCOLORDIALOG_H

#include <QWidget>

namespace Ui {
class QcolorDialog;
}

class QcolorDialog : public QWidget
{
    Q_OBJECT

public:
    explicit QcolorDialog(QWidget *parent = nullptr);
    ~QcolorDialog();

private:
    Ui::QcolorDialog *ui;
};

#endif // QCOLORDIALOG_H
