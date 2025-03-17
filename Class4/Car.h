#pragma once
#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
	//string Name;	//�ڵ��� �̸�
	float Weight = 10.5;	//�ڵ��� ����

protected:
	float Fuel = 5;			//����
	//int	Max = 4;			// ž�� �ο�
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
		cout << name << "������" << endl;
	}
	Car(float fuel, int Max);
	Car(float weight, float fuel, int max):Weight(weight), Fuel(fuel), Max(max)
	{
		cout << "�ʱ�ȭ ������ ȣ��" << endl;
	}
	Car(float weight, float fuel, int max, string name):Weight(weight), Fuel(fuel), Max(max), Name(name)
	{
		cout << "�ʱ�ȭ ����Ʈ ������ ȣ��" << endl;
	}
	virtual ~Car();			//

	//void Break();	//
	virtual void Break();	//
	//void Run();		//
	void SetMax(float);
	float GetMax() const;	//
	//void Fuelup(int);	//
	virtual void PRun();		//

	//���������Լ�
	virtual void FuelUp(int fuel) = 0;

private:
	void Run();		//

};

