#include "settings.h"
#include "ui_settings.h"

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
}

void settings::on_button_back_clicked()
{
    MainMenu mainMenu;

    // Hide the credits window
    hide();

    // Show the main menu window
    mainMenu.setModal(true);
    mainMenu.exec();
}
