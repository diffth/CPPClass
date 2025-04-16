#include <iostream>
#include <stdio.h>
#include <math.h>
#include "MyFirst.h"
#include "MyMath.h"
#define _CRT_SECURE_NO_WARNINGS
#define Pi 3.14

using namespace std;
using namespace F;
using namespace M;

//void CallMyself();
void CallMyself(int);
int Factorial(int num);

//int Sum(int a, int b);

//함수의 선언과 동시에 정의
int Sum(int a, int b)	
{
	int temp = a + b;	//변수 temp 선언, a+b 값을 대입
	return temp;		//함수의 출력 값에 temp 값 반환
}

//int main()
//{
	/*
	int c;		// 변수 c 선언
	int a = 3;	//변수 a 선언 및 초기화
	int b = 4;	//변수 b 선언 및 초기화
	c = Sum(a, b);	//함수의 호출
	cout << c << endl;		//c를 출력
	*/
	//return 0;

	/*
	printf("Hello");
	cout << endl;
	printf("Hello\n");
	printf("Hello\?");
	cout << endl;
	printf("\"Hello\"");
	cout << endl;
	*/

	//char initial = 'S';
	//printf("My Name is %c \n", initial);
	//printf("I am %d years old\n", 15);
	//printf("Goodbye\n");
	//printf("%d %d %d\n", 10, 5, 20);

	//char input;
	//scanf_s("%c", &input);
	//printf("입력: %c\n", input);

	//cout << "Hi";
	//cout << "My Name is S" << "I am 15 years old";
	//cout << "Goodbye!";

	/*
	int age = 25;
	char initial = 'K';
	cout << "Hi";
	cout << "My Name is" << initial;
	cout << "I am " << age << " years old";
	cout << "Goodbye!";
	*/

	/*
	int age = 25;
	char initial = 'K';
	cout << "Hi" << endl;
	cout << "My Name is" << initial << endl;
	cout << "I am " << age << " years old\n";
	cout << "Goodbye!" << endl;
	*/

	/*
	int age;
	char initial;
	cin >> age;
	cin >> initial;

	cout << "Hi" << endl;
	cout << "My Name is " << initial << endl;
	cout << "I am " << age << " years old\n"; //줄 바꿈
	cout << "Goodbye!" << endl;
	*/

	//cout << Sum(10, 5) << std::endl; //오류
	//cout << F::Sum(10, 5) << endl;
	//cout << M::Sum(5, 4) << endl;;

	//float r = 3;//반지름
	//float l;	//원의 둘레 
	//float s;	//원의 넓이
	//l = 2 * r * Pi; //둘레 공식
	//s = r * r * Pi; //넓이 공식

	//cout << l << endl;
	//cout << s << endl;

	//float a = 30; //deg 를 의미
	//float b;
	//b = sin(a);
	//cout << "b값 : " << b << endl;

	//double aa = 30 * Pi / 180;
	//float bb = sin(aa);
	//cout << bb << endl;

	//CallMyself();
	//CallMyself(5);
	//cout << Factorial(5);
//}

void CallMyself(int num)
{
	cout << "자기 자신을 호출했다!" << endl;
	--num;
	if (num >= 0)
	{
		CallMyself(num);
	}
	//CallMyself();
	//cout << Factorial(5) << endl;
}

int Factorial(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	return num * Factorial(num - 1);
}
