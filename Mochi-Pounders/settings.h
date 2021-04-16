#ifndef SETTINGS_H
#define SETTINGS_H

#include <QMainWindow>

#include "mainmenu.h"

namespace Ui {
class settings;
}

class settings : public QMainWindow
{
    Q_OBJECT

public:
    explicit settings(QWidget *parent = nullptr);
    ~settings();

private slots:
    void on_slider_time_valueChanged(int value);

    void on_button_back_clicked();

private:
    Ui::settings *ui;
};

#endif // SETTINGS_H
