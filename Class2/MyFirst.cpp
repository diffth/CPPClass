#include "MyFirst.h"
#include <iostream>

using namespace std;
extern int global_A;

void A::PrintVariable(int local_A)
{
	global_A++;
	local_A++;
	cout << "����A: " << local_A << endl;
	cout << "����A: " << global_A << endl;
}

int A::Sum(int a, int b)
{
	std::cout << "A���� ȣ��";
	return a + b;
}
