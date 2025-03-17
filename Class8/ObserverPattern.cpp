#include "ObserverPattern.h"

void Subject::RegisterObserver(weak_ptr<Observer> O)
{
	//���� �ߺ��� �� ���ؾߵ�
	Observers.push_back(O);
}

void Subject::UnRegisterObserver(weak_ptr<Observer> O)
{
	vector<weak_ptr<Observer>>::iterator it;
	for (it = Observers.begin(); it != Observers.end(); it++)
	{
		if (it->lock() == O.lock())
		{
			Observers.erase(it);
			return;
		}
	}
}

void Subject::NotifyObservers(string str)
{
	for (auto O : Observers)
	{
		if (!O.expired())
		{
			O.lock()->notify(str);
		}
	}
}

void Subject::DoSomething()
{
	//�̺�Ʈ��� ����
	NotifyObservers("���");
}
