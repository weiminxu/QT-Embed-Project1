#include "mouseevent.h"
#include "ui_mouseevent.h"
#include <QDebug>
#include <QMouseEvent>

mouseEvent::mouseEvent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mouseEvent)
{
    ui->setupUi(this);

}

mouseEvent::~mouseEvent()
{
    delete ui;
}

void mouseEvent::mousePresseEvent(QMouseEvent *event)
{
    qDebug() << event->globalPos();
    qDebug() << event->windowPos();

}

void mouseEvent::mouseReleaseEvent(QMouseEvent *event)
{
    qDebug() << event->globalPos();
    qDebug() << event->windowPos();
    qDebug() << event->x();
    qDebug() << event->y();
    qDebug() << "hello";
}

void mouseEvent::mouseDoubleClickEvent(QMouseEvent *event)
{
    qDebug() << "-------------------------------------";
    qDebug() << event->globalPos();
    qDebug() << event->windowPos();
    qDebug() << event->x();
    qDebug() << event->y();
    qDebug() << "-------------------------------------";
}
