#include "albumphoto.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AlbumPhoto w;
    w.show();
    return a.exec();
}
