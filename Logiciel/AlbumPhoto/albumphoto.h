#ifndef ALBUMPHOTO_H
#define ALBUMPHOTO_H

#include "ui_albumphoto.h"

#include <QMainWindow>

class AlbumPhoto : public QMainWindow, private Ui::AlbumPhoto
{
    Q_OBJECT

public:
    AlbumPhoto(QWidget *parent = nullptr);
    ~AlbumPhoto();
};
#endif // ALBUMPHOTO_H
