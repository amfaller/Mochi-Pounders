#ifndef PAUSEWINDOW_H
#define PAUSEWINDOW_H

#include <QDialog>

#include "mainwindow.h"

namespace Ui {
class pausewindow;
}

class pausewindow : public QDialog
{
    Q_OBJECT

public:
    explicit pausewindow(QWidget *parent = nullptr);
    ~pausewindow();

private slots:
    void on_button_resume_clicked();

private:
    Ui::pausewindow *ui;
};

#endif // PAUSEWINDOW_H
