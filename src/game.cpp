#include "game.h"
#include "hex.h"
#include "HexBoard.h"
#include <QGraphicsScene>

Game::Game(QWidget* parent)
{
  setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  setFixedSize(1024, 748);


  scene_ = new QGraphicsScene();
  scene_->setSceneRect(0,0,1024, 768);
  setScene(scene_);

}

void Game::Start()
{
  hex_board_ = new HexBoard();
  hex_board_->PlaceHexes();
}