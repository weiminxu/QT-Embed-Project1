/********************************************************************************
** Form generated from reading UI file 'textcolorchange.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTCOLORCHANGE_H
#define UI_TEXTCOLORCHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_textColorChange
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;

    void setupUi(QWidget *textColorChange)
    {
        if (textColorChange->objectName().isEmpty())
            textColorChange->setObjectName(QString::fromUtf8("textColorChange"));
        textColorChange->resize(414, 325);
        pushButton = new QPushButton(textColorChange);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 230, 113, 32));
        textEdit = new QTextEdit(textColorChange);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(110, 40, 171, 141));
        pushButton_2 = new QPushButton(textColorChange);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 230, 113, 32));

        retranslateUi(textColorChange);

        QMetaObject::connectSlotsByName(textColorChange);
    } // setupUi

    void retranslateUi(QWidget *textColorChange)
    {
        textColorChange->setWindowTitle(QCoreApplication::translate("textColorChange", "textColorChange", nullptr));
        pushButton->setText(QCoreApplication::translate("textColorChange", "chanColor", nullptr));
        pushButton_2->setText(QCoreApplication::translate("textColorChange", "inputText", nullptr));
    } // retranslateUi

};

namespace Ui {
    class textColorChange: public Ui_textColorChange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTCOLORCHANGE_H
