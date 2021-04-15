#include "pausewindow.h"
#include "ui_pausewindow.h"

pausewindow::pausewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pausewindow)
{
    ui->setupUi(this);
}

pausewindow::~pausewindow()
{
    delete ui;
}

void pausewindow::on_button_resume_clicked()
{
    // Hide the pause window
    hide();

//    // Show the gameplay window
//    MainWindow::
}
