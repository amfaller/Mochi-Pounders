#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QTimer>
#include <QPainter>
#include <QBrush>

#include "pausewindow.h"
#include "gameoverwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui{ class MainWindow;}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    virtual void paintEvent(QPaintEvent *event);

    void update_mole(QPainter &painter);

signals:
    void show_main_menu () ;                // Signal to go back to the main menu
    void send_scores (int red, int blue);   // Signal to send final scores to game over screen

private slots:
    void on_HammerButton_Red_clicked();
    void on_HammerButton_Blue_clicked();
    void update_time();
    void setColorState(int state);
    void on_PauseButton_clicked();
    void resume();
    void cleanup();
    void changeTime_game(int time, int score);
    void game_over(int redScore, int blueScore);

private:
    Ui::MainWindow *ui;
//    pausewindow *pauseWindow;
    int state{};    // State for the mole
    class GameOverWindow *gow;
};


#endif // MAINWINDOW_H
