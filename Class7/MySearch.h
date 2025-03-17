#pragma once

int LinearySearch(int arr[], int length, int value);

int BinarySearch(int arr[], int length, int value);

class Node
{
public:
	int Data;
	Node* Left = nullptr;
	Node* Right = nullptr;

};

class BinaryTree
{
private:
	Node* Root = nullptr;

public:
	BinaryTree()
	{
		Root = new Node;
	}
	Node* BinarySearch(int Data);
	void preOrder(Node* root);
};