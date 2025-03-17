#include "SingleLinkedList.h"

SingleLinkedList::SingleLinkedList()
{
	Head = new Node;
	Tail = new Node;
	Head->Next = Tail;
	Tail->Next = nullptr;
}

SingleLinkedList::~SingleLinkedList()
{
	Node* deleteNode;	//������ ���
	Node* accessNode;	//������ ���

	accessNode = Head;
	while (accessNode != Tail)
	{
		deleteNode = accessNode;
		accessNode = accessNode->Next;	//�̸� ���� ��� ����
		delete deleteNode;
	}
	delete Tail;
}

void SingleLinkedList::push_front(int data)
{
	Node* NewNode;	//���� ������ ��� ������
	if (Head->Next == Tail)
	{
		NewNode = new Node;
		NewNode->data = data;
		NewNode->Next = Tail;
		Head->Next = NewNode;
	}
	else
	{
		NewNode = new Node;
		NewNode->data = data;
		NewNode->Next = Head->Next;
		Head->Next = NewNode;
	}
}

void SingleLinkedList::pop_front()
{
	Node* deleteNode;	//������ ���
	if (Head->Next = Tail)
	{
		deleteNode = Head->Next;
		Head->Next = deleteNode->Next;
		delete deleteNode;
	}
	else
	{
		cout << "Pop�� ������ ����" << endl;
	}
}

bool SingleLinkedList::insert(Node* PrevNode, int data)
{
	Node* InsertNode;
	if (PrevNode != nullptr && PrevNode != Tail)
	{
		InsertNode = new Node;
		InsertNode->data = data;
		InsertNode->Next = PrevNode->Next;
		PrevNode->Next = InsertNode;
		return true;
	}
	else
	{
		cout << "���� ����" << endl;
		return false;
	}
}

Node* SingleLinkedList::SearchByValue(int data)
{
	Node* accessNode;
	accessNode = Head;

	while (accessNode != Tail)
	{
		if (accessNode->data == data)
		{
			return accessNode;
		}
		accessNode = accessNode->Next;
	}
	return nullptr;
}

void SingleLinkedList::printList()
{
	Node* accessNode;
	accessNode = Head->Next;

	while (accessNode != Tail)
	{
		accessNode = accessNode->Next;
		cout << "Data: " << accessNode->data << endl;
	}
}
