#pragma once
#include "Car.h"

class Suv:public Car
{
public:
	int newdata = 5;

public:
	~Suv()
	{
		cout << "Suv의 소멸자 호출" << endl;
	}
	virtual void Break()
	{
		__super::Break();
		cout << "Suv의 Break 함수 호출" << endl;
	}
	virtual void PRun()
	{
		cout << "Suv 함수의 PRun 함수 호출 " << endl;
	}
	virtual void FuelUp(int fuel)
	{
		cout << "Suv의 FuelUp 함수" << endl;
	}
};

