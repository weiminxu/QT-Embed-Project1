/********************************************************************************
** Form generated from reading UI file 'qfiledialogoperation2.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFILEDIALOGOPERATION2_H
#define UI_QFILEDIALOGOPERATION2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qFileDialogOperation2
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qFileDialogOperation2)
    {
        if (qFileDialogOperation2->objectName().isEmpty())
            qFileDialogOperation2->setObjectName(QString::fromUtf8("qFileDialogOperation2"));
        qFileDialogOperation2->resize(400, 300);
        centralWidget = new QWidget(qFileDialogOperation2);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 20, 113, 32));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 20, 113, 32));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(50, 60, 291, 151));
        qFileDialogOperation2->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qFileDialogOperation2);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        qFileDialogOperation2->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qFileDialogOperation2);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        qFileDialogOperation2->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(qFileDialogOperation2);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        qFileDialogOperation2->setStatusBar(statusBar);

        retranslateUi(qFileDialogOperation2);

        QMetaObject::connectSlotsByName(qFileDialogOperation2);
    } // setupUi

    void retranslateUi(QMainWindow *qFileDialogOperation2)
    {
        qFileDialogOperation2->setWindowTitle(QCoreApplication::translate("qFileDialogOperation2", "qFileDialogOperation2", nullptr));
        pushButton->setText(QCoreApplication::translate("qFileDialogOperation2", "open file", nullptr));
        pushButton_2->setText(QCoreApplication::translate("qFileDialogOperation2", "save file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qFileDialogOperation2: public Ui_qFileDialogOperation2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFILEDIALOGOPERATION2_H
