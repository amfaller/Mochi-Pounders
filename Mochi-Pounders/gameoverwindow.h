#ifndef GAMEOVERWINDOW_H
#define GAMEOVERWINDOW_H

#include <QMainWindow>
#include <QPixmap>

namespace Ui {
class GameOverWindow;
}

class GameOverWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameOverWindow(QWidget *parent = nullptr);
    ~GameOverWindow();

signals:
    void cleanup ();

private slots:
    void on_button_main_menu_clicked();
    void recv_scores(int red, int blue);

private:
    Ui::GameOverWindow *ui;
};

#endif // GAMEOVERWINDOW_H
