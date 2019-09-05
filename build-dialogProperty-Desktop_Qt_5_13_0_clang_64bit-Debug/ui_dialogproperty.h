/********************************************************************************
** Form generated from reading UI file 'dialogproperty.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPROPERTY_H
#define UI_DIALOGPROPERTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogProperty
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *dialogProperty)
    {
        if (dialogProperty->objectName().isEmpty())
            dialogProperty->setObjectName(QString::fromUtf8("dialogProperty"));
        dialogProperty->resize(400, 300);
        centralWidget = new QWidget(dialogProperty);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 140, 113, 32));
        dialogProperty->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(dialogProperty);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        dialogProperty->setMenuBar(menuBar);
        mainToolBar = new QToolBar(dialogProperty);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        dialogProperty->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(dialogProperty);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        dialogProperty->setStatusBar(statusBar);

        retranslateUi(dialogProperty);

        QMetaObject::connectSlotsByName(dialogProperty);
    } // setupUi

    void retranslateUi(QMainWindow *dialogProperty)
    {
        dialogProperty->setWindowTitle(QCoreApplication::translate("dialogProperty", "dialogProperty", nullptr));
        pushButton->setText(QCoreApplication::translate("dialogProperty", "reminder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialogProperty: public Ui_dialogProperty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPROPERTY_H
