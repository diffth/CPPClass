#pragma once
#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
	//string Name;	//자동차 이름
	float Weight = 10.5;	//자동차 무게

protected:
	float Fuel = 5;			//연료
	//int	Max = 4;			// 탑승 인원
	//const string Name;
	//string Name;

private:
	int Max;
	string Name;

public:
	Car();			//
	Car(float weight);
	Car(string name)
	{
		Name = name;
		cout << name << "생성됨" << endl;
	}
	Car(float fuel, int Max);
	Car(float weight, float fuel, int max):Weight(weight), Fuel(fuel), Max(max)
	{
		cout << "초기화 생성자 호출" << endl;
	}
	Car(float weight, float fuel, int max, string name):Weight(weight), Fuel(fuel), Max(max), Name(name)
	{
		cout << "초기화 리스트 생성자 호출" << endl;
	}
	virtual ~Car();			//

	//void Break();	//
	virtual void Break();	//
	//void Run();		//
	void SetMax(float);
	float GetMax() const;	//
	//void Fuelup(int);	//
	virtual void PRun();		//

	//순수가상함수
	virtual void FuelUp(int fuel) = 0;

private:
	void Run();		//

};

