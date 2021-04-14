#include "mainwindow.h"
#include "ui_mainwindow.h"

/***** Global Variables *****/
int redScore;
int blueScore;

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Main Window Setup //////////////////////////////////////////////////////////////////////////////////

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Red Team Slots /////////////////////////////////////////////////////////////////////////////////////

/* Red Hammer Click Handler*/
void MainWindow::on_HammerButton_Red_clicked()
{
    redScore = ui->ScoreCounter_Red->intValue();

    /* Insert an if/else block here to check mole color */

    // if(mole color == red)
    ui->ScoreCounter_Red->display(++redScore);

    // else if(mole color == blue)
    // increment blueScore

    // else if (mole color == pink)
    //  decrement redScore
}


// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Blue Team Slots ////////////////////////////////////////////////////////////////////////////////////

/* Blue Hammer Click Handler*/
void MainWindow::on_HammerButton_Blue_clicked()
{
    blueScore = ui->ScoreCounter_Blue->intValue();

    /* Same checks as in red click handler */
    ui->ScoreCounter_Blue->display(++blueScore);
}
