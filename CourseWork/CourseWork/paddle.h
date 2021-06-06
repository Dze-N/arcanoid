#pragma once

#include <QImage>
#include <QRect>

class Paddle {

  public:
    Paddle();
    ~Paddle();

  public:
    void resetState();
    void move();
    void setDx(int);
    QRect getRect();
    QImage & getImage();

  private:
    QImage image;
    QRect rect;
    int dx;
    static const int startPosX = 400;
    static const int startPosY = 600;
};
