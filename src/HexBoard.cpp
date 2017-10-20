#include "HexBoard.h"
#include "game.h"

extern Game *game;

HexBoard::HexBoard()
{

}

QList<Hex*> HexBoard::GetHexes()
{
	return hexes_;
}

void HexBoard::PlaceHexes()
{ 
	CreateHexColumn(100, 100, 5);
}

void HexBoard::CreateHexColumn(int x, int y, int numofRows)
{
	//creates a column of Hexs at the specified location with the specified
	//num of rows
	for(size_t i = 0;i<numofRows;i++)
	{
		Hex *hex = new Hex;
		hex->setPos(x, y + 100*i );
		hexes_.append(hex);
		game->scene()->addItem(hex);
	}
}
