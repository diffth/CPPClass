#include <iostream>
#include "MyFirst.h"

using namespace std;
extern int global_A;

void F::PrintVariable(int local_A)
{
	global_A++;
	local_A++;
	cout << "����A: " << local_A << endl;
	cout << "����A: " << global_A << endl;
}

int F::Sum(int a, int b)
{
	std::cout << "F���� ȣ�� ";
	return a + b;
}