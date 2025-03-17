#include "ObserverPattern.h"

void Subject::RegisterObserver(weak_ptr<Observer> O)
{
	//원래 중복한 건 피해야됨
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
	//이벤트라고 가정
	NotifyObservers("고기");
}
