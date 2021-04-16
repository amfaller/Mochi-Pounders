#include "settings.h"
#include "ui_settings.h"

int userTime_settings;

settings::settings(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
}

settings::~settings()
{
    delete ui;
}

void settings::on_slider_time_valueChanged(int value)
{
    ui->number_time->display(value);
    userTime_settings = value;
}

void settings::on_button_back_clicked()
{
    MainMenu mainMenu;

    // Hide the credits window
    hide();

    // Send the time value to the main window
    emit sendTime_settings(userTime_settings);
}
