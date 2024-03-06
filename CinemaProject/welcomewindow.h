#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include "qlabel.h"
#include <QDialog>
#include <QWidget>

namespace Ui {
class WelcomeWindow;
}

class WelcomeWindow : public QWidget
{
    Q_OBJECT

public:
    explicit WelcomeWindow(QString name, int age, QWidget *parent = nullptr);



    ~WelcomeWindow();

public slots:
    void setName(QString name, int age);

private:
    Ui::WelcomeWindow *ui;
    QLabel *helloLabel;
};
