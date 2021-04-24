#include "help.h"
#include "ui_help.h"

help::help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::help)
{
    ui->setupUi(this);

    // Background
    ui->help_text->setStyleSheet("background-image:url(:/images/Generic_Background.png);");
}

help::~help()
{
    delete ui;
}

void help::on_button_back_clicked()
{
    // Hide the help window
    hide();
}
