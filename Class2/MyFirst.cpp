#include "MyFirst.h"
#include <iostream>

using namespace std;
extern int global_A;

void A::PrintVariable(int local_A)
{
	global_A++;
	local_A++;
	cout << "로컬A: " << local_A << endl;
	cout << "전역A: " << global_A << endl;
}

int A::Sum(int a, int b)
{
	std::cout << "A에서 호출";
	return a + b;
}
