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
