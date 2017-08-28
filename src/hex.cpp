#include "hex.h"


Hex::Hex(QGraphicsPolygonItem* parent)
{
  QVector<QPointF> hex_points;
  hex_points << QPointF(1, 0) << QPointF(2, 0) << QPointF(3, 1)
    << QPointF(2, 2) << QPointF(1, 2) << QPointF(0, 1);

  int scale = 40;

  for(size_t i = 0;i<hex_points.size();i++)
  {
    hex_points[i] *= scale;
  }
  QPolygonF p(hex_points);
  setPolygon(p);

}
