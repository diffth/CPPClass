#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Observer
{
public:
	~Observer() { cout << "������ �Ҹ��� ȣ��" << endl; }
	virtual void notify(string what) = 0;
};

class ConcreteObserverA : public Observer
{
	virtual void notify(string what)
	{
		cout << what << "�� ��´�." << endl;
	}
};

class ConcreteObserverB : public Observer
{
	virtual void notify(string what)
	{
		cout << what << "�� ���´�." << endl;
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

	void DoSomething();	//�̺�Ʈ�� �߻����� NotifyObservers�� ȣ���� �Լ�
};