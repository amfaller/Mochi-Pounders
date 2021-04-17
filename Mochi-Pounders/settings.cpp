#include "settings.h"
#include "ui_settings.h"

int userTime_settings;

settings::settings(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);

    // Set initial slider position
    ui->slider_time->setSliderPosition(60);
}

settings::~settings()
{
    delete ui;
}

void settings::on_slider_time_valueChanged(int value)
{
    ui->number_time->display(value);
    userTime_settings = value;
    emit sendTime_settings(userTime_settings, 0);
}

void settings::on_button_back_clicked()
{
    // Send the time value to the main window
    emit sendTime_settings(userTime_settings, 1);

    // Hide the credits window
    hide();
}
