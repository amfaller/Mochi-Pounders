/********************************************************************************
** Form generated from reading UI file 'pausewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAUSEWINDOW_H
#define UI_PAUSEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pausewindow
{
public:
    QPushButton *button_resume;
    QPushButton *button_main_menu;

    void setupUi(QDialog *pausewindow)
    {
        if (pausewindow->objectName().isEmpty())
            pausewindow->setObjectName(QString::fromUtf8("pausewindow"));
        pausewindow->resize(480, 272);
        button_resume = new QPushButton(pausewindow);
        button_resume->setObjectName(QString::fromUtf8("button_resume"));
        button_resume->setGeometry(QRect(40, 70, 161, 131));
        button_main_menu = new QPushButton(pausewindow);
        button_main_menu->setObjectName(QString::fromUtf8("button_main_menu"));
        button_main_menu->setGeometry(QRect(260, 70, 161, 131));

        retranslateUi(pausewindow);

        QMetaObject::connectSlotsByName(pausewindow);
    } // setupUi

    void retranslateUi(QDialog *pausewindow)
    {
        pausewindow->setWindowTitle(QCoreApplication::translate("pausewindow", "Dialog", nullptr));
        button_resume->setText(QCoreApplication::translate("pausewindow", "Resume", nullptr));
        button_main_menu->setText(QCoreApplication::translate("pausewindow", "Main Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pausewindow: public Ui_pausewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAUSEWINDOW_H
