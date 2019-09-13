/********************************************************************************
** Form generated from reading UI file 'qfiledialogoperation.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFILEDIALOGOPERATION_H
#define UI_QFILEDIALOGOPERATION_H

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

class Ui_qFileDialogOperation
{
public:
    QWidget *centralWidget;
    QPushButton *btnOpenFile;
    QPushButton *btnSaveFile;
    QTextEdit *textEdit1;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qFileDialogOperation)
    {
        if (qFileDialogOperation->objectName().isEmpty())
            qFileDialogOperation->setObjectName(QString::fromUtf8("qFileDialogOperation"));
        qFileDialogOperation->resize(400, 300);
        centralWidget = new QWidget(qFileDialogOperation);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btnOpenFile = new QPushButton(centralWidget);
        btnOpenFile->setObjectName(QString::fromUtf8("btnOpenFile"));
        btnOpenFile->setGeometry(QRect(60, 30, 113, 32));
        btnSaveFile = new QPushButton(centralWidget);
        btnSaveFile->setObjectName(QString::fromUtf8("btnSaveFile"));
        btnSaveFile->setGeometry(QRect(220, 30, 113, 32));
        textEdit1 = new QTextEdit(centralWidget);
        textEdit1->setObjectName(QString::fromUtf8("textEdit1"));
        textEdit1->setGeometry(QRect(70, 70, 251, 141));
        qFileDialogOperation->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qFileDialogOperation);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        qFileDialogOperation->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qFileDialogOperation);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        qFileDialogOperation->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(qFileDialogOperation);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        qFileDialogOperation->setStatusBar(statusBar);

        retranslateUi(qFileDialogOperation);

        QMetaObject::connectSlotsByName(qFileDialogOperation);
    } // setupUi

    void retranslateUi(QMainWindow *qFileDialogOperation)
    {
        qFileDialogOperation->setWindowTitle(QCoreApplication::translate("qFileDialogOperation", "qFileDialogOperation", nullptr));
        btnOpenFile->setText(QCoreApplication::translate("qFileDialogOperation", "open file", nullptr));
        btnSaveFile->setText(QCoreApplication::translate("qFileDialogOperation", "save file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qFileDialogOperation: public Ui_qFileDialogOperation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFILEDIALOGOPERATION_H
