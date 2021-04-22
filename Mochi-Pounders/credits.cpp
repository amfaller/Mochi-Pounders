#include "credits.h"
#include "ui_credits.h"

credits::credits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::credits)
{
    ui->setupUi(this);

    // Background
    ui->textBrowser->setStyleSheet("background-image:url(:/images/Generic_Background.png);");
}

credits::~credits()
{
    delete ui;
}

void credits::on_button_back_clicked()
{
    // Hide the credits window
    hide();
}
