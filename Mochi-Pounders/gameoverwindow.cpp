#include "gameoverwindow.h"
#include "ui_gameoverwindow.h"

GameOverWindow::GameOverWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameOverWindow)
{
    ui->setupUi(this);
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
    }
    else if (red < blue){
        ui->Label_WhoWon->setText("Blue wins!");
    }
    else{
        ui->Label_WhoWon->setText("Tie Game!");
    }
    ui->Label_WhoWon->setAlignment(Qt::AlignCenter);
}
