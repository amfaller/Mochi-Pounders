#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QTimer>
#include <QPainter>
#include <QBrush>

#include "pausewindow.h"

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

private slots:
    void on_HammerButton_Red_clicked();

    void on_HammerButton_Blue_clicked();

    void update_time();

    void setColorState(int state);

    void on_PauseButton_clicked();

private:
    Ui::MainWindow *ui;
//    pausewindow *pauseWindow;
    int state{};    // State for the mole
};


#endif // MAINWINDOW_H
