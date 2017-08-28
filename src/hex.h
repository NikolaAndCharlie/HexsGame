#ifndef Hex_H_
#define  Hex_H_
#include <QGraphicsPolygonItem>

class Hex :public QGraphicsPolygonItem
{
public:
  Hex(QGraphicsPolygonItem *parent = nullptr);
  ~Hex() {}
};


#endif
