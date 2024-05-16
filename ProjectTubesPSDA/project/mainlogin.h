#ifndef MAINLOGIN_H
#define MAINLOGIN_H

#include <QMainWindow>
#include <QMessageBox>
#include "admin.h"
#include "user.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainLogin;
}
QT_END_NAMESPACE

class MainLogin : public QMainWindow
{
    Q_OBJECT

public:
    MainLogin(QWidget *parent = nullptr);
    ~MainLogin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainLogin *ui;
    Admin *admin;
    User *user;
};
#endif // MAINLOGIN_H
