#ifndef MAINMENU_H
#define MAINMENU_H

#include <QDialog>
#include "mainwindow.h"

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

private slots:
    void on_button_2player_clicked();
    void show_main_menu();

private:
    Ui::MainMenu *ui;
    MainWindow *gameWindow;
};

#endif // MAINMENU_H
