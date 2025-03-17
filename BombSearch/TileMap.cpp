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
	//초기값
	X_c = 0;
	Y_c = 0;

	//초급세팅
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
	cout << "1: 초급, 2: 중급, 3: 고급, 그 외 초급" << endl;
	cout << "맵 선택: ";
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
	//타일 동적 생성
	for (int i = 0; i < Col_m; i++)
	{
		for (int j = 0; j < Row_m; j++)
		{
			tileList[i][j] = new Tile;
		}
	}

	//배열에 지뢰 위치 정보를 랜덤하게 집어넣는다.
	int tileCount = Row_m * Col_m;	//전체 타일 갯수
	int* randInfo = new int[Bomb];
	int randVal;	//랜덤값
	int ID = 0;		//현재 생성한 폭탄 갯수

	bool IsFound = true;

	//값이 중복되지 않도록 다이스
	while (ID<Bomb)
	{
		IsFound = true;
		randVal = rand() % tileCount;

		//랜덤배열에 중복된지 순회하며 검사
		for (int i = 0; i < ID; i++)
		{
			if (randVal == randInfo[i])
			{
				IsFound = false;
				break;
			}
		}

		//찾았으면 랜덤 값 넣기
		if (IsFound == true)
		{
			randInfo[ID] = randVal;
			//cout<<randVal<< endl;
			ID++;
		}
	}
	*/

	//타일 객체 생성
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

	//랜덤 테이블을 set 을 이용해서 생성
	int tileCount = Row_m * Col_m;
	set<int> randInfo;
	int randVal;

	while (randInfo.size() < Bomb)
	{
		randVal = rand() % tileCount;
		randInfo.insert(randVal);
	}

	/*
	//랜덤 배열을 이용해 타일에 폭탄/숫자 정보 넣기
	for (int i = 0; i < Bomb; i++)
	{
		int index = randInfo[i];
		int row_temp = index / Row_m;
		int col_temp = index % Row_m;
		(tileList[row_temp][col_temp])->setTileBomb();

		//폭탄 주위 8개에 숫자 +1
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
	//랜덤 배열을 이용해 타일에 폭탄/숫자 정보 넣기

	set<int>::iterator it = randInfo.begin();
	for (it; it != randInfo.end(); it++)
	{
		int index = *it;
		int row_temp = index / Row_m;
		int col_temp = index % Row_m;
		(tileList[row_temp][col_temp])->setTileBomb();

		//폭탄 주위 8개에 숫자 +1
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

	//동적 할당 해제
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
	// 잘못된 입력 차단
	if (row_t < 0 || row_t >= Col_m) {
		return;
	}
	if (col_t < 0 || col_t >= Row_m) { return; }

	if (tileList[row_t][col_t]->getTileState() == TileState::Closed) // 닫혀 있는 상태면
	{
		tileList[row_t][col_t]->setTileState(TileState::Open); // 열기 상태로 변경(방문처리)
		if (tileList[row_t][col_t]->getTileInfo() == -1) // 지뢰면
		{
			OnGameFailed(); // 게임 실패
		}
		else if (tileList[row_t][col_t]->getTileInfo() == 0) // 숫자가 0이면
		{
			// 주변타일 자동 오픈
			for (int i = 0; i < 8; i++)
			{
				// 전에 주변 숫자 넣기 구조와 같고, 재귀함수인 것에 주목*
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
			OpenTile(Y_c, X_c); //반대로
			break;
		case Space:
			FlagTile(Y_c, X_c); //반대로
			break;
		}
	}
}
void TileMap::SelectMap()
{
	int Input = 1;
	cout << "1: 초급, 2: 중급, 3: 고급, 그 외 초급" << endl;
	cout << "맵 선택:";
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

	// 타일 객체 생성
	tileList.clear();
	for (int i = 0; i < Col_m; i++)
	{
		vector<Tile> v; // 행 전체 정보
		v.clear();
		for (int j = 0; j < Row_m; j++)
		{
			v.push_back(new Tile);
		}
		tileList.push_back(v);
	}

	// 랜덤 테이블을 set을 이용해서 생성
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

		// 폭탄 주위 8개에 숫자 +1
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
	// 초기값
	X_c = 0;
	Y_c = 0;

	// 초급세팅
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
	// 동적 할당 해제
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
	//잘못된 입력 차단
	if (row_t < 0 || row_t >= Col_m)
	{
		return;
	}
	if (col_t < 0 || col_t >= Row_m)
	{
		return;
	}

	//닫혀 있을 때만 플래그
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
	//잘못된 입력 차단
	if (row_t < 0 || row_t >= Col_m)
	{
		return;
	}
	if (col_t < 0 || col_t >= Row_m)
	{
		return;
	}

	//닫혀 있는 상태면
	if (tileList[row_t][col_t]->getTileState() == TileState::Closed)
	{
		tileList[row_t][col_t]->setTileState(TileState::Open);	//열기 상태로 변경(방문처리)
		if (tileList[row_t][col_t]->getTileInfo() == -1)		//지뢰면
		{
			OnGameFailed();	//게임 실패
		}
		else if (tileList[row_t][col_t]->getTileInfo() == 0)	//숫자가 0이면
		{
			//주변 타일 자동 오픈
			for (int i = 0; i < 8; i++)
			{
				//전에 주변 숫자 넣기 구조와 같고, 재귀함수인 것에 주목
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
	//잘못된 입력 차단
	if (row_t < 0 || row_t >= Col_m)
	{
		return;
	}
	if (col_t < 0 || col_t >= Row_m)
	{
		return;
	}

	//닫혀 있을 때만 플래그
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
			gotoXY(j * 2, i); //□는 두 칸을 차지함으로 x2칸 이동
			switch (tileList[i][j]->getTileState())
			{
			case TileState::Closed:
				cout << "□"; //기본 타일
				break;
			case TileState::Flag:
				cout << "!"; // 플래그
				break;
			case TileState::Open:
				if (tileList[i][j]->getTileInfo() == -1)
				{
					cout << "*"; //폭탄
				}
				else
				{
					cout << tileList[i][j]->getTileInfo(); //숫자
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
