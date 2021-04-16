#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_button_2player_clicked()
{
    gameWindow = new MainWindow();

    // Hide the main menu
    this->hide();

    // Connect the game window's show_main_menu signal to the show_main_menu slot here
    QObject::connect(gameWindow, SIGNAL(show_main_menu()), this, SLOT(show_main_menu()));

    // Show the game window
    gameWindow->show();
}

void MainMenu::show_main_menu()
{
    show();
}

void MainMenu::on_button_credits_clicked()
{
    class credits creditsScreen;

    // Hide the main menu window
    hide();

    // Show the credits window
    creditsScreen.setModal(true);
    creditsScreen.exec();
}
