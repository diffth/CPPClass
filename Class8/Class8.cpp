// Class8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
#include <functional>
#include <stack>

#include "ObserverPattern.h"

using namespace std;

class MyClass
{
public:
	~MyClass() { cout << "동적 할당 해제됨" << endl; }
	void DoSomething() { cout << "DoSomething" << endl; }
};

class Car
{
public:
	~Car(){ cout<<"Car 소멸됨" << endl; }
	void Break() { cout << "Car의 브레이크" << endl; }
};

/*
class User
{
private:
	weak_ptr<Car> car;

public:
	void PossessCar(weak_ptr<Car> car_w)
	{
		this->car = car_t;
	}
	void Play()
	{
		if (car)
		{
			car->Handle(50);
			car->Break(50);
		}
	}
};
*/

void Foo(string str)
{
	cout << str << endl;
}

class Test
{
public:
	int Add(int a, int b) { return (a + b); }
	int Minus(int a, int b) { return (a - b); }

};

int main()
{
	/*
	unique_ptr<int> uptr1(new int(10));
	unique_ptr<MyClass> uptr2 = make_unique<MyClass>();

	//uptr2.reset();	//강제적으로 소유권을 잃게 하고, 메모리를 해제함
	//uptr2.release();	//소유권을 박탈하는데, 메모리를 해제하지 않음
	if (uptr2 == nullptr)
	{
		cout << "uptr2의 소유권을 잃고, 메모리 해제됨" << endl;
	}
	else
	{
		cout << "uptr2는 힙 메모리를 가리킴" << endl;
	}

	unique_ptr<MyClass> uptr3 = move(uptr2);
	//uptr3 = uptr2 제한됨

	//if (uptr2 == nullptr){ cout << "uptr2는 죽은 포인터" << endl; }
	
	//uptr2.reset();
	//uptr3.reset();
	//cout << "이전에 해재되어야 함" << endl;

	uptr3->DoSomething();
	*/

	/*
	shared_ptr<MyClass> sptr = make_shared<MyClass>();
	auto sptr1 = sptr;
	weak_ptr<MyClass> wptr1 = make_shared<MyClass>();
	cout << wptr1.use_count() << endl;

	sptr.reset();
	sptr1.reset();
	cout << "이전에 해제됨" << endl;

	if (!wptr1.expired())
	{
		wptr1.lock()->DoSomething();
	}
	else
	{
		cout << "메모리가 해제되어있음" << endl;
	}

	//shared_ptr<MyClass> sptr2 = wptr1.lock();
	//sptr2->DoSomething();
	//wptr1.lock()->DoSomething();
	*/

	/*
	unique_ptr<User> user = make_shared;
	Car* car = new Car;
	user->PossessCar(car);
	delete car;
	car = nullptr;
	user->Play();
	*/

	/*
	void (*ptr_func)(string);
	ptr_func = Foo;
	//ptr_func = &Foo;

	//(*ptr_func)("Hi");
	ptr_func("Hello");
	*/

	/*
	function<int(int, int)> ptr_MFunc;
	function<int(int, int)> ptr_MFunc1;
	Test t;
	
	ptr_MFunc = bind(&Test::Add, &t, placeholders::_1, placeholders::_2);
	ptr_MFunc1 = bind(&Test::Minus, &t, placeholders::_1, placeholders::_2);
	//cout << ptr_MFunc(1, 2) << endl;

	stack<function<int(int, int)>> commands;
	commands.push(ptr_MFunc);
	commands.push(ptr_MFunc1);

	cout << commands.top()(5, 5) << endl;
	commands.pop();
	cout << commands.top()(5, 5) << endl;
	*/

	/*
	//각 주체, 관찰자 생성
	Subject subject;
	shared_ptr<Observer> O1 = make_shared<ConcreteObserverA>();
	shared_ptr<Observer> O2 = make_shared<ConcreteObserverB>();

	//관찰자 등록
	subject.RegisterObserver(O1);
	subject.RegisterObserver(O2);

	//이벤트 발생
	subject.DoSomething();

	//관찰자 해제
	subject.UnRegisterObserver(O1);
	subject.UnRegisterObserver(O2);

	//이벤트 발생
	subject.DoSomething();
	*/

	
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
