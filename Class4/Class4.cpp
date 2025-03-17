// Class4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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
		cout << Name << "달린다." << endl;
	}
};

int main()
{
	/*
	Car MyCar;	//객체지만 지역 변수
	Car YourCar = Car(10, 5);
	Car HeCar(10, 5, 6);
	Car HerCar(10, 5, 6, "BMW");

	Car* MyCar_ptr = &MyCar;
	Car& YourCar_ref = YourCar;

	Car LocalCar("지역");
	Car* MyCar_ptr = new Car("동적");
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
	Car* car2_ptr = new Suv;	//업 캐스팅
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
		cout << "형변환 실패" << endl;
	}
	else
	{
		cout << "형변환 성공" << endl;
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

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
