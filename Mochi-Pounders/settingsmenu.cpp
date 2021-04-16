#include "settingsmenu.h"
#include "ui_settingsmenu.h"

settingsmenu::settingsmenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingsmenu)
{
    ui->setupUi(this);
}

settingsmenu::~settingsmenu()
{
    delete ui;
}

void settingsmenu::on_button_back_clicked()
{
    MainMenu mainMenu;

    // Hide the credits window
    hide();

    // Show the main menu window
    mainMenu.setModal(true);
    mainMenu.exec();
}
