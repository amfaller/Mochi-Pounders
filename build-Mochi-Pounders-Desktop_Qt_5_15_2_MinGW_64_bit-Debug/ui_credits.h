/********************************************************************************
** Form generated from reading UI file 'credits.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITS_H
#define UI_CREDITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_credits
{
public:
    QPushButton *button_back;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *credits)
    {
        if (credits->objectName().isEmpty())
            credits->setObjectName(QString::fromUtf8("credits"));
        credits->resize(480, 272);
        button_back = new QPushButton(credits);
        button_back->setObjectName(QString::fromUtf8("button_back"));
        button_back->setGeometry(QRect(0, 200, 75, 75));
        textBrowser = new QTextBrowser(credits);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 480, 272));
        textBrowser->raise();
        button_back->raise();

        retranslateUi(credits);

        QMetaObject::connectSlotsByName(credits);
    } // setupUi

    void retranslateUi(QDialog *credits)
    {
        credits->setWindowTitle(QCoreApplication::translate("credits", "Dialog", nullptr));
        button_back->setText(QCoreApplication::translate("credits", "Back", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("credits", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">Mochi Pounders Version 0.75</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600; color:#ffffff;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#ffffff;\"><br /></p>\n"
"<p align=\"cente"
                        "r\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">Mochi Pounders was created by Tony Faller (amfaller@bu.edu) for Boston University's EC535: Introduction to Embedded Systems course. It is based on the browser-based game Mole Hammers, which sadly is no longer playable on many systems because Flash is no longer supported.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#ffffff;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#ffffff;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">See the README.md in the gam"
                        "e's Github repo (</span><a href=\"https://github.com/amfaller/Mochi-Pounders.git\"><span style=\" font-size:8pt; text-decoration: underline; color:#ffffff;\">https://github.com/amfaller/Mochi-Pounders.git</span></a><span style=\" color:#ffffff;\">) for a full list of sources.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class credits: public Ui_credits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITS_H
