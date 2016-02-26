#include "mainwindow.h"
#include <QApplication>
#include <QtCore>
#include <stdlib.h>

#include "mytcpserver.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
