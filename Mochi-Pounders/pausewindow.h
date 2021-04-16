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

signals:
    void go ();         // Signal from pauseWindow to MainWindow to resume timer
    void cleanup ();    // Signal to tell MainWindow that the user has gone to MainMenu

private slots:
    void on_button_resume_clicked();

    void on_button_main_menu_clicked();

private:
    Ui::pausewindow *ui;
};

#endif // PAUSEWINDOW_H
