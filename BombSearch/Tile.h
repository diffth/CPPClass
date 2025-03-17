#pragma once
#include "DataType.h"

class Tile
{
private:
	TileState tileState;
	int tileInfo = 0;	//-1 �̸� ��Ź, �ƴϸ� ����

public:
	Tile();

	void setTileState(TileState);
	TileState getTileState() const;

	void setTileBomb();
	void AddTileCount();
	int getTileInfo() const;

};

