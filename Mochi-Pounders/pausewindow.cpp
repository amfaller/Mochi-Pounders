#include "pausewindow.h"
#include "ui_pausewindow.h"

#include "mainmenu.h"

pausewindow::pausewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pausewindow)
{
    ui->setupUi(this);
}

pausewindow::~pausewindow()
{
    delete ui;
}

void pausewindow::on_button_resume_clicked()
{
    // Hide the pause window
    emit go();
    hide();
}

void pausewindow::on_button_main_menu_clicked()
{
    MainMenu mainMenu;

    // Tell the game window to cleanup
    emit cleanup();

    // Hide the pause window
    hide();

//    // Show the main menu window
//    mainMenu.setModal(true);
//    mainMenu.exec();
}
