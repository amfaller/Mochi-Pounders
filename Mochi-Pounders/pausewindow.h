#ifndef PAUSEWINDOW_H
#define PAUSEWINDOW_H

#include <QDialog>

namespace Ui {
class pausewindow;
}

class pausewindow : public QDialog
{
    Q_OBJECT

public:
    explicit pausewindow(QWidget *parent = nullptr);
    ~pausewindow();

private:
    Ui::pausewindow *ui;
};

#endif // PAUSEWINDOW_H
