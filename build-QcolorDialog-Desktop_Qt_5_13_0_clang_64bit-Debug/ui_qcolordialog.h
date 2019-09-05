/********************************************************************************
** Form generated from reading UI file 'qcolordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCOLORDIALOG_H
#define UI_QCOLORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QcolorDialog
{
public:

    void setupUi(QWidget *QcolorDialog)
    {
        if (QcolorDialog->objectName().isEmpty())
            QcolorDialog->setObjectName(QString::fromUtf8("QcolorDialog"));
        QcolorDialog->resize(400, 300);

        retranslateUi(QcolorDialog);

        QMetaObject::connectSlotsByName(QcolorDialog);
    } // setupUi

    void retranslateUi(QWidget *QcolorDialog)
    {
        QcolorDialog->setWindowTitle(QCoreApplication::translate("QcolorDialog", "QcolorDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QcolorDialog: public Ui_QcolorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCOLORDIALOG_H
