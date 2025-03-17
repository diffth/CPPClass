// Class7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <thread>
#include <mutex>

#include "MySort.h"
#include "MySearch.h"

using namespace std;

class Vertex
{
public:
	int num = 0;	//������. ���� ��ȣ�� Ȯ���ϱ� ����
	bool visited = false;
	vector<int> edgeList;

public:
	void visitedNode()
	{
		visited = true;
		cout << num << "���� �湮��" << endl;
	}
};

void DFS(Vertex* g, Vertex& root)
{
	//�湮�� �����̸� ����
	if (root.visited == true)
	{
		return;
	}
	//�湮ó��
	else
	{
		root.visitedNode();
	}

	//����� ��尡 ���� ���
	if (!root.edgeList.empty())
	{
		//���� ����Ʈ ��ȸ�ϸ鼭 �ٽ� DFS ���ȣ��
		int vertexNum;	//���� ���� ��ȣ
		vector<int>::iterator it = root.edgeList.begin();
		for (it; it != root.edgeList.end(); it++)
		{
			vertexNum = *it;
			DFS(g, g[vertexNum]);
		}
	}
}

void function1()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "������ 1 ������" << endl;
	}
}

void function2()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "������ 2 ������" << endl;
	}
}

void function3()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "������ 3 ������" << endl;
	}
}

void OnePlusInRange(int end, int* result, mutex* mt)
{
	for (int i = 0; i < end; i++)
	{
		mt->lock();
		*result += 1;
		mt->unlock();
	}
}

int main()
{
	/*
	int arr[5] = { 5, 2, 4, 3, 1 };
	int arr_sorted[5];
	//selectionSort(arr, 5);
	//insertionSort(arr, 5);
	//mergeSort(arr, arr_sorted, 0, 4);

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	*/

	/*
	int arr[5] = { 5, 2, 4, 3, 1 };
	//cout << LinearySearch(arr, 5, 3) << endl;

	selectionSort(arr, 5);
	cout << BinarySearch(arr, 5, 4) << endl;
	*/

	/*
	Vertex graph[5];
	//���� ��ȣ �ʱ�ȭ
	for (int i = 0; i < 5; i++)
	{
		graph[i].num = i + 1;
	}

	graph[0].edgeList.push_back(1);	//1�� �������� 2�� �������� ��������
	graph[1].edgeList.push_back(2);	//2�� �������� 3�� �������� ��������
	graph[1].edgeList.push_back(3);	//2�� �������� 4�� �������� ��������
	graph[2].edgeList.push_back(4);	//3�� �������� 5�� �������� ��������
	graph[3].edgeList.push_back(4);	//4�� �������� 5�� �������� ��������

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "��° ������ ����� ����: ";
		vector<int> edgeList_t = graph[i].edgeList;

		for (int e : edgeList_t)
		{
			cout << e << " ";
		}
		cout << endl;
	}
	DFS(graph, graph[0]);
	*/

	/*
	thread th1(function1);
	thread th2(function2);
	thread th3(function3);

	for (int i = 0; i < 30; i++)
	{
		cout << "���� ������ ������" << endl;
	}
	th1.join();
	th2.join();
	th3.join();
	*/

	/*
	int threadNum = 5, end = 5000;	//������ ����, �� ����
	int result = 0;					//�� ���
	vector<thread> threads;			//�������
	mutex m;						//���ؽ� ��ü ����

	//������ ���� �� ����
	for (int i = 0; i < threadNum; i++)
	{
		threads.push_back(thread(OnePlusInRange, end/threadNum, &result, &m));
	}
	//������ ���
	for (auto it = threads.begin(); it != threads.end(); it++)
	{
		it->join();
	}
	cout << "���ϱ� ���: " << result << endl;
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
