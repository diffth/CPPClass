#pragma once
#include "Car.h"

class Sedan : public Car
{
public:
	int Seat;

public:
	Sedan()
	{
		cout << "Sedan�� ����Ʈ������ ȣ��" << endl;
	}

	Sedan(int weight, int seat)
	{
		Weight = weight;
		Seat = seat;
		cout << "������1 ȣ��" << endl;
	}

	Sedan(float weight, float fuel, int max, string name, int seat) : Car(weight, fuel, max, name)
	{
		Seat = seat;
		cout << "������2 ȣ��" << endl;
	}

	~Sedan()
	{
		cout << "Sedan�� �Ҹ��� ȣ��" << endl;
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
		cout << "Sedan�� Break �Լ� ȣ��" << endl;
	}

	virtual void FuelUp(int fuel)
	{
		cout << "Sedan�� FuelUp �Լ�" << endl;
	}
};

