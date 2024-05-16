#ifndef USER_H
#define USER_H

#include <QMainWindow>

namespace Ui {
class User;
}

// Definisikan struct untuk menyimpan informasi Pesan
struct Pesan {
    QString bidang;
    QString nama;
    int jam;
    QString keluhan;
};

class User : public QMainWindow
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();

private slots:
    void on_pushButtonAdd_clicked();
    void displayData();
    void on_pushButtonCari_clicked();
    void on_pushButtonDelete_clicked();
    void on_pushButtonExit_clicked();
    void on_pushButtonLoginUlang_clicked();

private:
    Ui::User *ui;
    QList<Pesan> dataArray; // Menggunakan QList dari struct Pesan
    int fungsiLinierSearch(const QVector<Pesan> &array, const QString &key);
};

#endif // USER_H
