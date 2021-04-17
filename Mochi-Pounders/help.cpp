#include "help.h"
#include "ui_help.h"

help::help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::help)
{
    ui->setupUi(this);
}

help::~help()
{
    delete ui;
}

void help::on_button_back_clicked()
{
//    MainMenu mainMenu;

    // Hide the credits window
    hide();

    // Show the main menu window
//    mainMenu.setModal(true);
//    mainMenu.exec();
}
