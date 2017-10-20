#ifndef GAME_H_
#define GAME_H_

#include <QGraphicsView>
class HexBoard;
class Game:public QGraphicsView
{
public:
  Game(QWidget *parent = nullptr);
  ~Game()  {}
  QString *whosturn_;
  void Start();
private:
  QGraphicsScene *scene_;
  HexBoard *hex_board_;

};



#endif
