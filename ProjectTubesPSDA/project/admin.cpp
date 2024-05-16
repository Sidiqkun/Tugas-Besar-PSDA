#include "admin.h"
#include "ui_admin.h"
#include <QMessageBox>
#include "mainlogin.h"

MainLogin *loginulang;

Admin::Admin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Admin)
{
    ui->setupUi(this);
}

Admin::~Admin()
{
    delete ui;
}

void Admin::on_pushButtonAdd_clicked()
{
    // Mendapatkan input dari pengguna
    QString bidang = ui->lineEditKode->text();
    QString nama = ui->lineEditNama->text();
    int jam = ui->spinBoxJam->value();
    QString keluhan = ui->lineEditKeluhan->text();

    // Membuat objek Item baru dan menambahkannya ke dalam dataArray
    Item newItem = {bidang, nama, jam, keluhan};
    dataArray.append(newItem);

    // Membersihkan input setelah ditambahkan ke dataArray
    ui->lineEditKode->clear();
    ui->lineEditNama->clear();
    ui->spinBoxJam->setValue(0);
    ui->lineEditKeluhan->clear();

    // Menampilkan data setelah ditambahkan
    displayData();
}

void Admin::displayData()
{
    // Menghapus semua baris sebelum menambahkan data baru
    ui->tableWidget->setRowCount(0);

    // Menampilkan data dalam array ke konsol
    qDebug() << "Data Array:";
    for (int i = 0; i < dataArray.size(); ++i) {
        const Item &item = dataArray.at(i);
        qDebug() << "Kode:" << item.bidang;
        qDebug() << "Nama:" << item.nama;
        qDebug() << "Jumlah:" << item.jam;
        qDebug() << "Harga:" << item.keluhan;
        qDebug() << "-----------------";

        // Menambahkan baris baru ke tabel
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());

        // Menetapkan nilai ke setiap sel dalam tabel
        QTableWidgetItem *kodeItem = new QTableWidgetItem(item.bidang);
        ui->tableWidget->setItem(i, 0, kodeItem);

        QTableWidgetItem *namaItem = new QTableWidgetItem(item.nama);
        ui->tableWidget->setItem(i, 1, namaItem);

        QTableWidgetItem *jumlahItem = new QTableWidgetItem(QString::number(item.jam));
        ui->tableWidget->setItem(i, 2, jumlahItem);

        QTableWidgetItem *hargaItem = new QTableWidgetItem(item.keluhan);
        ui->tableWidget->setItem(i, 3, hargaItem);
    }
}


void Admin::on_pushButtonCari_clicked()
{
    QString searchKey = ui->lineEditKodeCari->text();

    int index = linierSearch(dataArray, searchKey);

    if (index != -1) {
        // Barang ditemukan, tampilkan informasi barang di antarmuka pengguna
        const Item &foundItem = dataArray.at(index);
        QMessageBox::information(this, "Informasi Barang", "Kode: " + foundItem.bidang + "\nNama: " + foundItem.nama +
        "\nJumlah: " + QString::number(foundItem.jam) + "\nKategori: " + foundItem.keluhan);
    } else {
        // Barang tidak ditemukan
        QMessageBox::warning(this, "Pencarian Barang", "Barang tidak ditemukan.");
    }
}

int Admin::linierSearch(const QVector<Item> &array, const QString &key)
{
    for (int i = 0; i < array.size(); ++i) {
        if (array[i].bidang == key)            // Jika kode item sama dengan key
            return i;                        // Kembalikan indeks item yang ditemukan
    }

    return -1; // Kembalikan -1 jika item tidak ditemukan
}

void Admin::on_pushButtonDelete_clicked()
{
    // Mendapatkan kode barang yang akan dihapus
    QString deleteKey = ui->lineEditKodeHapus->text();

    // Mencari indeks dari barang yang akan dihapus
    int index = linierSearch(dataArray, deleteKey);

    if (index != -1) {
        // Barang ditemukan, hapus item dari array
        dataArray.remove(index);

        // Tampilkan pesan konfirmasi
        QMessageBox::information(this, "Penghapusan Barang", "Barang berhasil dihapus.");

        // Menampilkan kembali data setelah penghapusan
        displayData();
    } else {
        // Barang tidak ditemukan
        QMessageBox::warning(this, "Penghapusan Barang", "Barang tidak ditemukan.");
    }
}

void Admin::on_pushButtonExit_clicked()
{
    qApp->exit();
}

void Admin::on_pushButtonLoginUlang_clicked()
{
    QMessageBox::information(this, "Admin", "Kamu Kembali lagi ke Menu Login.");
    hide();
    loginulang = new MainLogin(this);
    loginulang->show();
}

void Admin::on_pushButtonTerima_clicked()
{
    QMessageBox::information(this, "Admin", "Pengajuan Jadwal Telah DIterima.");
}

