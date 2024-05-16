#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>

namespace Ui {
class Admin;
}

// Definisikan struct untuk menyimpan informasi item
struct Item {
    QString bidang;
    QString nama;
    int jam;
    QString keluhan;
};

class Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

private slots:
    void on_pushButtonAdd_clicked();
    void displayData();
    void on_pushButtonCari_clicked();
    void on_pushButtonDelete_clicked();
    void on_pushButtonExit_clicked();
    void on_pushButtonLoginUlang_clicked();

    void on_pushButtonTerima_clicked();

private:
    Ui::Admin *ui;
    QList<Item> dataArray; // Menggunakan QList dari struct Item
    int linierSearch(const QVector<Item> &array, const QString &key);
};

#endif // ADMIN_H
