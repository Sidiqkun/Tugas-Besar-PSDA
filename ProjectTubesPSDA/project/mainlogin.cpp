#include "mainlogin.h"
#include "./ui_mainlogin.h"
#include <QMessageBox>

MainLogin::MainLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainLogin)
{
    ui->setupUi(this);
}

MainLogin::~MainLogin()
{
    delete ui;
}

void MainLogin::on_pushButton_clicked()
{
    QString Username = ui->Username->text();
    QString pw = ui->pw->text();

    if (Username.isEmpty() || pw.isEmpty()){
        QMessageBox::information(this, "Error", "Please enter both username and password.");
        return;
    }

    if (Username == "Admin" && pw == "admin"){
        QMessageBox::information(this, "Admin", "Login Success.");
        hide();
        admin = new Admin(this);
        admin->show();
    } else if (Username == "User" && pw == "user"){
        QMessageBox::information(this, "User", "Login Success.");
        hide();
        user = new User(this);
        user->show();
    } else{
        QMessageBox::information(this, "Sorry", "Please enter valid Username or Password.");
        return;
    }
}

