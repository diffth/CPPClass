#include "Car.h"
//#include <iostream>

Car::Car()
{
	Weight = 10.5;
	Fuel = 8.5;
	Max = 5;

	cout << "����Ʈ ������ ȣ��" << endl;

}

Car::Car(float weight)
{
	Weight = weight;
	Fuel = 8.5;
	Max = 5;

	cout << "������1 ȣ��" << endl;
}

Car::Car(float fuel, int Max)
{
	Weight = 10.5;
	Fuel = fuel;
	Max = 5;
	cout << "������2 ȣ��" << endl;
}

Car::~Car()
{
	cout << Name << "Car�� �Ҹ��� ȣ��" << endl;

}

void Car::Break()
{
	//cout << Name << "Break �Լ� ȣ��" << endl;
	cout << "Car�� Break �Լ� ȣ��" << endl;
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
	cout << Name << "Run ȣ��" << endl;
}

/*
void Car::Fuelup(int)
{

}
*/

void Car::PRun()
{
	cout << "Car�� Run ȣ��" << endl;
}

