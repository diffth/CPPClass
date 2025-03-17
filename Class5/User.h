#pragma once
#include "Car.h"

class User
{

private:
	Car* car = nullptr;

public:
	/*
	void prossessCar(Car* car)
	{
		this->car = car;
	}
	void play()
	{
		if (car != nullptr)
		{
			car->Break();
		}
	}
	*/

	//의존 관계
	void play(Car* car)
	{
		if (car != nullptr)
		{
			car->Break();
		}
	}

	/*
	void PedalCar(Car* car, int vel)
	{
		//car->velocity += vel;
	}
	*/
};

