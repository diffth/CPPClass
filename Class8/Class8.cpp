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
	~MyClass() { cout << "���� �Ҵ� ������" << endl; }
	void DoSomething() { cout << "DoSomething" << endl; }
};

class Car
{
public:
	~Car(){ cout<<"Car �Ҹ��" << endl; }
	void Break() { cout << "Car�� �극��ũ" << endl; }
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

	//uptr2.reset();	//���������� �������� �Ұ� �ϰ�, �޸𸮸� ������
	//uptr2.release();	//�������� ��Ż�ϴµ�, �޸𸮸� �������� ����
	if (uptr2 == nullptr)
	{
		cout << "uptr2�� �������� �Ұ�, �޸� ������" << endl;
	}
	else
	{
		cout << "uptr2�� �� �޸𸮸� ����Ŵ" << endl;
	}

	unique_ptr<MyClass> uptr3 = move(uptr2);
	//uptr3 = uptr2 ���ѵ�

	//if (uptr2 == nullptr){ cout << "uptr2�� ���� ������" << endl; }
	
	//uptr2.reset();
	//uptr3.reset();
	//cout << "������ ����Ǿ�� ��" << endl;

	uptr3->DoSomething();
	*/

	/*
	shared_ptr<MyClass> sptr = make_shared<MyClass>();
	auto sptr1 = sptr;
	weak_ptr<MyClass> wptr1 = make_shared<MyClass>();
	cout << wptr1.use_count() << endl;

	sptr.reset();
	sptr1.reset();
	cout << "������ ������" << endl;

	if (!wptr1.expired())
	{
		wptr1.lock()->DoSomething();
	}
	else
	{
		cout << "�޸𸮰� �����Ǿ�����" << endl;
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
	//�� ��ü, ������ ����
	Subject subject;
	shared_ptr<Observer> O1 = make_shared<ConcreteObserverA>();
	shared_ptr<Observer> O2 = make_shared<ConcreteObserverB>();

	//������ ���
	subject.RegisterObserver(O1);
	subject.RegisterObserver(O2);

	//�̺�Ʈ �߻�
	subject.DoSomething();

	//������ ����
	subject.UnRegisterObserver(O1);
	subject.UnRegisterObserver(O2);

	//�̺�Ʈ �߻�
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
