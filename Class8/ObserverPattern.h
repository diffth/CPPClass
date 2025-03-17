#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Observer
{
public:
	~Observer() { cout << "옵저버 소멸자 호출" << endl; }
	virtual void notify(string what) = 0;
};

class ConcreteObserverA : public Observer
{
	virtual void notify(string what)
	{
		cout << what << "을 삶는다." << endl;
	}
};

class ConcreteObserverB : public Observer
{
	virtual void notify(string what)
	{
		cout << what << "을 굽는다." << endl;
	}
};

class Subject
{
private:
	vector<weak_ptr<Observer>> Observers;

public:
	void RegisterObserver(weak_ptr<Observer> O);
	void UnRegisterObserver(weak_ptr<Observer> O);
	void NotifyObservers(string str);

	void DoSomething();	//이벤트를 발생시켜 NotifyObservers를 호출할 함수
};