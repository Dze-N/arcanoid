#include <iostream>
#include "paddle.h"

Paddle::Paddle() {

  dx = 0;
  image.load("paddle.png");

  rect = image.rect();
  resetState();
}

Paddle::~Paddle()
{
}

void Paddle::setDx(int x) {
  dx = x;
}

void Paddle::move() {

    int x = rect.x() + dx;
    int y = rect.top();

    rect.moveTo(x, y);
}

void Paddle::resetState() {

  rect.moveTo(startPosX, startPosY);
}

QRect Paddle::getRect() {

  return rect;
}

QImage & Paddle::getImage() {

  return image;
}
