#pragma once
#include <vector>
#include "DataType.h"
#include "Tile.h"

class TileMap
{
private:
	vector <vector<Tile*>> tileList;
	int Row_m = 9, Col_m = 9;
	int X_c = 0, Y_c = 0; //�ܼ� ���� ���� ��ǥ
	int Bomb = 10; // ã�� ��ź ����
	bool Failed = false;

public:
	TileMap();
	~TileMap();
	void Play(); // �ѹ��� ����ã�� ���� �����Լ�

private:

	void SelectMap();
	void MakeTile();
	void DrawTile();
	void InputManager();
	void OpenTile(int, int);
	void FlagTile(int, int);
	void gotoXY(int x, int y);
	void OnGameFailed();
	void ClearTile();
};

/*
class TileMap
{
private:
	//Tile* tileList[9][9] = { nullptr, };
	//vector<vector<Tile*>> tileList;
	vector < vector<Tile*>> tileList;

	int Row_m = 9, Col_m = 9;
	int X_c = 0, Y_c = 0;	//�ܼ� ���� ���� ��ǥ
	int Bomb = 10;			//ã�� ��ź ����
	bool Failed = false;

public:
	TileMap();
	~TileMap();
	void Play();	//�ѹ��� ����ã�� ���� �����Լ�

private:
	void SelectMap();
	void MakeTile();
	void DrawTile();
	void InputManager();
	void OpenTile(int, int);
	void FlagTile(int, int);
	void gotoXY(int x, int y);
	void OnGameFailed();
	void ClearTile();
};
*/

