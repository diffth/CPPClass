// Class5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "Car.h"
#include "Sedan.h"
#include "Suv.h"
#include "MyVector2D.h"
#include "User.h"
#include "Engine.h"

template<typename T>
class MyArray
{
	int length = 5;
public:
	T* arr;

public:
	MyArray()
	{
		arr = new T[5];
	}
	~MyArray()
	{
		if (arr != nullptr)
		{
			delete[] arr;
		}
	}
	int FindByValue(T value)
	{
		for (int i = 0; i < length; i++)
		{
			if (arr[i] == value)
			{
				return i;
			}
			return -1;
		}
	}
};


class Actor
{
public:
	~Actor()
	{
		cout << this << " 소멸됨" << endl;
	}
	virtual void BeginPlay()
	{
		cout << this << " 플레이중" << endl;
	}

};

class Map
{
public:
	Actor* actorList[3];

public:
	Map()
	{
		actorList[0] = new Actor;
		actorList[1] = new Actor;
		actorList[2] = new Actor;
	}
	~Map()
	{
		for (int i = 0; i < 3; i++)
		{
			if (actorList[i] != nullptr)
			{
				delete actorList[i];
			}
		}
	}

	void Play()
	{
		for (int i = 0; i < 3; i++)
		{
			if (actorList[i] != nullptr)
			{
				actorList[i]->BeginPlay();
			}
		}
	}
};

class Singleton
{
private:
	Singleton() {};
	Singleton(const Singleton& ref){}
	Singleton& operator=(const Singleton& ref){}
	~Singleton(){}

public:
	static Singleton& getInstance()
	{
		static Singleton s;
		return s;
	}
	void setData(int newdata)
	{

	}

public:
	int data = 5;
};

void gotoXY(int x, int y)
{
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

using namespace std;

int Car::countCar = 0;

int main()
{
	/*
	Car car1;
	Suv suv1;
	Sedan* sedan_prt = new Sedan();

	//cout << "모든 차량 수는: " << suv1.countCar << endl;
	//cout << "모든 차량 수는: " << Car::countCar << endl;
	cout << "모든 차량 수는: " << car1.GetCountCar() << endl;
	cout << "모든 차량 수는: " << Car::GetCountCar() << endl;
	*/

	/*
	Car car1(5, "BMW");
	car1.ptr = new int(10);
	Car car2(car1);

	//cout << car1.Name << endl;
	//cout << car2.Name << endl;

	cout << *car1.ptr << endl;
	cout << *car2.ptr << endl;
	
	//cout << car1.ptr << endl;
	//cout << car2.ptr << endl;
	*/

	/*
	MyVector2D A(10, 5);
	MyVector2D B = A;
	MyVector2D C = A + B;
	cout << C.x << " " << C.y << endl;
	cout << A * B << endl;
	*/

	/*
	MyArray<int> myArray;

	for (int i = 0; i < 5; i++)
	{
		myArray.arr[i] = i;
	}
	
	cout<< myArray.FindByValue(3);
	*/

	/*
	Car car = new Car;
	User user;

	user.PedalCar(car, 10);
	*/

	/*
	User* user = new User;
	Car* car = new Car;
	Engine* engine = new Engine;

	//user->prossessCar(car);
	//user->play();
	car->setEngine(engine);
	user->play(car);
	delete user;
	delete car;
	delete engine;
	*/

	/*
	Map myMap;
	myMap.Play();
	*/

	/*
	Singleton& single = Singleton::getInstance();
	single.data = 10;
	cout << single.data << endl;
	*/

	/*
	gotoXY(5, 5);
	cout << "여기" << endl;
	system("cls");
	*/

	/*
	char c;
	c = (char)_getch();
	*/

	//rand();
	for (int i = 0; i < 10; i++)
	{
		cout << rand() << endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
