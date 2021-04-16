#include "credits.h"
#include "ui_credits.h"

credits::credits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::credits)
{
    ui->setupUi(this);
}

credits::~credits()
{
    delete ui;
}

void credits::on_button_back_clicked()
{
    MainMenu mainMenu;

    // Hide the credits window
    hide();

    // Show the main menu window
    mainMenu.setModal(true);
    mainMenu.exec();
}
