#include "qcolordialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QcolorDialog w;
    w.show();

    return a.exec();
}
