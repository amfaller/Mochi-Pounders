#ifndef SETTINGSMENU_H
#define SETTINGSMENU_H

#include <QDialog>

#include "mainmenu.h"

namespace Ui {
class settingsmenu;
}

class settingsmenu : public QDialog
{
    Q_OBJECT

public:
    explicit settingsmenu(QWidget *parent = nullptr);
    ~settingsmenu();

private slots:
    void on_button_back_clicked();

private:
    Ui::settingsmenu *ui;
};

#endif // SETTINGSMENU_H
