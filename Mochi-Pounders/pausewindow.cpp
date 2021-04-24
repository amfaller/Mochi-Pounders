#include "pausewindow.h"
#include "ui_pausewindow.h"

#include "mainmenu.h"

pausewindow::pausewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pausewindow)
{
    ui->setupUi(this);

    // Background
    QPixmap background(":/images/Gameplay_Background.png");
    ui->Background->setPixmap(background);
    ui->Background->setScaledContents(true);
}

pausewindow::~pausewindow()
{
    delete ui;
}

void pausewindow::on_button_resume_clicked()
{
    // Hide the pause window
    emit go();
    hide();
}

void pausewindow::on_button_main_menu_clicked()
{
    // Tell the game window to cleanup
    emit cleanup();

    // Hide the pause window
    hide();
}
