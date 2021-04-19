#include "settings.h"
#include "ui_settings.h"

int userTime_settings = 60;
int userScore_settings = 99;

settings::settings(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);

    // Set initial slider positions
    ui->slider_time->setSliderPosition(60);
    ui->slider_score->setSliderPosition(99);
}

settings::~settings()
{
    delete ui;
}

void settings::on_slider_time_valueChanged(int value)
{
    ui->number_time->display(value);
    userTime_settings = value;
    emit sendTime_settings(userTime_settings, userScore_settings, 0);
}

void settings::on_button_back_clicked()
{
    // Send the time value to the main window
    userTime_settings = ui->slider_time->value();
    userScore_settings = ui->slider_score->value();
    emit sendTime_settings(userTime_settings, userScore_settings, 1);

    // Hide the credits window
    hide();
}

void settings::on_slider_score_valueChanged(int value)
{
    ui->number_score->display(value);
    userScore_settings = value;
    emit sendTime_settings(userTime_settings, userScore_settings, 0);
}
