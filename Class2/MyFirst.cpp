#include "MyFirst.h"
#include <iostream>

using namespace std;

extern int global_A;

int F::Sum(int a, int b)
{
	cout << "F 에서의 Sum 함수 실행" << endl;
	return a + b;
}

void F::PrintVariable(int arg1)
{
	//local_A != arg1
	arg1++;
	global_A++;
	cout << "매개변수 arg1 : " << arg1 << endl;
	cout << "전역변수 global_A : " << global_A << endl;
}


