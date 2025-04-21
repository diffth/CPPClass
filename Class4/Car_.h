#pragma once
#include <iostream>

using namespace std;

class Car
{
//접근지정자 private, protected, public
private:
	float weight = 1500;
	float gas = 100;

public:
	//멤버변수 정의/초기화
	string name = "SONATA";
	int max = 4;

public:
	//멤버함수 선언, method
	Car();	//생성자
	Car(float gas, int max);
	Car(float i_weight, float i_gas, int i_max):weight(i_weight), gas(i_gas), max(i_max)
	{
		//weight = i_weight;
		//gas = i_gas;
		//max = i_max;
		cout << weight << " : " << i_weight << endl;
		cout << "초기화 생성자 호출" << endl;
	}
	~Car();	//소멸자
	void Break();
	void Run();
	int GetMax();
	void GasFull(int);

	void setGas(float i_gas)
	{
		gas = i_gas;
		cout << gas << endl;
	}

	float GetWeight()
	{
		return weight;
	}

};

