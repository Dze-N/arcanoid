#pragma once

#include <QImage>
#include <QRect>

class Ball {

  public:
    Ball();
    ~Ball();

  public:
    void resetState();
    void autoMove();
    void setXDir(int);
    void setYDir(int);
    int getXDir();
    int getYDir();
    QRect getRect();
    QImage & getImage();

  private:
    int xdir;
    int ydir;
    QImage image;
    QRect rect;
    static const int startPosX = 230;
    static const int startPosY= 355;
    static const int rightEdge = 600;
};
