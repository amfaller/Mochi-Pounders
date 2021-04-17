#include "mainmenu.h"
#include "ui_mainmenu.h"

#include <iostream>

int userTime_mainMenu;

MainMenu::MainMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);

    // Create the settings window
    settingsMenu = new class settings();

    // Connect the settings window's sendTime signal to the grab_time slot here
    QObject::connect(settingsMenu, SIGNAL(sendTime_settings(int, int)), this, SLOT(grab_time_from_settings(int, int)));

    // Create the game window
    gameWindow = new MainWindow();
}

MainMenu::~MainMenu()
{
    delete ui;
}

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Gameplay Slots /////////////////////////////////////////////////////////////////////////////////////

void MainMenu::on_button_2player_clicked()
{


    // Hide the main menu
//    this->hide();

    // Connect the game window's show_main_menu signal to the show_main_menu slot here
    QObject::connect(gameWindow, SIGNAL(show_main_menu()), this, SLOT(show_main_menu()));

    // Show the game window
    gameWindow->show();
}

void MainMenu::show_main_menu()
{
    show();
}

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Credits Slots //////////////////////////////////////////////////////////////////////////////////////

void MainMenu::on_button_credits_clicked()
{
    class credits creditsScreen;

    // Hide the main menu window
//    hide();

    // Show the credits window
    creditsScreen.setModal(true);
    creditsScreen.exec();
}

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Help Slots /////////////////////////////////////////////////////////////////////////////////////////

void MainMenu::on_button_help_clicked()
{
    class help helpScreen;

    // Hide the main menu window
//    hide();

    // Show the help window
    helpScreen.setModal(true);
    helpScreen.exec();
}

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Settings Slots /////////////////////////////////////////////////////////////////////////////////////

void MainMenu::on_button_settings_clicked()
{
    // Hide the main menu window (has to happen bc main menu is a dialog and settings is a window)
    hide();


    // Show the settings window
    settingsMenu->show();
}

/* Slot to grab the time value from the settings menu */
void MainMenu::grab_time_from_settings(int value, int exit)
{
    if(exit)
        show();

    userTime_mainMenu = value;
    std::cout << "Received value from settings window: " << userTime_mainMenu << "    Exited: " << exit << std::endl;
}
