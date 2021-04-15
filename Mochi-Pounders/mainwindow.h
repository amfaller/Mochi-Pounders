#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_HammerButton_Red_clicked();

    void on_HammerButton_Blue_clicked();

    void update_time();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
