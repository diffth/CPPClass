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
	Node* deleteNode;	//삭제할 노드
	Node* accessNode;	//접근할 노드

	accessNode = Head;
	while (accessNode != Tail)
	{
		deleteNode = accessNode;
		accessNode = accessNode->Next;	//미리 다음 노드 지정
		delete deleteNode;
	}
	delete Tail;
}

void SingleLinkedList::push_front(int data)
{
	Node* NewNode;	//새로 생성할 노드 포인터
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
	Node* deleteNode;	//삭제할 노드
	if (Head->Next = Tail)
	{
		deleteNode = Head->Next;
		Head->Next = deleteNode->Next;
		delete deleteNode;
	}
	else
	{
		cout << "Pop할 데이터 없음" << endl;
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
		cout << "삽입 실패" << endl;
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
