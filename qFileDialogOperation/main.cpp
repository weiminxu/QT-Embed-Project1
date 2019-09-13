#include "qfiledialogoperation.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qFileDialogOperation w;
    w.show();

    return a.exec();
}
