#pragma once
#include <iostream>
#include <string>
#include "Engine.h"
 
using namespace std;

class Car
{
/*
public:
	static int countCar;
*/
private:
	int velocity = 10;
	Engine* engine = nullptr;

public:
	static int countCar;
	//int Fuel;
	//string Name;
	//int* ptr;

public:
	void SetCountCar(int val)
	{
		countCar = val;
	}
	static int GetCountCar()
	{
		return countCar;
	}
	/*
	static int AddCountCar()
	{
		countCar++;
	}
	*/

	void setEngine(Engine* e)
	{
		engine = e;
	}
	void Break()
	{
		if (engine != nullptr)
		{

		}
		cout << "Car의 Break 함수" << endl;
	}

public:
	Car()
	{
		countCar++;
	}
	/*
	Car(int fuel, string name)
	{
		Fuel = fuel;
		Name = name;
	}
	Car(const Car& other)
	{
		this->Name = other.Name;
		this->Fuel = other.Fuel;
		//this->ptr = other.ptr;	//얇은 복사일 때
		this->ptr = new int(*other.ptr);
		cout << "Car의 복상생성자 호출" << endl;
	}
	*/
	
	//friend class velocity;
	
};

