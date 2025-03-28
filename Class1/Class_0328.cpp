#include <iostream>

int main()
{
	/*
	int myInt = -10;
	long myLong = -4125151;
	unsigned int myUint = 10;
	unsigned long myUlong = 4125151;

	std::cout << myInt << std::endl;
	std::cout << myLong << std::endl;
	std::cout << myUint << std::endl;
	std::cout << myUlong << std::endl;

	float myFloat = 10.255;
	myFloat = 150.233233233;

	std::cout << myFloat << std::endl;

	float A = 1.2;
	float B = 1.2;

	std::cout << (A + B) << std::endl;
	std::cout << (A + B == 2.3) << std::endl;
	std::cout << (A == B) << std::endl;
	//0은 false, 1은 true -> bool

	char myChar = 'A';
	std::cout << myChar << std::endl;
	char myChar2 = 50;
	std::cout << myChar2 << std::endl;
	char myChar3 = 66;
	std::cout << myChar3 << std::endl;

	bool isTrue = 0;
	std::cout << isTrue << std::endl;

	isTrue = true;
	std::cout << isTrue << std::endl;

	const int Limit = 20; //상수
	//Limit = 10;
	std::cout << Limit << std::endl;
	*/

	//묵시(암시)적 형변환
	int A = 10.1355;
	float B = 10;
	char C = 97;
	int D = 'a';

	//명시적 형변환
	int a = (int)10.1355;
	float b = (float)10;
	char c = (char)97;
	int d = (int)'a';

	std::cout << A << " : " << a << std::endl;
	std::cout << B << " : " << b << std::endl;
	std::cout << C << " : " << c << std::endl;
	std::cout << D << " : " << d << std::endl;
}
