#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setMinimumSize( 350, 500 );
    setMaximumSize( 350, 500 );

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
     Level *window = new Level();

      window->setFixedSize(600,800);
      window->setWindowTitle("Arcanoid");
      window->show();

}
