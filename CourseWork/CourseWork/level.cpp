#include <QPainter>
#include <QApplication>
#include "level.h"

Level::Level(QWidget *parent) : QWidget(parent)
{

  x = 0;
  gameOver = false;
  gameWon = false;
  paused = false;
  gameStarted = false;
  ball = new Ball();
  paddle = new Paddle();

  for (int i=0; i<8; i++)
  {
    for (int j=0; j<9; j++)
    {
      bricks[i*9 + j] = new Brick(j*58 + 40, i*26 + 26);
    }
  }
}

Level::~Level()
{

 delete ball;
 delete paddle;

 for (int i=0; i<brickCount; i++)
 {
   delete bricks[i];
 }
}

void Level::paintEvent(QPaintEvent *e)
{

  Q_UNUSED(e);
  QPainter painter(this);

  if (gameOver) {

    finishGame(false);

  } else if(gameWon) {

    finishGame(true);
  }
  else {
    drawObjects(&painter);
  }
}

void Level::finishGame(bool victory)
{
    if(victory)
    {
        QMessageBox *victoryBox = new QMessageBox();
        victoryBox->setText("Congrats! You Won!");
        victoryBox->exec();
        this->close();
    }
    else
    {
        QMessageBox *victoryBox = new QMessageBox();
        victoryBox->setText("Hehe looser u've lost!");
        victoryBox->exec();
        this->close();
    }
}

void Level::drawObjects(QPainter *painter)
{

  painter->drawImage(ball->getRect(), ball->getImage());
  painter->drawImage(paddle->getRect(), paddle->getImage());

  for (int i=0; i<brickCount; i++) {
    if (!bricks[i]->isDestroyed()) {
      painter->drawImage(bricks[i]->getRect(), bricks[i]->getImage());
    }
  }
}

void Level::timerEvent(QTimerEvent *e) {

  Q_UNUSED(e);

  moveObjects();
  checkCollision();
  repaint();
}

void Level::moveObjects() {

  ball->autoMove();
  paddle->move();
}

void Level::keyReleaseEvent(QKeyEvent *e) {

    int dx = 0;

    switch (e->key()) {
        case Qt::Key_Left:
            dx = 0;
            paddle->setDx(dx);
            break;

        case Qt::Key_Right:
            dx = 0;
            paddle->setDx(dx);
            break;
    }
}

void Level::keyPressEvent(QKeyEvent *e) {

    int dx = 0;

    switch (e->key()) {
    case Qt::Key_Left:

        dx = -2;
        paddle->setDx(dx);

        break;

    case Qt::Key_Right:

        dx = 2;
        paddle->setDx(dx);
        break;

    case Qt::Key_P:

        pauseGame();
        break;

    case Qt::Key_Space:

        startGame();
        break;

    case Qt::Key_Escape:

        qApp->exit();
        break;

    default:
        QWidget::keyPressEvent(e);
    }
}

void Level::startGame() {

  if (!gameStarted) {
    ball->resetState();
    paddle->resetState();

    for (int i=0; i<brickCount; i++) {
      bricks[i]->setDestroyed(false);
    }

    gameOver = false;
    gameWon = false;
    gameStarted = true;
    timerId = startTimer(delay);
  }
}

void Level::pauseGame() {

  if (paused) {

    timerId = startTimer(delay);
    paused = false;
  } else {

    paused = true;
    killTimer(timerId);
  }
}

void Level::stopGame() {

  killTimer(timerId);
  gameOver = true;
  gameStarted = false;
}

void Level::victory() {

  killTimer(timerId);
  gameWon = true;
  gameStarted = false;
}

void Level::checkCollision() {

  if (ball->getRect().bottom() > botEdge) {
    stopGame();
  }

  for (int i=0, j=0; i<brickCount; i++) {

    if (bricks[i]->isDestroyed()) {
      j++;
    }

    if (j == brickCount) {
      victory();
    }
  }

  if ((ball->getRect()).intersects(paddle->getRect())) {

    int paddleLeftEdge = paddle->getRect().left();
    int ballLeftEdge = ball->getRect().left();

    int caseOne = paddleLeftEdge + 8;
    int caseTwo = paddleLeftEdge + 16;
    int caseThree = paddleLeftEdge + 24;
    int caseFour = paddleLeftEdge + 32;

    if (ballLeftEdge < caseOne) {
      ball->setXDir(-1);
      ball->setYDir(-1);
    }

    if (ballLeftEdge >= caseOne && ballLeftEdge < caseTwo) {
      ball->setXDir(-1);
      ball->setYDir(-1*ball->getYDir());
    }

    if (ballLeftEdge >= caseTwo && ballLeftEdge < caseThree) {
       ball->setXDir(0);
       ball->setYDir(-1);
    }

    if (ballLeftEdge >= caseThree && ballLeftEdge < caseFour) {
       ball->setXDir(1);
       ball->setYDir(-1*ball->getYDir());
    }

    if (ballLeftEdge > caseFour) {
      ball->setXDir(1);
      ball->setYDir(-1);
    }
  }

  for (int i=0; i<brickCount; i++) {

    if ((ball->getRect()).intersects(bricks[i]->getRect())) {

      int ballLeft = ball->getRect().left();
      int ballHeight = ball->getRect().height();
      int ballWidth = ball->getRect().width();
      int ballTop = ball->getRect().top();

      QPoint pointRight(ballLeft + ballWidth + 1, ballTop);
      QPoint pointLeft(ballLeft - 1, ballTop);
      QPoint pointTop(ballLeft, ballTop -1);
      QPoint pointBottom(ballLeft, ballTop + ballHeight + 1);

      if (!bricks[i]->isDestroyed()) {
        if(bricks[i]->getRect().contains(pointRight)) {
           ball->setXDir(-1);
        }

        else if(bricks[i]->getRect().contains(pointLeft)) {
           ball->setXDir(1);
        }

        if(bricks[i]->getRect().contains(pointTop)) {
           ball->setYDir(1);
        }

        else if(bricks[i]->getRect().contains(pointBottom)) {
           ball->setYDir(-1);
        }

        bricks[i]->setDestroyed(true);
      }
    }
  }
}
