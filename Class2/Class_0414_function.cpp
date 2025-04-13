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


}
