#include <iostream>
#include "brick.h"
#include <QRandomGenerator>

QString brickImages[8]
{
    "brickie1.png",
    "brickie2.png",
    "brickie3.png",
    "brickie4.png",
    "brickie5.png",
    "brickie6.png",
    "brickie7.png",
    "brickie8.png"
};

Brick::Brick(int x, int y)
{
  int r = QRandomGenerator::global()->generate() % 8;

  image.load(brickImages[r]);
  destroyed = false;
  rect = image.rect();
  rect.translate(x, y);
}

Brick::~Brick() {

  std::cout << ("Brick deleted") << std::endl;
}

QRect Brick::getRect() {

  return rect;
}

void Brick::setRect(QRect rct) {

  rect = rct;
}

QImage & Brick::getImage() {

  return image;
}

bool Brick::isDestroyed() {

  return destroyed;
}

void Brick::setDestroyed(bool destr) {

  destroyed = destr;
}
