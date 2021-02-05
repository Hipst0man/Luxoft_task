#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Favorites f;
    w.setWindowTitle("Contact List Viewer");
    w.show();


    return a.exec();
}
