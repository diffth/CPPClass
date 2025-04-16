#include <iostream>	//c++ library
#include <stdio.h>	//c	library
#include <math.h>
#include "MyFirst.h"
#include "MyMath.h"
#define _CRT_SECURE_NO_WARNINGS
#define Pi 3.14

using namespace std;

//int Sum(int a, int b);

//함수의 선언과 동시에 정의
int Sum(int a, int b)	
{
	int temp = a + b;	//변수 temp 선언, a+b 값을 대입
	return temp;		//함수의 출력 값에 temp 값 반환
}

int main()
{
	/*
	int c;		// 변수 c 선언
	int a = 3;	//변수 a 선언 및 초기화
	int b = 4;	//변수 b 선언 및 초기화
	c = Sum(a, b);	//함수의 호출
	cout << c << endl;		//c를 출력
	*/
	//return 0;

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

	//cout << Sum(10, 5) << std::endl; //오류
	cout << F::Sum(10, 5) << endl;
	cout << M::Sum(5, 4) << endl;;

	float r = 3;//반지름
	float l;	//원의 둘레 
	float s;	//원의 넓이
	l = 2 * r * Pi; //둘레 공식
	s = r * r * Pi; //넓이 공식

	cout << l << endl;
	cout << s << endl;

}
