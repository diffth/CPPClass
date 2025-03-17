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
	int num = 0;	//데이터. 정점 번호를 확인하기 위함
	bool visited = false;
	vector<int> edgeList;

public:
	void visitedNode()
	{
		visited = true;
		cout << num << "정점 방문함" << endl;
	}
};

void DFS(Vertex* g, Vertex& root)
{
	//방문한 정점이면 무시
	if (root.visited == true)
	{
		return;
	}
	//방문처리
	else
	{
		root.visitedNode();
	}

	//연결된 노드가 있을 경우
	if (!root.edgeList.empty())
	{
		//정점 리스트 순회하면서 다시 DFS 재귀호출
		int vertexNum;	//가상 정점 번호
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
		cout << "쓰레드 1 실행중" << endl;
	}
}

void function2()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "쓰레드 2 실행중" << endl;
	}
}

void function3()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "쓰레드 3 실행중" << endl;
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
	DFS(graph, graph[0]);
	*/

	/*
	thread th1(function1);
	thread th2(function2);
	thread th3(function3);

	for (int i = 0; i < 30; i++)
	{
		cout << "메인 쓰레드 실행중" << endl;
	}
	th1.join();
	th2.join();
	th3.join();
	*/

	/*
	int threadNum = 5, end = 5000;	//쓰레드 갯수, 끝 범위
	int result = 0;					//합 결과
	vector<thread> threads;			//쓰레드들
	mutex m;						//뮤텍스 객체 생성

	//스레드 생성 및 실행
	for (int i = 0; i < threadNum; i++)
	{
		threads.push_back(thread(OnePlusInRange, end/threadNum, &result, &m));
	}
	//스레드 대기
	for (auto it = threads.begin(); it != threads.end(); it++)
	{
		it->join();
	}
	cout << "더하기 결과: " << result << endl;
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
