#include "Scanner.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Scanner w;
    w.show();
    return a.exec();
}
