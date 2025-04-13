#include <iostream>
#include "MyMath.h"

int M::Sum(int a, int b)
{
	std::cout << "M에서 호출 ";
	return a + b;
}