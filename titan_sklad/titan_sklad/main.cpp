#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(w.width(), w.height());
    w.setWindowFlags(Qt::Window |
                     Qt::WindowCloseButtonHint |
                     Qt::WindowMinimizeButtonHint);
    w.show();

    return a.exec();
}
