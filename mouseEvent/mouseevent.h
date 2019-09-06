#ifndef MOUSEEVENT_H
#define MOUSEEVENT_H

#include <QWidget>

namespace Ui {
class mouseEvent;
}

class mouseEvent : public QWidget
{
    Q_OBJECT

public:
    explicit mouseEvent(QWidget *parent = nullptr);
    ~mouseEvent();

protected:
    void mousePresseEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void mouseDoubleClickEvent(QMouseEvent *);
private:
    Ui::mouseEvent *ui;
};

#endif // MOUSEEVENT_H
