#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

#define PREGAME_TIME 5

/* enum for mole color */
typedef enum {
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_BLACK
} color_e;

/***** Global Variables *****/
int countdownTime = PREGAME_TIME;   // # of seconds before match begins
bool isPregame = true;              // Flag to show whether or not match has started
int userTime = 60;                  // User-defined time limit
int redScore;
int blueScore;
int tick = 1000;                    // Game tick in milliseconds
int currTimeS = userTime;           // Current game time, initially userTime

bool moleNotClicked = true;         // Flag to prevent button mashing
color_e currColor;                  // Current mole color

QRect mole(215,128,50,50);          // Rectangle defining [x y width height] of mole rectangle

QTimer *gameTimer;                  // Actual game timer
bool isPaused = true;               // Flag to tell if game is currently active

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Main Window Setup //////////////////////////////////////////////////////////////////////////////////

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Game timer
    gameTimer = new QTimer(this);
    connect(gameTimer, &QTimer::timeout, this, &MainWindow::update_time);
    gameTimer->start(tick);
    ui->TimeCounter->display(countdownTime);

}

MainWindow::~MainWindow()
{
    delete ui;
}

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Hammer Slots ///////////////////////////////////////////////////////////////////////////////////////

/* Red Hammer Click Handler*/
void MainWindow::on_HammerButton_Red_clicked()
{
    redScore = ui->ScoreCounter_Red->intValue();

    if(!isPaused){
        if(moleNotClicked && currColor == COLOR_RED){
            moleNotClicked = false;
            ui->ScoreCounter_Red->display(++redScore);
        }
        else if(moleNotClicked && currColor == COLOR_BLUE){
            moleNotClicked = false;
            ui->ScoreCounter_Blue->display(++blueScore);
        }
        else if(moleNotClicked && currColor == COLOR_GREEN){
            moleNotClicked = false;
            ui->ScoreCounter_Red->display(--redScore);
        }
    }
}

/* Blue Hammer Click Handler*/
void MainWindow::on_HammerButton_Blue_clicked()
{
    blueScore = ui->ScoreCounter_Blue->intValue();

    if(!isPaused){
        /* Same checks as in red click handler */
        if(moleNotClicked && currColor == COLOR_BLUE){
            moleNotClicked = false;
            ui->ScoreCounter_Blue->display(++blueScore);
        }
        else if(moleNotClicked && currColor == COLOR_RED){
            moleNotClicked = false;
            ui->ScoreCounter_Red->display(++redScore);
        }
        else if(moleNotClicked && currColor == COLOR_GREEN){
            moleNotClicked = false;
            ui->ScoreCounter_Blue->display(--blueScore);
        }
    }
}


// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Game Time Slots ////////////////////////////////////////////////////////////////////////////////////

/* Updates the game clock every tick */
void MainWindow::update_time()
{
    if(isPregame){
        // Update timer
        ui->TimeCounter->display(countdownTime--);

        if(countdownTime == 0){
            isPregame = false;
            isPaused = false;
        }
    }
    else{
        if(currTimeS > 0){
            // Update timer
            ui->TimeCounter->display(currTimeS--);

            // Update Mole      TODO: Make the color random
            moleNotClicked = true;
            MainWindow::setColorState(rand() % 8 + 1);
        }
        // End of game condition        TODO: Make a Game Over screen
        else{
            isPaused = true;
            ui->TimeCounter->display(0);
            MainWindow::setColorState(-1);

            // Get final scores
            redScore = ui->ScoreCounter_Red->intValue();
            blueScore = ui->ScoreCounter_Blue->intValue();
        }
    }
}

/* Helper function to pause the timer */
void pause(){
    gameTimer->stop();
    isPaused = true;
}

/* Slot to receive the user-input game timer */
void MainWindow::changeTime_game(int time)
{
    currTimeS = time;
}



// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Mole Slots /////////////////////////////////////////////////////////////////////////////////////////

/* Function that draws the rectangle */
void MainWindow::paintEvent(QPaintEvent *event)
{

    Q_UNUSED(event)
    QPainter painter(this);

    /*  The commented code below alters the border color of the rectangle.
     *  This may be useful if we want to make a sort of "fakeout" mole - one
     *  which looks something like one version, but is actually the other upon
     *  closer inspection.
    QPen pen;
    pen.setColor(Qt::red);
    pen.setWidth(5);
    painter.setPen(pen);
    */

    if(isPregame){
        painter.setPen(QPen(Qt::black));
        painter.setBrush(Qt::black);
        currColor = COLOR_BLACK;
    }
    else{
        if(state <= 2)      // 1 or 2
        {
            painter.setPen(QPen(Qt::blue));
            painter.setBrush(Qt::blue);
            currColor = COLOR_BLUE;
        }
        else if( state < 5) // 3 or 4
        {
            painter.setPen(QPen(Qt::red));
            painter.setBrush(Qt::red);
            currColor = COLOR_RED;
        }
        else if(state == 5) // 5
        {
            painter.setPen(QPen(Qt::green));
            painter.setBrush(Qt::green);
            currColor = COLOR_GREEN;
        }
        else                // 6 7 or 8
        {
            painter.setPen(QPen(Qt::black));
            painter.setBrush(Qt::black);
            currColor = COLOR_BLACK;
        }
    }

    painter.drawRect(mole);
}

/* Function that changes rectangle color */
void MainWindow::setColorState(int state)
{
    this->state = state;
    update();
}

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Pause Menu Transition Slots ////////////////////////////////////////////////////////////////////////

bool is_first_pause = true;
void MainWindow::on_PauseButton_clicked()
{
    static pausewindow pauseWindow;

    // Pause the timer
    pause();

    // Hide the gameplay window
    hide();

    // Connect the pause window's go signal to the resume function here
    QObject::connect(&pauseWindow, SIGNAL(go()), this, SLOT(resume()));



    if(is_first_pause){
        std::cout << "The first pause" << std::endl;
        is_first_pause = false;

        // Connect the pause window's cleanup signal to the cleanup function here
        QObject::connect(&pauseWindow, SIGNAL(cleanup()), this, SLOT(cleanup()));

        // Show the pause window
        pauseWindow.setModal(true);
        pauseWindow.exec();
    }
    else{
        std::cout << "Not the first pause" << std::endl;
//        pauseWindow.setModal(true);
        pauseWindow.show();
    }
}

/* Slot to resume the game */
void MainWindow::resume()
{
    isPaused = false;
    show();
    gameTimer->start();
}

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Main Menu Transition Slots /////////////////////////////////////////////////////////////////////////

/* Slot to clean up the game window when user has exited to main menu*/
void MainWindow::cleanup()
{
    // Clean up the timer
    delete gameTimer;

    /* Reset game parameters */
    isPaused = true;
    redScore = 0;
    blueScore = 0;

    // Timer
    currTimeS = userTime;
    isPregame = true;
    countdownTime = PREGAME_TIME;

//    emit show_main_menu();

}
