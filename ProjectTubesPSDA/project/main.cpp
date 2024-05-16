#include "mainlogin.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainLogin w;
    w.show();
    return a.exec();
}
