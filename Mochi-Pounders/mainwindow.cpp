#include "mainwindow.h"
#include "ui_mainwindow.h"

/* enum for mole color */
typedef enum {
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_BLACK
} color_e;

/***** Global Variables *****/
int redScore;
int blueScore;
int tick = 1000;
int currTimeS = 60;

bool moleNotClicked = true;     // Flag to prevent button mashing
color_e currColor;              // Current mole color

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


// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Blue Team Slots ////////////////////////////////////////////////////////////////////////////////////

/* Blue Hammer Click Handler*/
void MainWindow::on_HammerButton_Blue_clicked()
{
    blueScore = ui->ScoreCounter_Blue->intValue();

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
        ui->ScoreCounter_Red->display(--blueScore);
    }
}


// ////////////////////////////////////////////////////////////////////////////////////////////////////
// Game Time Slots ////////////////////////////////////////////////////////////////////////////////////

/* Updates the game clock every tick */
void MainWindow::update_time()
{
    if(currTimeS > 0){
        // Update timer
        ui->TimeCounter->display(currTimeS--);

        // Update Mole      TODO: Make the color random
        moleNotClicked = true;
        MainWindow::setColorState(currTimeS);
    }
    // End of game condition
    else{
        ui->TimeCounter->display(0);
        MainWindow::setColorState(-1);
//        MainWindow::paintEvent(NULL);
    }
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

    if(state % 3 == 0)
    {
        painter.setPen(QPen(Qt::blue));
        painter.setBrush(Qt::blue);
        currColor = COLOR_BLUE;
    }
    else if(state % 5 == 0)
    {
        painter.setPen(QPen(Qt::red));
        painter.setBrush(Qt::red);
        currColor = COLOR_RED;
    }
    else if(state % 7 == 0)
    {
        painter.setPen(QPen(Qt::green));
        painter.setBrush(Qt::green);
        currColor = COLOR_GREEN;
    }
    else
    {
        painter.setPen(QPen(Qt::black));
        painter.setBrush(Qt::black);
        currColor = COLOR_BLACK;
    }

    painter.drawRect(mole);
}

/* Function that changes rectangle color */
void MainWindow::setColorState(int state)
{
    this->state = state;
    update();
}

void MainWindow::on_PauseButton_clicked()
{
    // Hide the gameplay window
//    hide();

    // Show the pause window
//    pauseWindow = new pausewindow(this);
//    pauseWindow->show();


    pausewindow pauseWindow;
    pauseWindow.setModal(true);
    pauseWindow.exec();
}
