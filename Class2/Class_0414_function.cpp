#include <iostream>	//c++ library
#include <stdio.h>	//c	library
#include <math.h>
#include "MyFirst.h"
#include "MyMath.h"
#define _CRT_SECURE_NO_WARNINGS
#define Pi 3.14

using namespace std;

int Sum(int i, int j);

/*
int main()
{
	//cout << "Hello" << endl;
	int c;		//변수 선언
	int aa = 3;	//변수 선언, 초기화
	int bb = 4;	//변수 선언, 초기화
	//함수의 호출후 return 값을 int c 값에 대입
	c = Sum(aa, bb);
	cout << c << endl;

	cout << Sum(10, 5) << endl;
	cout << F::Sum(10, 5) << endl;
	cout << M::Sum(5, 4) << endl;

	//원의 둘레 r * 2 * Pi
	//원의 넓이 r * r * Pi
	float r = 3;//반지름
	float l;	//원의 둘래
	float s;	//원의 넓이

	l = r * 2 * Pi;
	s = r * r * Pi;

	cout << l << endl;
	cout << s << endl;

	//printf("Hello");
	//cout << endl;
	//printf("Hello\n");
	//printf("Hello\?");
	//cout << endl;
	//printf("\"Hello\"");
	//cout << endl;

	//char initial = 'S';
	//printf("My Name is %c. \n", initial);
	//printf("I am %d years old.\n", 5 + 1);
	//printf("I am %s years old.\n", "51");
	//printf("Good bye.\n");
	//printf("%d %d %d", 10, 5, 20);	//decimal

	char input;
	int age;
	scanf_s("%c", &input);
	printf("이름: %c\n", input);
	scanf_s("%d", &age);
	printf("나이: %d\n", age);

	int age;
	char initial;
	cin >> age;
	cin >> initial;

	cout << "Hi" << endl;
	cout << "My Name is " << initial << endl;
	cout << "I am " << age << " years old" << endl;
	cout << "Good bye!";

	//return 0;
}
*/

//함수 선언과 정의
int Sum(int m, int n)
{
	int temp = m + n;
	return temp;
}
