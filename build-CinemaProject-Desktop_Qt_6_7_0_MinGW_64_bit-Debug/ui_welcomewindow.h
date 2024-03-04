/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *label_pic;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_hello;
    QHBoxLayout *horizontalLayout;
    QLabel *label_welcome;
    QLabel *label_out_name;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_logout;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(695, 460);
        label_pic = new QLabel(WelcomeWindow);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(40, 90, 521, 261));
        widget = new QWidget(WelcomeWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 20, 95, 391));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_hello = new QLabel(widget);
        label_hello->setObjectName("label_hello");

        verticalLayout->addWidget(label_hello);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_welcome = new QLabel(widget);
        label_welcome->setObjectName("label_welcome");

        horizontalLayout->addWidget(label_welcome);

        label_out_name = new QLabel(widget);
        label_out_name->setObjectName("label_out_name");

        horizontalLayout->addWidget(label_out_name);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(3, 500, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer);

        pushButton_logout = new QPushButton(widget);
        pushButton_logout->setObjectName("pushButton_logout");

        verticalLayout->addWidget(pushButton_logout);


        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        label_pic->setText(QString());
        label_hello->setText(QString());
        label_welcome->setText(QCoreApplication::translate("WelcomeWindow", "Welcome", nullptr));
        label_out_name->setText(QString());
        pushButton_logout->setText(QCoreApplication::translate("WelcomeWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
