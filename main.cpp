#include "fqfs.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    fqfs w;
    w.show();

    return a.exec();
}
