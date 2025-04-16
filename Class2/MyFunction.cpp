#include "MyFunction.h"
#include <iostream>

using namespace std;

void CheckIncrement()
{
	static int static_B = 0;
	cout << "내부 정적 변수 " << ++static_B << endl;
}
