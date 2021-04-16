/********************************************************************************
** Form generated from reading UI file 'settingsmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSMENU_H
#define UI_SETTINGSMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_settingsmenu
{
public:
    QPushButton *button_back;

    void setupUi(QDialog *settingsmenu)
    {
        if (settingsmenu->objectName().isEmpty())
            settingsmenu->setObjectName(QString::fromUtf8("settingsmenu"));
        settingsmenu->resize(480, 272);
        button_back = new QPushButton(settingsmenu);
        button_back->setObjectName(QString::fromUtf8("button_back"));
        button_back->setGeometry(QRect(0, 200, 75, 75));

        retranslateUi(settingsmenu);

        QMetaObject::connectSlotsByName(settingsmenu);
    } // setupUi

    void retranslateUi(QDialog *settingsmenu)
    {
        settingsmenu->setWindowTitle(QCoreApplication::translate("settingsmenu", "Dialog", nullptr));
        button_back->setText(QCoreApplication::translate("settingsmenu", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settingsmenu: public Ui_settingsmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSMENU_H
