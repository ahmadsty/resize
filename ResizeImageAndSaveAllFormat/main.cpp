#include "projectimage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProjectImage w;
    w.show();

    return a.exec();
}
