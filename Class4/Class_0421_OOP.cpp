#include <iostream>
#include "Car.h"

using namespace std;

class Animal
{
public:
	string name;

public:
	Animal()
	{

	}
	Animal(string name)
	{
		cout << name << "...생성..." << endl;
	}
	void Run()
	{
		cout << name << "...달린다..." << endl;
	}
};

int main()
{
	//Animal animal;			//객체 생성
	//animal.name = "라이언";	//멤버변수 값 대입	필드/속성
	//animal.Run();			//멤버함수 호출		메서드

	//tiger 인스턴스 생성
	//Animal* tiger = new Animal("호랑이");
	//delete tiger;	//메모리누수

	//Car MyCar;	//객체 생성
	//MyCar.Break();
	//MyCar.Run();
	//MyCar.GasFull(5);
	//Car MyCar(1000, 80, 2);
	//Car Mycar(100); 오버로딩된 생성자가 있을 경우 오류x

	//Car YouCar = Car(10, 5);

	//Car car;
	//Car* ptr_car = &car;

	//cout << ptr_car->name << endl;
	//cout << ptr_car->gas << endl;
	//ptr_car->Break();
	//ptr_car->GasFull(20);
	//cout << (*ptr_car).name << endl;

	Car car;
	car.setGas(440);
	cout << car.GetWeight() << endl;

}
