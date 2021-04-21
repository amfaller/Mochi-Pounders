#ifndef CREDITS_H
#define CREDITS_H

#include <QDialog>

#include "mainmenu.h"

namespace Ui {
class credits;
}

class credits : public QDialog
{
    Q_OBJECT

public:
    explicit credits(QWidget *parent = nullptr);
    ~credits();

private slots:
    void on_button_back_clicked();

private:
    Ui::credits *ui;
};

#endif // CREDITS_H
