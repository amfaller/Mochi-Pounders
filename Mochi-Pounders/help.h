#ifndef HELP_H
#define HELP_H

#include <QDialog>

#include "mainmenu.h"

namespace Ui {
class help;
}

class help : public QDialog
{
    Q_OBJECT

public:
    explicit help(QWidget *parent = nullptr);
    ~help();

private slots:
    void on_button_back_clicked();

private:
    Ui::help *ui;
};

#endif // HELP_H
