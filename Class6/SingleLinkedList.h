#pragma once
#include <iostream>

using namespace std;

class Node
{
private:
	int data;
	Node* Next;

public:
	Node() { Next = nullptr; data = 0; }
	Node(const Node& node)
	{
		data = node.data;
		Next = node.Next;
	}
	Node& operator=(const Node& node)
	{
		data = node.data;
		Next = node.Next;
		return *this;
	}
	~Node() { cout << "³ëµå Á¦°ÅµÊ" << endl; }

	friend class SingleLinkedList;
};

class SingleLinkedList
{
private:
	Node* Head = nullptr;
	Node* Tail = nullptr;

public:
	SingleLinkedList();
	~SingleLinkedList();

	Node* begin() { return Head; }
	Node* end() { return Tail; }

	void push_front(int data);
	void pop_front();
	//void push_back(int data);
	//void pop_back();

	bool insert(Node* PrevNode, int data);
	//bool erase(Node* PrevNode);
	Node* SearchByValue(int data);
	void printList();

};

