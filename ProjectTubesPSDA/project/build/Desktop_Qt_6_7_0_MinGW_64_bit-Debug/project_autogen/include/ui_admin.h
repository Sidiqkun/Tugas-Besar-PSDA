/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditNama;
    QLabel *label_4;
    QLabel *label_3;
    QSpinBox *spinBoxJam;
    QLineEdit *lineEditKeluhan;
    QLineEdit *lineEditKode;
    QLabel *label_5;
    QLabel *label_6;
    QTableWidget *tableWidget;
    QPushButton *pushButtonCari;
    QLineEdit *lineEditKodeHapus;
    QPushButton *pushButtonExit;
    QPushButton *pushButtonAdd;
    QLineEdit *lineEditKodeCari;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonLoginUlang;
    QLabel *label_7;
    QPushButton *pushButtonTerima;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName("Admin");
        Admin->resize(600, 400);
        Admin->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 600, 61));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(5, 10, 591, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        lineEditNama = new QLineEdit(centralwidget);
        lineEditNama->setObjectName("lineEditNama");
        lineEditNama->setGeometry(QRect(140, 300, 141, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(320, 300, 101, 21));
        QFont font;
        font.setPointSize(10);
        label_4->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 300, 101, 21));
        label_3->setFont(font);
        spinBoxJam = new QSpinBox(centralwidget);
        spinBoxJam->setObjectName("spinBoxJam");
        spinBoxJam->setGeometry(QRect(440, 260, 61, 25));
        lineEditKeluhan = new QLineEdit(centralwidget);
        lineEditKeluhan->setObjectName("lineEditKeluhan");
        lineEditKeluhan->setGeometry(QRect(440, 300, 141, 24));
        lineEditKode = new QLineEdit(centralwidget);
        lineEditKode->setObjectName("lineEditKode");
        lineEditKode->setGeometry(QRect(140, 260, 141, 24));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 260, 101, 21));
        label_5->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(320, 260, 101, 21));
        label_6->setFont(font);
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(170, 100, 411, 141));
        pushButtonCari = new QPushButton(centralwidget);
        pushButtonCari->setObjectName("pushButtonCari");
        pushButtonCari->setGeometry(QRect(20, 140, 80, 24));
        lineEditKodeHapus = new QLineEdit(centralwidget);
        lineEditKodeHapus->setObjectName("lineEditKodeHapus");
        lineEditKodeHapus->setGeometry(QRect(20, 190, 131, 24));
        pushButtonExit = new QPushButton(centralwidget);
        pushButtonExit->setObjectName("pushButtonExit");
        pushButtonExit->setGeometry(QRect(500, 350, 80, 24));
        pushButtonAdd = new QPushButton(centralwidget);
        pushButtonAdd->setObjectName("pushButtonAdd");
        pushButtonAdd->setGeometry(QRect(220, 350, 80, 24));
        lineEditKodeCari = new QLineEdit(centralwidget);
        lineEditKodeCari->setObjectName("lineEditKodeCari");
        lineEditKodeCari->setGeometry(QRect(20, 110, 131, 24));
        pushButtonDelete = new QPushButton(centralwidget);
        pushButtonDelete->setObjectName("pushButtonDelete");
        pushButtonDelete->setGeometry(QRect(20, 220, 80, 24));
        pushButtonLoginUlang = new QPushButton(centralwidget);
        pushButtonLoginUlang->setObjectName("pushButtonLoginUlang");
        pushButtonLoginUlang->setGeometry(QRect(20, 350, 80, 24));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(250, 70, 101, 21));
        label_7->setFont(font);
        pushButtonTerima = new QPushButton(centralwidget);
        pushButtonTerima->setObjectName("pushButtonTerima");
        pushButtonTerima->setGeometry(QRect(320, 350, 80, 24));
        Admin->setCentralWidget(centralwidget);

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Admin", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:700; color:#ffffff;\">Admin Si Rumah Sakit</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Admin", "Keluhan", nullptr));
        label_3->setText(QCoreApplication::translate("Admin", "Nama Dokter", nullptr));
        label_5->setText(QCoreApplication::translate("Admin", "Bidang", nullptr));
        label_6->setText(QCoreApplication::translate("Admin", "Jam", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Admin", "Bidang", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Admin", "Nama", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Admin", "Jam", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Admin", "Keluhan", nullptr));
        pushButtonCari->setText(QCoreApplication::translate("Admin", "Cari ", nullptr));
        pushButtonExit->setText(QCoreApplication::translate("Admin", "Keluar", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("Admin", "Tambahkan", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("Admin", "Hapus", nullptr));
        pushButtonLoginUlang->setText(QCoreApplication::translate("Admin", "Login Ulang", nullptr));
        label_7->setText(QCoreApplication::translate("Admin", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Atur Jadwal</span></p></body></html>", nullptr));
        pushButtonTerima->setText(QCoreApplication::translate("Admin", "Terima Ajuan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
