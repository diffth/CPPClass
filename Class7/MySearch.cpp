#include "MySearch.h"

int LinearySearch(int arr[], int length, int value)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == value)
		{
			return i;
		}
	}
	return -1;
}

int BinarySearch(int arr[], int length, int value)
{
	int first = 0;
	int last = length - 1;
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2;
		if (value == arr[mid])
		{
			return mid;
		}
		else if (value < arr[mid])
		{
			last = mid - 1;
		}
		else
		{
			first = mid + 1;
		}
	}
	return -1;
}

Node* BinaryTree::BinarySearch(int Data)
{
	Node* accessNode = Root;
	while (accessNode != nullptr)
	{
		if (Data == accessNode->Data)
		{
			return accessNode;
		}
		else if(Data < accessNode->Data)
		{
			accessNode = accessNode->Left;
		}
		else
		{
			accessNode = accessNode->Right;
		}
	}
	return nullptr;
}

void BinaryTree::preOrder(Node* root)
{
	if (root != nullptr)
	{
		root->Data;	//먼저 방문
		preOrder(root->Left); 
		preOrder(root->Right);
	}
}
