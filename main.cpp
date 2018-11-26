#include <QtGui/QApplication>
#include "calcdistfunct.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalcDistFunct w;
    w.show();
    return a.exec();
}
