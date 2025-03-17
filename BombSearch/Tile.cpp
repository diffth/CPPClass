#include "Tile.h"

Tile::Tile()
{

}

void Tile::setTileState(TileState)
{
	this->tileState;
}

TileState Tile::getTileState() const
{
	return TileState();
}

void Tile::setTileBomb()
{
	tileInfo = -1;
}

void Tile::AddTileCount()
{
	if (tileInfo != -1)
	{
		tileInfo++;
	}
}

int Tile::getTileInfo() const
{
	return tileInfo;
}
