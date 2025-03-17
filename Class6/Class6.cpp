// Class6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include "SingleLinkedList.h"

class MyClass
{
public:
	int var = 0;

public:
	MyClass(int var) { this->var = var; }
};

class Vertex
{
public:
	int num = 0;	//데이터. 정점 번호를 확인하기 위함
	vector<int> edgeList;
};

using namespace std;

int main()
{
	/*
	//vector<int> MyVector = { 1, 2, 3, 4 };

	cout << MyVector.at(3) << endl;
	cout << MyVector.front() << endl;
	cout << MyVector.back() << endl;
	cout << MyVector[2] << endl;

	MyVector.push_back(5);
	cout << MyVector.back() << endl;
	MyVector.insert(MyVector.end(), 6);
	cout << MyVector.back() << endl;
	*/

	/*
	vector<MyClass> v_MyClass;
	v_MyClass.push_back(MyClass(1));
	v_MyClass.push_back(MyClass(2));

	cout << v_MyClass[0].var << endl;
	cout << v_MyClass[1].var << endl;

	v_MyClass.erase(--v_MyClass.end());
	cout << v_MyClass.back().var << endl;
	*/

	/*
	int i = 0;
	vector<string> v_str = { "Apple", "Banana", "Orange", "PineApple" };
	vector<string>::iterator it = v_str.begin();

	//for (it; it != v_str.end(); it++)
	//{
		//i++;
		//cout << i << "번째 요소는: " << *it << endl;
	//}

	//for (auto it = v_str.begin(); it != v_str.end(); it++)
	//{
		//if (*it == "Orange")
		//{
			//break;
		//}
		//i++;
	//}
	//cout << i << endl;

	for (auto it = v_str.begin(); it != v_str.end();)
	{
		if (*it == "Banana")
		{
			it = v_str.erase(it);
			//break;
		}
		else
		{
			it++;
		}
	}
	for (it; it != v_str.end(); it++)
	{
		i++;
		cout << i << "번째 요소는: " << *it << endl;
	}
	*/

	/*
	int i = 0;
	vector<string> v_str = { "Apple", "Banana", "Orange", "PineApple" };

	for (auto elem : v_str)
	{
		elem = "KK";
		cout << elem << endl;
	}

	//for (auto elem : v_str)
	//{
		//cout << elem << endl;
	//}

	vector<string>::iterator it = v_str.begin();
	for (it; it != v_str.end(); it++)
	{
		i++;
		cout << i << "번째 요소는: " << *it << endl;
	}
	*/

	/*
	list<int> MyList = { 1, 2, 3, 4 };

	//cout << MyList.front() << endl;
	//cout << MyList.back() << endl;

	//list<int>::iterator it = MyList.begin();
	//cout << *(++it) << endl;
	//for (it; it != MyList.end(); it++)
	//{
		//cout << *it << endl;
	//}

	list<int>::reverse_iterator it = MyList.rbegin();
	for (it; it != MyList.rend(); it++)
	{
		cout << *it << endl;
	}
	*/

	/*
	SingleLinkedList mySingleList;
	mySingleList.push_front(1);
	mySingleList.push_front(2);
	mySingleList.push_front(3);
	mySingleList.printList();
	cout << "--------------" << endl;

	mySingleList.pop_front();
	mySingleList.pop_front();
	mySingleList.printList();
	cout << "--------------" << endl;

	mySingleList.insert(mySingleList.begin(), 2);
	mySingleList.printList();
	cout << "--------------" << endl;
	*/

	/*
	stack<string> MyStack({ "문자입력", "표입력", "그림입력" });
	//cout << MyStack.top() << endl;

	MyStack.push("문자정렬");
	//cout << MyStack.top() << endl;

	MyStack.pop();
	//cout << MyStack.top() << endl;

	while (!MyStack.empty())
	{
		cout << MyStack.top() << endl;
		MyStack.pop();
	}
	*/

	/*
	queue<string> MyQueue({ "이동명령1", "이동명령2", "공격명령1" });
	cout<< MyQueue.front() << endl;

	MyQueue.push("공격명령2");
	cout<< MyQueue.front() << endl;

	MyQueue.pop();
	cout<< MyQueue.front() << endl;

	while (!MyQueue.empty())
	{
		cout << MyQueue.front() << endl;
		MyQueue.pop();
	}
	*/

	/*
	set<int> MySet = { 1,2 };
	//set<int> MySet({ 1,2 });

	if (MySet.find(1) != MySet.end())
	{
		cout << "found" << endl;
		set<int>::iterator it = MySet.find(1);
		cout << *it << endl;
		//cout << *MySet.find(1) << endl;
	}
	else
	{
		cout << "not found" << endl;
	}

	MySet.insert(4);
	MySet.insert(3);
	MySet.insert(2);	//중복키 무시
	//MySet.erase(4);
	set<int>::iterator it = MySet.begin();
	for (it; it != MySet.end(); it++)
	{
		cout << *it << endl;
	}
	*/

	/*
	pair<string, int> MyPair = { "item1", 1000 };
	map<string, int> MyMap = { {"item2", 1000}, {"item1", 500} };

	if (MyMap.find("item2") != MyMap.end())
	{
		cout << "Found" << endl;
		map<string, int>::iterator it = MyMap.find("item2");
		cout << it->first << " : " << it->second << endl;
	}
	else
	{
		cout << "Not Found" << endl;
	}

	MyMap.insert({ "item3", 5000 });
	MyMap.insert(make_pair("item4", 200));
	//MyMap.erase("item1");

	map<string, int>::iterator it = MyMap.begin();

	//for (it; it != MyMap.end(); it++)
	//{
		//it->first = "Some";
		//it->second = 100;
	//}

	auto iter = MyMap.find("item4");
	if (iter != MyMap.end())
	{
		iter->second = 500;
	}

	for (it = MyMap.begin(); it != MyMap.end(); it++)
	{
		cout << it->first << " : " << it->second << endl;
	}
	*/

	/*
	Vertex graph[5];
	//정점 번호 초기화
	for (int i = 0; i < 5; i++)
	{
		graph[i].num = i + 1;
	}

	graph[0].edgeList.push_back(1);	//1번 정점에서 2번 정점으로 간선연결
	graph[1].edgeList.push_back(2);	//2번 정점에서 3번 정점으로 간선연결
	graph[1].edgeList.push_back(3);	//2번 정점에서 4번 정점으로 간선연결
	graph[2].edgeList.push_back(4);	//3번 정점에서 5번 정점으로 간선연결
	graph[3].edgeList.push_back(4);	//4번 정점에서 5번 정점으로 간선연결

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 정점에 연결된 간선: ";
		vector<int> edgeList_t = graph[i].edgeList;
		
		for (int e : edgeList_t)
		{
			cout << e << " ";
		}
		cout << endl;
	}
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
