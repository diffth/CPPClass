#pragma once
#include "Car.h"

class Suv:public Car
{
public:
	int newdata = 5;

public:
	~Suv()
	{
		cout << "Suv�� �Ҹ��� ȣ��" << endl;
	}
	virtual void Break()
	{
		__super::Break();
		cout << "Suv�� Break �Լ� ȣ��" << endl;
	}
	virtual void PRun()
	{
		cout << "Suv �Լ��� PRun �Լ� ȣ�� " << endl;
	}
	virtual void FuelUp(int fuel)
	{
		cout << "Suv�� FuelUp �Լ�" << endl;
	}
};

