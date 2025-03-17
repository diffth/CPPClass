#include <iostream>
#include <cstdlib>
#include <set>
#include <Windows.h>
#include <conio.h>
#include <algorithm>
#include "TileMap.h"

using namespace std;

TileMap::TileMap()
{
	//�ʱⰪ
	X_c = 0;
	Y_c = 0;

	//�ʱ޼���
	Row_m = 9;
	Col_m = 9;
	Bomb = 10;
}

TileMap::~TileMap()
{
	for (int i = 0; i < Col_m; i++)
	{
		for (int j = 0; j < Row_m; j++)
		{
			if (tileList[i][j] != nullptr)
			{
				delete tileList[i][j];
			}
		}
	}
}

void TileMap::Play()
{
	SelectMap();
	MakeTile();
	DrawTile();

	while (1)
	{
		InputManager();
		DrawTile();
		Sleep(50);
		if (Failed = true)
		{
			break;
		}
	}
	ClearTile();
}

void TileMap::SelectMap()
{
	int input = 1;
	cout << "1: �ʱ�, 2: �߱�, 3: ���, �� �� �ʱ�" << endl;
	cout << "�� ����: ";
	cin >> input;

	if (input == 1)
	{
		Row_m = 9;
		Col_m = 9;
		Bomb = 10;
	}
	else if(input == 2)
	{
		Row_m = 16;
		Col_m = 16;
		Bomb = 40;
	}
	else if (input == 3)
	{
		Row_m = 30;
		Col_m = 16;
		Bomb = 99;
	}
}

void TileMap::MakeTile()
{
	/*
	//Ÿ�� ���� ����
	for (int i = 0; i < Col_m; i++)
	{
		for (int j = 0; j < Row_m; j++)
		{
			tileList[i][j] = new Tile;
		}
	}

	//�迭�� ���� ��ġ ������ �����ϰ� ����ִ´�.
	int tileCount = Row_m * Col_m;	//��ü Ÿ�� ����
	int* randInfo = new int[Bomb];
	int randVal;	//������
	int ID = 0;		//���� ������ ��ź ����

	bool IsFound = true;

	//���� �ߺ����� �ʵ��� ���̽�
	while (ID<Bomb)
	{
		IsFound = true;
		randVal = rand() % tileCount;

		//�����迭�� �ߺ����� ��ȸ�ϸ� �˻�
		for (int i = 0; i < ID; i++)
		{
			if (randVal == randInfo[i])
			{
				IsFound = false;
				break;
			}
		}

		//ã������ ���� �� �ֱ�
		if (IsFound == true)
		{
			randInfo[ID] = randVal;
			//cout<<randVal<< endl;
			ID++;
		}
	}
	*/

	//Ÿ�� ��ü ����
	tileList.clear();
	for (int i = 0; i < Col_m; i++)
	{
		vector<Tile*> v;
		v.clear();
		for (int j = 0; j < Row_m; j++)
		{
			v.push_back(new Tile);
		}
		tileList.push_back(v);
	}

	//���� ���̺��� set �� �̿��ؼ� ����
	int tileCount = Row_m * Col_m;
	set<int> randInfo;
	int randVal;

	while (randInfo.size() < Bomb)
	{
		randVal = rand() % tileCount;
		randInfo.insert(randVal);
	}

	/*
	//���� �迭�� �̿��� Ÿ�Ͽ� ��ź/���� ���� �ֱ�
	for (int i = 0; i < Bomb; i++)
	{
		int index = randInfo[i];
		int row_temp = index / Row_m;
		int col_temp = index % Row_m;
		(tileList[row_temp][col_temp])->setTileBomb();

		//��ź ���� 8���� ���� +1
		if (row_temp - 1 >= 0)
		{
			tileList[row_temp - 1][col_temp]->AddTileCount();
			if (col_temp - 1 >= 0)
			{
				tileList[row_temp - 1][col_temp - 1]->AddTileCount();
			}
			if (col_temp + 1 >= Row_m)
			{
				tileList[row_temp - 1][col_temp + 1]->AddTileCount();
			}
		}
		if (row_temp + 1 < Col_m)
		{
			tileList[row_temp + 1][col_temp]->AddTileCount();
			if (col_temp - 1 >= 0)
			{
				tileList[row_temp + 1][col_temp - 1]->AddTileCount();
			}
			if (col_temp + 1 >= Row_m)
			{
				tileList[row_temp + 1][col_temp + 1]->AddTileCount();
			}
		}
		if (col_temp - 1 >= 0)
		{
			tileList[row_temp][col_temp - 1]->AddTileCount();
		}
		if (col_temp + 1 < Row_m)
		{
			tileList[row_temp][col_temp + 1]->AddTileCount();
		}
	}
	*/
	//���� �迭�� �̿��� Ÿ�Ͽ� ��ź/���� ���� �ֱ�

	set<int>::iterator it = randInfo.begin();
	for (it; it != randInfo.end(); it++)
	{
		int index = *it;
		int row_temp = index / Row_m;
		int col_temp = index % Row_m;
		(tileList[row_temp][col_temp])->setTileBomb();

		//��ź ���� 8���� ���� +1
		if (row_temp - 1 >= 0)
		{
			tileList[row_temp - 1][col_temp]->AddTileCount();
			if (col_temp - 1 >= 0)
			{
				tileList[row_temp - 1][col_temp - 1]->AddTileCount();
			}
			if (col_temp + 1 >= Row_m)
			{
				tileList[row_temp - 1][col_temp + 1]->AddTileCount();
			}
		}
		if (row_temp + 1 < Col_m)
		{
			tileList[row_temp + 1][col_temp]->AddTileCount();
			if (col_temp - 1 >= 0)
			{
				tileList[row_temp + 1][col_temp - 1]->AddTileCount();
			}
			if (col_temp + 1 >= Row_m)
			{
				tileList[row_temp + 1][col_temp + 1]->AddTileCount();
			}
		}
		if (col_temp - 1 >= 0)
		{
			tileList[row_temp][col_temp - 1]->AddTileCount();
		}
		if (col_temp + 1 < Row_m)
		{
			tileList[row_temp][col_temp + 1]->AddTileCount();
		}
	}

	//���� �Ҵ� ����
	//delete[] randInfo;
}

void TileMap::InputManager()
{
	char ch = 0;
	if (_kbhit())
	{
		ch = _getch();
		switch (ch)
		{
		case UP:
			Y_c -= 1;
			//gotoXY(X_c * 2, Y_c);
			break;
		case DOWN:
			Y_c += 1;
			//gotoXY(X_c * 2, Y_c);
			break;
		case LEFT:
			X_c -= 1;
			//gotoXY(X_c * 2, Y_c);
			break;
		case RIGHT:
			X_c -= 1;
			break;
		case Enter:
			OpenTile(Y_c, X_c);
			break;
		case Space:
			FlagTile(Y_c, X_c);
			break;
		default:
			break;
		}
		gotoXY(X_c * 2, Y_c);
	}
}


void TileMap::OpenTile(int row_t, int col_t)
{
	// �߸��� �Է� ����
	if (row_t < 0 || row_t >= Col_m) {
		return;
	}
	if (col_t < 0 || col_t >= Row_m) { return; }

	if (tileList[row_t][col_t]->getTileState() == TileState::Closed) // ���� �ִ� ���¸�
	{
		tileList[row_t][col_t]->setTileState(TileState::Open); // ���� ���·� ����(�湮ó��)
		if (tileList[row_t][col_t]->getTileInfo() == -1) // ���ڸ�
		{
			OnGameFailed(); // ���� ����
		}
		else if (tileList[row_t][col_t]->getTileInfo() == 0) // ���ڰ� 0�̸�
		{
			// �ֺ�Ÿ�� �ڵ� ����
			for (int i = 0; i < 8; i++)
			{
				// ���� �ֺ� ���� �ֱ� ������ ����, ����Լ��� �Ϳ� �ָ�*
				if (row_t - 1 >= 0)
				{
					OpenTile(row_t - 1, col_t);
					if (col_t - 1 >= 0) { OpenTile(row_t - 1, col_t - 1); }
					if (col_t + 1 < Row_m) { OpenTile(row_t - 1, col_t + 1); };
				}
				if (row_t + 1 < Col_m)
				{
					OpenTile(row_t + 1, col_t);
					if (col_t - 1 >= 0) { OpenTile(row_t + 1, col_t - 1); }
					if (col_t + 1 < Row_m) { OpenTile(row_t + 1, col_t + 1); };
				}
				if (col_t - 1 >= 0) { OpenTile(row_t, col_t - 1); }
				if (col_t + 1 < Row_m) { OpenTile(row_t, col_t + 1); }

			}
		}
	}
}
void TileMap::InputManager()
{
	char ch = 0;
	if (_kbhit())
	{
		ch = _getch();
		switch (ch)
		{
		case UP:
			Y_c -= 1;
			break;
		case DOWN:
			Y_c += 1;
			break;
		case LEFT:
			X_c -= 1;
			break;
		case RIGHT:
			X_c += 1;
			break;
		case Enter:
			OpenTile(Y_c, X_c); //�ݴ��
			break;
		case Space:
			FlagTile(Y_c, X_c); //�ݴ��
			break;
		}
	}
}
void TileMap::SelectMap()
{
	int Input = 1;
	cout << "1: �ʱ�, 2: �߱�, 3: ���, �� �� �ʱ�" << endl;
	cout << "�� ����:";
	cin >> Input;
	if (Input == 1)
	{
		Row_m = 9;
		Col_m = 9;
		Bomb = 10;
	}
	else if (Input == 2)
	{
		Row_m = 16;
		Col_m = 16;
		Bomb = 40;
	}
	else if (Input == 3)
	{
		Row_m = 30;
		Col_m = 16;
		Bomb = 99;
	}
	else
	{
		Row_m = 9;
		Col_m = 9;
		Bomb = 10;
	}
}

/*
void TileMap::MakeTile()
{

	// Ÿ�� ��ü ����
	tileList.clear();
	for (int i = 0; i < Col_m; i++)
	{
		vector<Tile> v; // �� ��ü ����
		v.clear();
		for (int j = 0; j < Row_m; j++)
		{
			v.push_back(new Tile);
		}
		tileList.push_back(v);
	}

	// ���� ���̺��� set�� �̿��ؼ� ����
	int tileCount = Row_m, Col_m;
	set<int> randInfo;
	int randVal;

	while (randInfo.size() < Bomb)
	{
		randVal = rand() % tileCount;
		randInfo.insert(randVal);
	}

	set<int>::iterator it = randInfo.begin();
	for (it; it != randInfo.end(); it++)
	{
		int index = *it;
		int row_temp = index / Row_m;
		int col_temp = index % Row_m;

		(tileList[row_temp][col_temp])->setTileBomb();

		// ��ź ���� 8���� ���� +1
		if (row_temp - 1 >= 0)
		{
			tileList[row_temp - 1][col_temp]->AddTileCount();
			if (col_temp - 1 >= 0) { tileList[row_temp - 1][col_temp - 1]->AddTileCount(); }
			if (col_temp + 1 < Row_m) { tileList[row_temp - 1][col_temp + 1]->AddTileCount(); }
		}
		if (row_temp + 1 < Col_m)
		{
			tileList[row_temp + 1][col_temp]->AddTileCount();
			if (col_temp - 1 >= 0) { tileList[row_temp + 1][col_temp - 1]->AddTileCount(); }
			if (col_temp + 1 < Row_m) { tileList[row_temp + 1][col_temp + 1]->AddTileCount(); }
		}
		if (col_temp - 1 >= 0) { tileList[row_temp][col_temp - 1]->AddTileCount(); }
		if (col_temp + 1 < Row_m) { tileList[row_temp][col_temp + 1]->AddTileCount(); }
	}
}
*/
void TileMap::Play()
{
	SelectMap();
	MakeTile();
	DrawTile();

	while (1)
	{
		InputManager();
		DrawTile();
		Sleep(100);
		if (Failed == true) { break; }
	}

	ClearTile();
}
TileMap::TileMap()
{
	// �ʱⰪ
	X_c = 0;
	Y_c = 0;

	// �ʱ޼���
	Row_m = 9;
	Col_m = 9;
	Bomb = 10;
}

TileMap::~TileMap()
{
	for (int i = 0; i < Col_m; i++)
	{
		for (int j = 0; j < Row_m; j++)
		{
			if (tileList[i][j] != nullptr)
			{
				delete tileList[i][j];
			}
		}
	}
}
void TileMap::gotoXY(int x, int y)
{
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void TileMap::OnGameFailed()
{
	Failed = true;
}

void TileMap::ClearTile()
{
	// ���� �Ҵ� ����
	for (int i = 0; i < Col_m; i++)
	{
		for (int j = 0; j < Row_m; j++)
		{
			if (tileList[i][j] != nullptr)
			{
				delete tileList[i][j];
				tileList[i][j] = nullptr;
			}
		}
	}
}

void TileMap::FlagTile(int row_t, int col_t)
{
	//�߸��� �Է� ����
	if (row_t < 0 || row_t >= Col_m)
	{
		return;
	}
	if (col_t < 0 || col_t >= Row_m)
	{
		return;
	}

	//���� ���� ���� �÷���
	switch (tileList[row_t][col_t]->getTileState())
	{
	case TileState::Closed:
		tileList[row_t][col_t]->setTileState(TileState::Flag);
		break;
	case TileState::Flag:
		tileList[row_t][col_t]->setTileState(TileState::Closed);
		break;
	case TileState::Open:
		tileList[row_t][col_t]->setTileState(TileState::Closed);
		break;

	default:
		break;
	}
}



void TileMap::OpenTile(int row_t, int col_t)
{
	//�߸��� �Է� ����
	if (row_t < 0 || row_t >= Col_m)
	{
		return;
	}
	if (col_t < 0 || col_t >= Row_m)
	{
		return;
	}

	//���� �ִ� ���¸�
	if (tileList[row_t][col_t]->getTileState() == TileState::Closed)
	{
		tileList[row_t][col_t]->setTileState(TileState::Open);	//���� ���·� ����(�湮ó��)
		if (tileList[row_t][col_t]->getTileInfo() == -1)		//���ڸ�
		{
			OnGameFailed();	//���� ����
		}
		else if (tileList[row_t][col_t]->getTileInfo() == 0)	//���ڰ� 0�̸�
		{
			//�ֺ� Ÿ�� �ڵ� ����
			for (int i = 0; i < 8; i++)
			{
				//���� �ֺ� ���� �ֱ� ������ ����, ����Լ��� �Ϳ� �ָ�
				if (row_t - 1 >= 0)
				{
					OpenTile(row_t - 1, col_t);
					if (col_t - 1 >= 0)
					{
						OpenTile(row_t - 1, col_t - 1);
					}
					if (col_t + 1 < Row_m)
					{
						OpenTile(row_t - 1, col_t + 1);
					}
				}
				if (row_t + 1 < Col_m)
				{
					OpenTile(row_t + 1, col_t);
					if (col_t - 1 >= 0)
					{
						OpenTile(row_t + 1, col_t - 1);
					}
					if (col_t + 1 < Row_m)
					{
						OpenTile(row_t + 1, col_t + 1);
					}
				}
				if (col_t - 1 >= 0)
				{
					OpenTile(row_t, col_t - 1);
				}
				if (col_t + 1 < Row_m)
				{
					OpenTile(row_t, col_t + 1);
				}
			}
		}
	}
}

void TileMap::FlagTile(int row_t, int col_t)
{
	//�߸��� �Է� ����
	if (row_t < 0 || row_t >= Col_m)
	{
		return;
	}
	if (col_t < 0 || col_t >= Row_m)
	{
		return;
	}

	//���� ���� ���� �÷���
	switch (tileList[row_t][col_t]->getTileState())
	{
	case TileState::Closed:
		tileList[row_t][col_t]->setTileState(TileState::Flag);
		break;
	case TileState::Flag:
		tileList[row_t][col_t]->setTileState(TileState::Closed);
		break;
	case TileState::Open:
		tileList[row_t][col_t]->setTileState(TileState::Closed);
		break;

	default:
		break;
	}
}

void TileMap::DrawTile()
{
	for (int i = 0; i < Col_m; i++)
	{
		for (int j = 0; j < Row_m; j++)
		{
			gotoXY(j * 2, i); //��� �� ĭ�� ���������� x2ĭ �̵�
			switch (tileList[i][j]->getTileState())
			{
			case TileState::Closed:
				cout << "��"; //�⺻ Ÿ��
				break;
			case TileState::Flag:
				cout << "!"; // �÷���
				break;
			case TileState::Open:
				if (tileList[i][j]->getTileInfo() == -1)
				{
					cout << "*"; //��ź
				}
				else
				{
					cout << tileList[i][j]->getTileInfo(); //����
				}
				break;
			}
		}
	}
}

void TileMap::gotoXY(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void TileMap::OnGameFailed()
{
	Failed = true;
}

void TileMap::ClearTile()
{
	for (int i = 0; i < Col_m; i++)
	{
		for (int j = 0; j < Row_m; j++)
		{
			if (tileList[i][j] != nullptr)
			{
				delete tileList[i][j];
			}
		}
	}
}
