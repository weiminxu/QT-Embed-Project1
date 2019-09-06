/********************************************************************************
** Form generated from reading UI file 'mouseevent.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUSEEVENT_H
#define UI_MOUSEEVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mouseEvent
{
public:

    void setupUi(QWidget *mouseEvent)
    {
        if (mouseEvent->objectName().isEmpty())
            mouseEvent->setObjectName(QString::fromUtf8("mouseEvent"));
        mouseEvent->resize(400, 300);

        retranslateUi(mouseEvent);

        QMetaObject::connectSlotsByName(mouseEvent);
    } // setupUi

    void retranslateUi(QWidget *mouseEvent)
    {
        mouseEvent->setWindowTitle(QCoreApplication::translate("mouseEvent", "mouseEvent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mouseEvent: public Ui_mouseEvent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUSEEVENT_H
