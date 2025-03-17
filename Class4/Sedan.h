#pragma once
#include "Car.h"

class Sedan : public Car
{
public:
	int Seat;

public:
	Sedan()
	{
		cout << "Sedan의 디폴트생성자 호출" << endl;
	}

	Sedan(int weight, int seat)
	{
		Weight = weight;
		Seat = seat;
		cout << "생성자1 호출" << endl;
	}

	Sedan(float weight, float fuel, int max, string name, int seat) : Car(weight, fuel, max, name)
	{
		Seat = seat;
		cout << "생성자2 호출" << endl;
	}

	~Sedan()
	{
		cout << "Sedan의 소멸자 호출" << endl;
	}

	void SedanFunc()
	{
		cout << Fuel;
		Seat;
		Weight;
		Break();
	}

	virtual void Break()
	{
		cout << "Sedan의 Break 함수 호출" << endl;
	}

	virtual void FuelUp(int fuel)
	{
		cout << "Sedan의 FuelUp 함수" << endl;
	}
};

