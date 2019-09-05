/********************************************************************************
** Form generated from reading UI file 'dialogcolorchange.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCOLORCHANGE_H
#define UI_DIALOGCOLORCHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogColorChange
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *dialogColorChange)
    {
        if (dialogColorChange->objectName().isEmpty())
            dialogColorChange->setObjectName(QString::fromUtf8("dialogColorChange"));
        dialogColorChange->resize(400, 300);
        centralWidget = new QWidget(dialogColorChange);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 130, 113, 32));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 301, 71));
        dialogColorChange->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(dialogColorChange);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        dialogColorChange->setMenuBar(menuBar);
        mainToolBar = new QToolBar(dialogColorChange);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        dialogColorChange->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(dialogColorChange);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        dialogColorChange->setStatusBar(statusBar);

        retranslateUi(dialogColorChange);

        QMetaObject::connectSlotsByName(dialogColorChange);
    } // setupUi

    void retranslateUi(QMainWindow *dialogColorChange)
    {
        dialogColorChange->setWindowTitle(QCoreApplication::translate("dialogColorChange", "dialogColorChange", nullptr));
        pushButton->setText(QCoreApplication::translate("dialogColorChange", "Color Change", nullptr));
        label->setText(QCoreApplication::translate("dialogColorChange", "this dialog is used to change the TextLabel color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialogColorChange: public Ui_dialogColorChange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCOLORCHANGE_H
