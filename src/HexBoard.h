#ifndef  HEXBOARD_H_
#define  HEXBOARD_H_
#include <QList>
#include "hex.h"
#include "game.h"

class Game;
class HexBoard
{
public:
	HexBoard();
	QList<Hex*>GetHexes();
	void PlaceHexes();
	
private:
	void CreateHexColumn(int x,int y ,int numofRows);
	QList<Hex*>hexes_;

};

#endif
