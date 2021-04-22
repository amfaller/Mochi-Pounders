#include "mainmenu.h"
#include "ui_mainmenu.h"

#include <iostream>

int userTime_mainMenu = 60;
int userScore_mainMenu = 99;

MainMenu::MainMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);

    // Create the settings window
    settingsMenu = new class settings();

    // Connect the settings window's sendTime signal to the grab_time slot here
    QObject::connect(settingsMenu, SIGNAL(sendTime_settings(int,int,int)), this, SLOT(grab_time_from_settings(int,int,int)));

    // Background
    QPixmap background(":/images/Generic_Background.png");
    ui->Background->setPixmap(background);
    ui->Background->setScaledContents(true);
}

MainMenu::~MainMenu()
{
    delete ui;
}

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Gameplay Slots /////////////////////////////////////////////////////////////////////////////////////

void MainMenu::on_button_2player_clicked()
{
    // Create the game window
    gameWindow = new MainWindow();

    // Connect the game window's show_main_menu signal to the show_main_menu slot here
    QObject::connect(gameWindow, SIGNAL(show_main_menu()), this, SLOT(show_main_menu()));

    // Connect the main menu's sendTime_mainMenu signal to the changeTime_game slot in gameWindow
    QObject::connect(this, SIGNAL(sendTime_mainMenu(int,int)), gameWindow, SLOT(changeTime_game(int,int)));

    // Send the user time to the game window
    emit sendTime_mainMenu(userTime_mainMenu, userScore_mainMenu);

    // Show the game window
    gameWindow->show();
}

void MainMenu::show_main_menu()
{
    // Clean up old game window
    delete gameWindow;

    // Show the main menu
    show();
}

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Credits Slots //////////////////////////////////////////////////////////////////////////////////////

void MainMenu::on_button_credits_clicked()
{
    class credits creditsScreen;

    // Show the credits window
    creditsScreen.setModal(true);
    creditsScreen.exec();
}

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Help Slots /////////////////////////////////////////////////////////////////////////////////////////

void MainMenu::on_button_help_clicked()
{
    class help helpScreen;

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
void MainMenu::grab_time_from_settings(int value, int score, int exit)
{
    if(exit)
        show();

    userTime_mainMenu = value;
    userScore_mainMenu = score;
//    std::cout << "Received value from settings window: " << userTime_mainMenu << "    " << userScore_mainMenu << "    Exited: " << exit << std::endl;
}

void MainMenu::on_button_exit_clicked()
{
    QApplication::quit();
}
