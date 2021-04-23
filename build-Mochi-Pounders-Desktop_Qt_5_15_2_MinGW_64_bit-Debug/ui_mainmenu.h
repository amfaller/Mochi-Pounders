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
    QLabel *Background;
    QPushButton *button_exit;

    void setupUi(QDialog *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->resize(480, 272);
        button_2player = new QPushButton(MainMenu);
        button_2player->setObjectName(QString::fromUtf8("button_2player"));
        button_2player->setGeometry(QRect(180, 100, 120, 100));
        button_settings = new QPushButton(MainMenu);
        button_settings->setObjectName(QString::fromUtf8("button_settings"));
        button_settings->setGeometry(QRect(410, 0, 70, 70));
        QFont font;
        font.setPointSize(7);
        button_settings->setFont(font);
        button_help = new QPushButton(MainMenu);
        button_help->setObjectName(QString::fromUtf8("button_help"));
        button_help->setGeometry(QRect(0, 0, 70, 70));
        button_help->setFont(font);
        button_credits = new QPushButton(MainMenu);
        button_credits->setObjectName(QString::fromUtf8("button_credits"));
        button_credits->setGeometry(QRect(410, 202, 70, 70));
        button_credits->setFont(font);
        label = new QLabel(MainMenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 5, 340, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Castellar"));
        font1.setPointSize(22);
        label->setFont(font1);
        Background = new QLabel(MainMenu);
        Background->setObjectName(QString::fromUtf8("Background"));
        Background->setGeometry(QRect(0, 0, 480, 272));
        button_exit = new QPushButton(MainMenu);
        button_exit->setObjectName(QString::fromUtf8("button_exit"));
        button_exit->setGeometry(QRect(15, 222, 40, 40));
        button_exit->setFont(font);
        Background->raise();
        button_2player->raise();
        button_settings->raise();
        button_help->raise();
        button_credits->raise();
        label->raise();
        button_exit->raise();

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
        label->setText(QCoreApplication::translate("MainMenu", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Mochi Pounders</span></p></body></html>", nullptr));
        Background->setText(QString());
        button_exit->setText(QCoreApplication::translate("MainMenu", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
