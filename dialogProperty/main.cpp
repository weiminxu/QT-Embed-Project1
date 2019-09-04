#include "dialogproperty.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dialogProperty w;
    w.show();

    return a.exec();
}
