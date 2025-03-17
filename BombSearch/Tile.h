#pragma once
#include "DataType.h"

class Tile
{
private:
	TileState tileState;
	int tileInfo = 0;	//-1 이면 폭탁, 아니면 숫자

public:
	Tile();

	void setTileState(TileState);
	TileState getTileState() const;

	void setTileBomb();
	void AddTileCount();
	int getTileInfo() const;

};

