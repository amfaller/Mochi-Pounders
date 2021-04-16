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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_settingsmenu
{
public:
    QPushButton *button_back;
    QSlider *slider_time;
    QLabel *label_time;
    QLCDNumber *number_time;

    void setupUi(QDialog *settingsmenu)
    {
        if (settingsmenu->objectName().isEmpty())
            settingsmenu->setObjectName(QString::fromUtf8("settingsmenu"));
        settingsmenu->resize(480, 272);
        button_back = new QPushButton(settingsmenu);
        button_back->setObjectName(QString::fromUtf8("button_back"));
        button_back->setGeometry(QRect(0, 200, 75, 75));
        slider_time = new QSlider(settingsmenu);
        slider_time->setObjectName(QString::fromUtf8("slider_time"));
        slider_time->setGeometry(QRect(100, 50, 231, 51));
        slider_time->setOrientation(Qt::Horizontal);
        label_time = new QLabel(settingsmenu);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(180, 10, 141, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_time->setFont(font);
        number_time = new QLCDNumber(settingsmenu);
        number_time->setObjectName(QString::fromUtf8("number_time"));
        number_time->setGeometry(QRect(370, 60, 64, 23));

        retranslateUi(settingsmenu);

        QMetaObject::connectSlotsByName(settingsmenu);
    } // setupUi

    void retranslateUi(QDialog *settingsmenu)
    {
        settingsmenu->setWindowTitle(QCoreApplication::translate("settingsmenu", "Dialog", nullptr));
        button_back->setText(QCoreApplication::translate("settingsmenu", "Back", nullptr));
        label_time->setText(QCoreApplication::translate("settingsmenu", "Time Limit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settingsmenu: public Ui_settingsmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSMENU_H
