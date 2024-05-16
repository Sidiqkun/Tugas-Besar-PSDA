/********************************************************************************
** Form generated from reading UI file 'mainlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINLOGIN_H
#define UI_MAINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainLogin
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *pw;
    QLineEdit *Username;
    QLabel *label_5;

    void setupUi(QMainWindow *MainLogin)
    {
        if (MainLogin->objectName().isEmpty())
            MainLogin->setObjectName("MainLogin");
        MainLogin->resize(600, 400);
        MainLogin->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainLogin);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 600, 61));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(5, 10, 591, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 300, 101, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 240, 81, 31));
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 200, 81, 31));
        label_4->setFont(font);
        pw = new QLineEdit(centralwidget);
        pw->setObjectName("pw");
        pw->setGeometry(QRect(280, 250, 161, 24));
        pw->setEchoMode(QLineEdit::Password);
        Username = new QLineEdit(centralwidget);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(280, 210, 161, 24));
        Username->setEchoMode(QLineEdit::Normal);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 90, 601, 91));
        label_5->setFont(font);
        MainLogin->setCentralWidget(centralwidget);

        retranslateUi(MainLogin);

        QMetaObject::connectSlotsByName(MainLogin);
    } // setupUi

    void retranslateUi(QMainWindow *MainLogin)
    {
        MainLogin->setWindowTitle(QCoreApplication::translate("MainLogin", "MainLogin", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainLogin", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:700; color:#ffffff;\">Si Rumah Sakit</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainLogin", "login", nullptr));
        label_3->setText(QCoreApplication::translate("MainLogin", "Password  :", nullptr));
        label_4->setText(QCoreApplication::translate("MainLogin", "Username :", nullptr));
        label_5->setText(QCoreApplication::translate("MainLogin", "<html><head/><body><p align=\"center\">Selamat datang di software </p><p align=\"center\">Booking Pertemuan Rumah Sakit</p><p align=\"center\">silahkan login</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainLogin: public Ui_MainLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINLOGIN_H
