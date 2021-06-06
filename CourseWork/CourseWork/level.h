#pragma once

#include <QWidget>
#include <QKeyEvent>
#include <QMessageBox>
#include "ball.h"
#include "brick.h"
#include "paddle.h"

class Level : public QWidget {

  public:
    Level(QWidget *parent = 0);
    ~Level();

  protected:
    void paintEvent(QPaintEvent *);
    void timerEvent(QTimerEvent *);
    void keyPressEvent(QKeyEvent *);
    void keyReleaseEvent(QKeyEvent *);
    void drawObjects(QPainter *);
    void finishGame(bool);
    void moveObjects();

    void startGame();
    void pauseGame();
    void stopGame();
    void victory();
    void checkCollision();

  private:
    int x;
    int timerId;
    static const int brickCount = 72;
    static const int delay = 8;
    static const int botEdge = 650;
    Ball *ball;
    Paddle *paddle;
    Brick *bricks[brickCount];
    bool gameOver;
    bool gameWon;
    bool gameStarted;
    bool paused;
};
