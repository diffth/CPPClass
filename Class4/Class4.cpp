// Class4.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <iostream>
#include "Car.h"
#include "Sedan.h"
#include "Suv.h"

using namespace std;

//Car GlobalCar("Gloval");

class Animal
{
	string Name;

public:
	void Run()
	{
		cout << Name << "�޸���." << endl;
	}
};

int main()
{
	/*
	Car MyCar;	//��ü���� ���� ����
	Car YourCar = Car(10, 5);
	Car HeCar(10, 5, 6);
	Car HerCar(10, 5, 6, "BMW");

	Car* MyCar_ptr = &MyCar;
	Car& YourCar_ref = YourCar;

	Car LocalCar("����");
	Car* MyCar_ptr = new Car("����");
	delete MyCar_ptr;
	*/

	/*
	Car car;
	Car* car_ptr = &car;
	cout << car.Max << endl;
	car.Break();
	cout << car_ptr->Fuel << endl;
	car_ptr->Run();
	*/

	/*
	Car* car1_ptr = new Car;
	Car* car2_ptr = car1_ptr;

	car1_ptr->Break();
	cout << car1_ptr << endl;

	delete car1_ptr;
	car1_ptr = nullptr;
	car2_ptr = nullptr;

	if(car2_ptr != nullptr) car2_ptr->Run();
	cout << car2_ptr << endl;
	*/

	/*
	Car car;
	//car.Max;	//private
	//car.Run;	//private
	car.SetMax(5);
	cout << car.GetMax() << endl;
	*/

	/*
	Sedan MySedan;
	MySedan.Break();
	cout << MySedan.Fuel << endl;
	MySedan.Seat;
	*/

	/*
	Animal animal;
	animal.Run();
	*/

	/*
	Sedan MySedan(10, 5);
	//Sedan YourSedan = Sedan(5);
	*/

	/*
	Car MyCar;
	Suv MySuv;
	Sedan MySedan;

	MyCar.Break();
	MySuv.Break();
	MySedan.Break();
	*/

	/*
	Suv MySuv;
	Car* MyCar_ptr = &MySuv;
	//MyCar_ptr = new Suv();
	MyCar_ptr->PRun();
	//cout << MySuv.newdata << endl;
	
	Suv* MySuv_ptr = (Suv*)MyCar_ptr;
	cout << MySuv_ptr->newdata << endl;
	*/

	/*
	//Car* car1_ptr = new Car;
	Car* car2_ptr = new Suv;	//�� ĳ����
	Car* car3_ptr = new Sedan;

	//car1_ptr->Break();
	//car2_ptr->Break();
	//car3_ptr->Break();

	//car1_ptr->PRun();
	//car2_ptr->PRun();
	//car3_ptr->PRun();

	delete car2_ptr;
	delete car3_ptr;
	*/

	/*
	Car MyCar;
	Suv MySuv;
	Car* Car_ptr = &MySuv;
	//Suv* Suv_ptr = dynamic_cast<Suv*>(Car_ptr);
	//Suv* Suv_ptr = dynamic_cast<Suv*>(&MyCar);

	if (dynamic_cast<Suv*>(Car_ptr) == nullptr)
	{
		cout << "����ȯ ����" << endl;
	}
	else
	{
		cout << "����ȯ ����" << endl;
	}
	*/

	/*
	//Car MyCar;
	Suv MySuv;
	Car* Car_ptr = &MySuv;
	MySuv.FuelUp(10);
	Car_ptr->FuelUp(10);
	*/

	/*
	Car* CarList[3];
	CarList[0] = new Suv;
	CarList[1] = new Sedan;
	CarList[2] = new Suv;

	for (int i = 0; i < 3; i++)
	{
		CarList[i]->FuelUp(5);
	}
	for (int i = 0; i < 3; i++)
	{
		delete CarList[i];
	}
	*/

	 
	

	

}

// ���α׷� ����: <Ctrl+F5> �Ǵ� [�����] > [��������� �ʰ� ����] �޴�
// ���α׷� �����: <F5> Ű �Ǵ� [�����] > [����� ����] �޴�

// ������ ���� ��: 
//   1. [�ַ�� Ž����] â�� ����Ͽ� ������ �߰�/�����մϴ�.
//   2. [�� Ž����] â�� ����Ͽ� �ҽ� ��� �����մϴ�.
//   3. [���] â�� ����Ͽ� ���� ��� �� ��Ÿ �޽����� Ȯ���մϴ�.
//   4. [���� ���] â�� ����Ͽ� ������ ���ϴ�.
//   5. [������Ʈ] > [�� �׸� �߰�]�� �̵��Ͽ� �� �ڵ� ������ ����ų�, [������Ʈ] > [���� �׸� �߰�]�� �̵��Ͽ� ���� �ڵ� ������ ������Ʈ�� �߰��մϴ�.
//   6. ���߿� �� ������Ʈ�� �ٽ� ������ [����] > [����] > [������Ʈ]�� �̵��ϰ� .sln ������ �����մϴ�.
