#include <iostream>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

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
	int c;		// 변수 c 선언
	int a = 3;	//변수 a 선언 및 초기화
	int b = 4;	//변수 b 선언 및 초기화
	c = Sum(a, b);	//함수의 호출
	cout << c << endl;		//c를 출력
	//return 0;

	printf("Hello");
	cout << endl;
	printf("Hello\n");
	printf("Hello\?");
	cout << endl;
	printf("\"Hello\"");
	cout << endl;

	char Initial = 'S';
	printf("My Name is %c \n", Initial);
	printf("I am %d years old\n", 15);
	printf("Goodbye\n");
	printf("%d %d %d\n", 10, 5, 20);

	char initial;
	scanf_s("%c", &initial);
	printf("입력: %c", initial);


}
