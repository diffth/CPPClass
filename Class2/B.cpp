#include <iostream>
#include "C.h"
#include "B.h"

using namespace std;

void B::Bfunction()
{
	cout << "Hello ";
	//Cfunction();
}

void B::Myfunction()
{
	cout << "B Myfunction" << endl;
}
