#include "Car.h"
//#include <iostream>

Car::Car()
{
	Weight = 10.5;
	Fuel = 8.5;
	Max = 5;

	cout << "디폴트 생성자 호출" << endl;

}

Car::Car(float weight)
{
	Weight = weight;
	Fuel = 8.5;
	Max = 5;

	cout << "생성자1 호출" << endl;
}

Car::Car(float fuel, int Max)
{
	Weight = 10.5;
	Fuel = fuel;
	Max = 5;
	cout << "생성자2 호출" << endl;
}

Car::~Car()
{
	cout << Name << "Car의 소멸자 호출" << endl;

}

void Car::Break()
{
	//cout << Name << "Break 함수 호출" << endl;
	cout << "Car의 Break 함수 호출" << endl;
}

void Car::SetMax(float max)
{
	Max = max;
}

float Car::GetMax() const
{
	return Max;
}

void Car::Run()
{
	//Break;
	cout << Name << "Run 호출" << endl;
}

/*
void Car::Fuelup(int)
{

}
*/

void Car::PRun()
{
	cout << "Car의 Run 호출" << endl;
}

