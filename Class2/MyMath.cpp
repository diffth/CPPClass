#include "MyMath.h"
#include <iostream>

int B::Sum(int a, int b)
{
	std::cout << "B에서 호출";
	return a + b;
}