#include "mainwindow.h"
#include "ui_mainwindow.h"

/***** Global Variables *****/
int redScore;
int blueScore;
int tick = 1000;
int currTimeS = 60;

QRect mole(215,128,50,50);

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Main Window Setup //////////////////////////////////////////////////////////////////////////////////

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Game timer
    QTimer *gameTimer = new QTimer(this);
    connect(gameTimer, &QTimer::timeout, this, &MainWindow::update_time);
    gameTimer->start(tick);
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


// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Game Time Slots ////////////////////////////////////////////////////////////////////////////////////

/* Updates the game clock every tick */
void MainWindow::update_time()
{
    if(currTimeS > 0){
        // Update timer
        ui->TimeCounter->display(currTimeS--);

        // Update Mole
        QPainter painter(this);

        painter.eraseRect(mole);
        painter.drawRect(mole);

        // Change mole color    TODO: Figure out how to do this, make this random
        if(currTimeS % 3 == 0){
            painter.fillRect(mole,Qt::blue);
        }
        else if(currTimeS % 5 == 0){
            painter.fillRect(mole,Qt::red);
        }
        else if(currTimeS % 7 == 0){
            painter.fillRect(mole, Qt::green);
        }
        else{
            painter.fillRect(mole,Qt::black);
        }
        update();
    }
    // End of game condition
    else{
        ui->TimeCounter->display(0);
        MainWindow::paintEvent(NULL);
    }
}

// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Mole Slots /////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::paintEvent(QPaintEvent *event)
{

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

    painter.drawRect(mole);

    // Set initial mole color
    painter.fillRect(mole,Qt::black);
}

