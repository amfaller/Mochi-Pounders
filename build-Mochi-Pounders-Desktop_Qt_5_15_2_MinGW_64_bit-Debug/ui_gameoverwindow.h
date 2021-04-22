/********************************************************************************
** Form generated from reading UI file 'gameoverwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVERWINDOW_H
#define UI_GAMEOVERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameOverWindow
{
public:
    QWidget *centralwidget;
    QLabel *Label_GameOver;
    QLCDNumber *ScoreFinal_Red;
    QLCDNumber *ScoreFinal_Blue;
    QPushButton *button_main_menu;
    QLabel *Label_WhoWon;
    QLabel *Background;

    void setupUi(QMainWindow *GameOverWindow)
    {
        if (GameOverWindow->objectName().isEmpty())
            GameOverWindow->setObjectName(QString::fromUtf8("GameOverWindow"));
        GameOverWindow->resize(480, 272);
        centralwidget = new QWidget(GameOverWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Label_GameOver = new QLabel(centralwidget);
        Label_GameOver->setObjectName(QString::fromUtf8("Label_GameOver"));
        Label_GameOver->setGeometry(QRect(150, -20, 281, 81));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        Label_GameOver->setFont(font);
        ScoreFinal_Red = new QLCDNumber(centralwidget);
        ScoreFinal_Red->setObjectName(QString::fromUtf8("ScoreFinal_Red"));
        ScoreFinal_Red->setGeometry(QRect(0, 0, 141, 201));
        ScoreFinal_Blue = new QLCDNumber(centralwidget);
        ScoreFinal_Blue->setObjectName(QString::fromUtf8("ScoreFinal_Blue"));
        ScoreFinal_Blue->setGeometry(QRect(340, 0, 141, 201));
        button_main_menu = new QPushButton(centralwidget);
        button_main_menu->setObjectName(QString::fromUtf8("button_main_menu"));
        button_main_menu->setGeometry(QRect(0, 200, 491, 75));
        Label_WhoWon = new QLabel(centralwidget);
        Label_WhoWon->setObjectName(QString::fromUtf8("Label_WhoWon"));
        Label_WhoWon->setEnabled(true);
        Label_WhoWon->setGeometry(QRect(150, 50, 181, 121));
        QFont font1;
        font1.setPointSize(10);
        Label_WhoWon->setFont(font1);
        Background = new QLabel(centralwidget);
        Background->setObjectName(QString::fromUtf8("Background"));
        Background->setGeometry(QRect(0, 0, 480, 272));
        GameOverWindow->setCentralWidget(centralwidget);
        Background->raise();
        Label_GameOver->raise();
        ScoreFinal_Red->raise();
        ScoreFinal_Blue->raise();
        button_main_menu->raise();
        Label_WhoWon->raise();

        retranslateUi(GameOverWindow);

        QMetaObject::connectSlotsByName(GameOverWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GameOverWindow)
    {
        GameOverWindow->setWindowTitle(QCoreApplication::translate("GameOverWindow", "MainWindow", nullptr));
        Label_GameOver->setText(QCoreApplication::translate("GameOverWindow", "Game Over!", nullptr));
        button_main_menu->setText(QCoreApplication::translate("GameOverWindow", "Main Menu", nullptr));
        Label_WhoWon->setText(QCoreApplication::translate("GameOverWindow", "<html><head/><body><p align=\"center\">We're all winners if we have fun :)</p></body></html>", nullptr));
        Background->setText(QCoreApplication::translate("GameOverWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameOverWindow: public Ui_GameOverWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVERWINDOW_H
