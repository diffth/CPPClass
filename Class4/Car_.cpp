#include "Car.h"

Car::Car()
{
	//constructor
	//객체를 생성할 때 호출해주는 함수
	//생성자에서도 초기화 가능
	//반환자료형 생략
	cout << "default constructor 호출" << endl;

}

Car::Car(float g, int m)
{
	cout << "gas " << gas << endl;
	cout << "max " << max << endl;
	gas = g;
	max = m;
	cout << "gas " << gas << endl;
	cout << "max " << max << endl;
	cout << "constructor 매개변수 float, int 호출" << endl; 
}

Car::~Car()
{
	//소멸자
	//객체를 소멸될 때 호출해주는 함수
	//Overloading x
	//멤버변수에 동적할당된 메모리 해제
	cout << "destructor 호출" << endl;
}

void Car::Break()
{
	cout << "Car class Break 함수 호출" << endl;
}

void Car::Run()
{
	cout << "Car class Run 함수 호출" << endl;
}

int Car::GetMax()
{
	return 0;
}

void Car::GasFull(int)
{
	cout << "Car class GasFull 함수 호출" << endl;
}
