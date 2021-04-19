/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QWidget *centralwidget;
    QPushButton *button_back;
    QSlider *slider_time;
    QLCDNumber *number_time;
    QLabel *label;
    QLabel *label_score;
    QLCDNumber *number_score;
    QSlider *slider_score;
    QPushButton *button_defaults;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QString::fromUtf8("settings"));
        settings->resize(480, 272);
        centralwidget = new QWidget(settings);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        button_back = new QPushButton(centralwidget);
        button_back->setObjectName(QString::fromUtf8("button_back"));
        button_back->setGeometry(QRect(0, 180, 75, 75));
        slider_time = new QSlider(centralwidget);
        slider_time->setObjectName(QString::fromUtf8("slider_time"));
        slider_time->setGeometry(QRect(100, 70, 160, 22));
        slider_time->setOrientation(Qt::Horizontal);
        number_time = new QLCDNumber(centralwidget);
        number_time->setObjectName(QString::fromUtf8("number_time"));
        number_time->setGeometry(QRect(320, 70, 64, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 20, 181, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_score = new QLabel(centralwidget);
        label_score->setObjectName(QString::fromUtf8("label_score"));
        label_score->setGeometry(QRect(160, 110, 181, 41));
        label_score->setFont(font);
        number_score = new QLCDNumber(centralwidget);
        number_score->setObjectName(QString::fromUtf8("number_score"));
        number_score->setGeometry(QRect(320, 160, 64, 23));
        slider_score = new QSlider(centralwidget);
        slider_score->setObjectName(QString::fromUtf8("slider_score"));
        slider_score->setGeometry(QRect(100, 160, 160, 22));
        slider_score->setOrientation(Qt::Horizontal);
        button_defaults = new QPushButton(centralwidget);
        button_defaults->setObjectName(QString::fromUtf8("button_defaults"));
        button_defaults->setGeometry(QRect(410, 180, 75, 75));
        settings->setCentralWidget(centralwidget);
        slider_time->raise();
        number_time->raise();
        button_back->raise();
        label->raise();
        label_score->raise();
        number_score->raise();
        slider_score->raise();
        button_defaults->raise();
        menubar = new QMenuBar(settings);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 480, 21));
        settings->setMenuBar(menubar);
        statusbar = new QStatusBar(settings);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        settings->setStatusBar(statusbar);

        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QMainWindow *settings)
    {
        settings->setWindowTitle(QCoreApplication::translate("settings", "MainWindow", nullptr));
        button_back->setText(QCoreApplication::translate("settings", "Back", nullptr));
        label->setText(QCoreApplication::translate("settings", "Time Limit", nullptr));
        label_score->setText(QCoreApplication::translate("settings", "Score Limit", nullptr));
        button_defaults->setText(QCoreApplication::translate("settings", "Defaults", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
