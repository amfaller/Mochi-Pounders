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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        HammerButton_Red = new QPushButton(centralwidget);
        HammerButton_Red->setObjectName(QString::fromUtf8("HammerButton_Red"));
        HammerButton_Red->setGeometry(QRect(0, 80, 71, 481));
        HammerButton_Blue = new QPushButton(centralwidget);
        HammerButton_Blue->setObjectName(QString::fromUtf8("HammerButton_Blue"));
        HammerButton_Blue->setGeometry(QRect(730, 80, 75, 481));
        ScoreCounter_Red = new QLCDNumber(centralwidget);
        ScoreCounter_Red->setObjectName(QString::fromUtf8("ScoreCounter_Red"));
        ScoreCounter_Red->setGeometry(QRect(0, 0, 71, 81));
        ScoreCounter_Blue = new QLCDNumber(centralwidget);
        ScoreCounter_Blue->setObjectName(QString::fromUtf8("ScoreCounter_Blue"));
        ScoreCounter_Blue->setGeometry(QRect(730, 0, 71, 81));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        HammerButton_Red->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        HammerButton_Blue->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
