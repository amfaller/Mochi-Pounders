/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *HammerButton_Red;
    QPushButton *HammerButton_Blue;
    QLCDNumber *ScoreCounter_Red;
    QLCDNumber *ScoreCounter_Blue;
    QLCDNumber *TimeCounter;
    QPushButton *PauseButton;
    QLabel *Mochi;
    QLabel *Background;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 272);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        HammerButton_Red = new QPushButton(centralwidget);
        HammerButton_Red->setObjectName(QString::fromUtf8("HammerButton_Red"));
        HammerButton_Red->setGeometry(QRect(0, 100, 100, 100));
        HammerButton_Blue = new QPushButton(centralwidget);
        HammerButton_Blue->setObjectName(QString::fromUtf8("HammerButton_Blue"));
        HammerButton_Blue->setGeometry(QRect(380, 100, 100, 100));
        ScoreCounter_Red = new QLCDNumber(centralwidget);
        ScoreCounter_Red->setObjectName(QString::fromUtf8("ScoreCounter_Red"));
        ScoreCounter_Red->setGeometry(QRect(0, 0, 71, 81));
        ScoreCounter_Blue = new QLCDNumber(centralwidget);
        ScoreCounter_Blue->setObjectName(QString::fromUtf8("ScoreCounter_Blue"));
        ScoreCounter_Blue->setGeometry(QRect(410, 0, 71, 81));
        TimeCounter = new QLCDNumber(centralwidget);
        TimeCounter->setObjectName(QString::fromUtf8("TimeCounter"));
        TimeCounter->setGeometry(QRect(190, 0, 100, 51));
        TimeCounter->setSegmentStyle(QLCDNumber::Filled);
        PauseButton = new QPushButton(centralwidget);
        PauseButton->setObjectName(QString::fromUtf8("PauseButton"));
        PauseButton->setGeometry(QRect(215, 222, 50, 50));
        Mochi = new QLabel(centralwidget);
        Mochi->setObjectName(QString::fromUtf8("Mochi"));
        Mochi->setGeometry(QRect(165, 60, 150, 150));
        Background = new QLabel(centralwidget);
        Background->setObjectName(QString::fromUtf8("Background"));
        Background->setGeometry(QRect(0, 0, 480, 272));
        MainWindow->setCentralWidget(centralwidget);
        Background->raise();
        HammerButton_Red->raise();
        HammerButton_Blue->raise();
        ScoreCounter_Red->raise();
        ScoreCounter_Blue->raise();
        TimeCounter->raise();
        PauseButton->raise();
        Mochi->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        HammerButton_Red->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        HammerButton_Blue->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        PauseButton->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        Mochi->setText(QString());
        Background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
