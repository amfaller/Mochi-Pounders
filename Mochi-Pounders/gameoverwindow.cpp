#include "gameoverwindow.h"
#include "ui_gameoverwindow.h"

GameOverWindow::GameOverWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameOverWindow)
{
    ui->setupUi(this);

    // Background
    QPixmap background(":/images/Gameplay_Background.png");
    ui->Background->setPixmap(background);
    ui->Background->setScaledContents(true);
}

GameOverWindow::~GameOverWindow()
{
    delete ui;
}

void GameOverWindow::on_button_main_menu_clicked()
{
    // Tell the game window to cleanup
    emit cleanup();

    // Hide the pause window
    hide();
}

void GameOverWindow::recv_scores(int red, int blue)
{
    ui->ScoreFinal_Red->display(red);
    ui->ScoreFinal_Blue->display(blue);

    if(red > blue){
        ui->Label_WhoWon->setText("Red wins!");

        QPixmap mochi_red_smile(":/images/Mochi_Red_Smile.png");
        ui->Mochi->setPixmap(mochi_red_smile);
        ui->Mochi->setScaledContents(true);
    }
    else if (red < blue){
        ui->Label_WhoWon->setText("Blue wins!");

        QPixmap mochi_blue_smile(":/images/Mochi_Blue_Smile.png");
        ui->Mochi->setPixmap(mochi_blue_smile);
        ui->Mochi->setScaledContents(true);
    }
    else{
        ui->Label_WhoWon->setText("Tie Game!");

        QPixmap mochi_green_smile(":/images/Mochi_Green_Smile.png");
        ui->Mochi->setPixmap(mochi_green_smile);
        ui->Mochi->setScaledContents(true);
    }
    ui->Label_WhoWon->setAlignment(Qt::AlignCenter);
}
