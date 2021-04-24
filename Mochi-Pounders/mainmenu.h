#ifndef MAINMENU_H
#define MAINMENU_H

#include <QDialog>
#include <QPixmap>
#include <QSize>
#include "mainwindow.h"
#include "credits.h"
#include "help.h"
#include "settings.h"

namespace Ui {
class MainMenu;
}

class MainMenu : public QDialog
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

signals:
    void begin_2player ();      // Signal to begin 2 player game
    void help ();               // Signal to go to help menu
    void settings ();           // Signal to go to settings menu
    void credits ();            // Signal to go to credits menu
    void sendTime_mainMenu (int time, int score);  // Signal to send user time input to gameplay

private slots:
    void on_button_2player_clicked();
    void show_main_menu();
    void on_button_credits_clicked();
    void on_button_help_clicked();
    void on_button_settings_clicked();
    void grab_time_from_settings(int value, int score, int exit);

    void on_button_exit_clicked();

private:
    Ui::MainMenu *ui;
    MainWindow *gameWindow;
    class settings *settingsMenu;
};

#endif // MAINMENU_H
