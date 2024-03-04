#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include <QPixmap>

WelcomeWindow::WelcomeWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/omars/OneDrive/Desktop/Uni/AUC/Semester 6/CS II/Lab/Assignments/Screenshot 2024-03-04 223628.png");
    ui->label_pic->setPixmap(pix.scaled(300,300));

}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::setName(QString name){
    ui->label_out_name->setText(name);
}
