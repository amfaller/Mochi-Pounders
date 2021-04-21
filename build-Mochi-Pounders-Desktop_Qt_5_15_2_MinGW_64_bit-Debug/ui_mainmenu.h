/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QPushButton *button_2player;
    QPushButton *button_settings;
    QPushButton *button_help;
    QPushButton *button_credits;
    QLabel *label;

    void setupUi(QDialog *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->resize(480, 272);
        button_2player = new QPushButton(MainMenu);
        button_2player->setObjectName(QString::fromUtf8("button_2player"));
        button_2player->setGeometry(QRect(170, 110, 121, 101));
        button_settings = new QPushButton(MainMenu);
        button_settings->setObjectName(QString::fromUtf8("button_settings"));
        button_settings->setGeometry(QRect(410, 0, 71, 61));
        QFont font;
        font.setPointSize(7);
        button_settings->setFont(font);
        button_help = new QPushButton(MainMenu);
        button_help->setObjectName(QString::fromUtf8("button_help"));
        button_help->setGeometry(QRect(0, 0, 71, 61));
        button_help->setFont(font);
        button_credits = new QPushButton(MainMenu);
        button_credits->setObjectName(QString::fromUtf8("button_credits"));
        button_credits->setGeometry(QRect(410, 210, 71, 61));
        button_credits->setFont(font);
        label = new QLabel(MainMenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 271, 71));
        QFont font1;
        font1.setPointSize(24);
        label->setFont(font1);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QDialog *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "Dialog", nullptr));
        button_2player->setText(QCoreApplication::translate("MainMenu", "Play", nullptr));
        button_settings->setText(QCoreApplication::translate("MainMenu", "Settings", nullptr));
        button_help->setText(QCoreApplication::translate("MainMenu", "?", nullptr));
        button_credits->setText(QCoreApplication::translate("MainMenu", "Credits", nullptr));
        label->setText(QCoreApplication::translate("MainMenu", "Mochi Pounders", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
