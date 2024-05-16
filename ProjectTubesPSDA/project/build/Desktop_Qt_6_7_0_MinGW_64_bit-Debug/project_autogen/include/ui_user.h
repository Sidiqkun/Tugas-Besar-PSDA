/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

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

class Ui_User
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBoxJam;
    QLineEdit *lineEditKodeCari;
    QTableWidget *tableWidget;
    QPushButton *pushButtonExit;
    QPushButton *pushButtonAdd;
    QLabel *label_5;
    QPushButton *pushButtonLoginUlang;
    QLabel *label_4;
    QPushButton *pushButtonCari;
    QLineEdit *lineEditKodeHapus;
    QLineEdit *lineEditNama;
    QLineEdit *lineEditKeluhan;
    QLineEdit *lineEditKode;
    QLabel *label_6;
    QPushButton *pushButtonDelete;
    QLabel *label_7;

    void setupUi(QMainWindow *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName("User");
        User->resize(600, 400);
        centralwidget = new QWidget(User);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 600, 61));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(5, 10, 591, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 300, 101, 21));
        QFont font;
        font.setPointSize(10);
        label_3->setFont(font);
        spinBoxJam = new QSpinBox(centralwidget);
        spinBoxJam->setObjectName("spinBoxJam");
        spinBoxJam->setGeometry(QRect(440, 260, 61, 25));
        lineEditKodeCari = new QLineEdit(centralwidget);
        lineEditKodeCari->setObjectName("lineEditKodeCari");
        lineEditKodeCari->setGeometry(QRect(20, 100, 131, 24));
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
        pushButtonExit = new QPushButton(centralwidget);
        pushButtonExit->setObjectName("pushButtonExit");
        pushButtonExit->setGeometry(QRect(500, 350, 80, 24));
        pushButtonAdd = new QPushButton(centralwidget);
        pushButtonAdd->setObjectName("pushButtonAdd");
        pushButtonAdd->setGeometry(QRect(239, 350, 101, 24));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 260, 101, 21));
        label_5->setFont(font);
        pushButtonLoginUlang = new QPushButton(centralwidget);
        pushButtonLoginUlang->setObjectName("pushButtonLoginUlang");
        pushButtonLoginUlang->setGeometry(QRect(20, 350, 80, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(320, 300, 101, 21));
        label_4->setFont(font);
        pushButtonCari = new QPushButton(centralwidget);
        pushButtonCari->setObjectName("pushButtonCari");
        pushButtonCari->setGeometry(QRect(20, 130, 80, 24));
        lineEditKodeHapus = new QLineEdit(centralwidget);
        lineEditKodeHapus->setObjectName("lineEditKodeHapus");
        lineEditKodeHapus->setGeometry(QRect(20, 180, 131, 24));
        lineEditNama = new QLineEdit(centralwidget);
        lineEditNama->setObjectName("lineEditNama");
        lineEditNama->setGeometry(QRect(140, 300, 141, 24));
        lineEditKeluhan = new QLineEdit(centralwidget);
        lineEditKeluhan->setObjectName("lineEditKeluhan");
        lineEditKeluhan->setGeometry(QRect(440, 300, 141, 24));
        lineEditKode = new QLineEdit(centralwidget);
        lineEditKode->setObjectName("lineEditKode");
        lineEditKode->setGeometry(QRect(140, 260, 141, 24));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(320, 260, 101, 21));
        label_6->setFont(font);
        pushButtonDelete = new QPushButton(centralwidget);
        pushButtonDelete->setObjectName("pushButtonDelete");
        pushButtonDelete->setGeometry(QRect(20, 210, 80, 24));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 70, 601, 21));
        label_7->setFont(font);
        User->setCentralWidget(centralwidget);

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QMainWindow *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("User", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:700; color:#ffffff;\">Si Rumah Sakit</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("User", "Nama Dokter", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("User", "Bidang", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("User", "Nama", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("User", "Jam", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("User", "Keluhan", nullptr));
        pushButtonExit->setText(QCoreApplication::translate("User", "Keluar", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("User", "Ajukan Jadwal", nullptr));
        label_5->setText(QCoreApplication::translate("User", "Bidang", nullptr));
        pushButtonLoginUlang->setText(QCoreApplication::translate("User", "Login Ulang", nullptr));
        label_4->setText(QCoreApplication::translate("User", "Keluhan", nullptr));
        pushButtonCari->setText(QCoreApplication::translate("User", "Cari ", nullptr));
        label_6->setText(QCoreApplication::translate("User", "Jam", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("User", "Hapus", nullptr));
        label_7->setText(QCoreApplication::translate("User", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Selamat datang user silahkan mengajukan jadwal</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
