#include <iostream>

using namespace std;

int main()
{
	//cout << "Hello" << endl;
	//while문
	//int i = 1;
	//while (i < 5)
	//{
	//	cout << "while 문이 " << i << " 번째 반복 실행중..." << endl;
	//	i++;	//무한루프 x 조건변경구문 (무한루프탈출 ctrl + c)
	//}
	//cout << "while 문이 종료된 후 변수 i의 값 " << i << " ..." << endl;

	//do while문
	//int i = 1;
	//do
	//{
	//	cout << "do while 문이 " << i << " 번째 반복 실행중..." << endl;
	//	i++;
	//}
	//while (i < 5);
	////while (i > 5);
	//cout << "do while 문이 종료된 후 변수 i의 값 " << i << " ..." << endl;

	/*
	int i = 1;
	for (i = 1;i < 10;i++)
	{
		cout << "for문이 " << i << " 번째 반복 수행중..." << endl;
	}
	cout << "for문이 종료된 후 변수 i의 값 " << i << "..." << endl;
	*/

	//int num = 0;
	//while (1)
	//{
	//	num++;
	//	cout << "num 값은 : " << num << endl;

	//	if (num >= 5)
	//	{
	//		break;
	//	}
	//}
	//cout << "while 탈출..." << endl;

	//int exceptNum = 2;
	////int i = 1;
	//for (int i = 1; i <= 100; i++)
	//{
	//	//2의 배수 짝수
	//	if (i % exceptNum == 0)
	//	{
	//		continue;
	//	}
	//	cout << i << "\n";
	//}

	//int i = 1;
	////for (;;)	//무한루프
	//for (i=1; i<=10; i++)
	//{
	//	cout << "i 값 : " << i << endl;
	//}
	//cout << i << endl;

	//int sum = 0;
	//for (int i = 1; i <= 10; i++)
	//{
	//	//sum = sum + i;
	//	/*
	//	1 = 0 + 1;
	//	3 = 1 + 2;
	//	6 = 3 + 3;
	//	10= 6 + 4;
	//	15=10 + 5;
	//	21=15 + 6;
	//	28=21 + 7;
	//	36=28 + 8;
	//	45=36 + 9;
	//	55=45 + 10;
	//	*/
	//	sum += i;
	//}
	//cout << sum << endl;

	/*
	//bool isTrue = false;
	bool isTrue = true;
	do
	{
		cout << "실행중..." << endl;
	} while (isTrue);
	*/

	/*
	char ch;
	while (1)
	{
		cout << "k를 입력하면 탈출 : ";
		cin >> ch;

		if (ch == 'k')
		{
			cout << "무한루프 탈출 시도 "<< endl;
			break;
		}
	}
	cout << "무한루프 탈출 성공 "<< endl;
	*/
	
	/*
	char ch1;
	char ch2;
	bool isTrue1 = 1;
	bool isTrue2 = 1;

	while (isTrue2)
	{
		while (isTrue1)
		{
			cout << "a를 입력하면 Loop1 탈출 : ";
			cin >> ch1;
			if (ch1 == 'a')
			{
				isTrue1 = 0;
				break;
			}
		}
		cout << "루프1 탈출 성공" << endl;

		cout << "b를 입력하면 Loop2 탈출 : ";
		cin >> ch2;
		if (ch2 == 'b')
		{
			isTrue2 = 0;
			break;
		}
	}
	cout << "루프2 탈출 성공" << endl;
	*/

	/*
	char ch1 = 0;
	char ch2 = 0;

	while (1)
	{
		while (ch1 != 'a')
		{
			cout << "a를 입력하면 Loop1 탈출 : ";
			cin >> ch1;
			if (ch1 == 'a')
			{
				cout << "루프1 탈출 성공" << endl;
				break;
			}
		}
		cout << "b를 입력하면 Loop2 탈출 : ";
		cin >> ch2;
		if (ch2 == 'b')
		{
			break;
		}
	}
	cout << "루프2 탈출 성공" << endl;
	*/

	/*
	int num = 0;
	while (num <= 20)
	{
		num++;
		if ((num % 5) == 0)
		{
			continue;
		}
		cout << num << endl;
	}
	*/

	//구구단1
	/*
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i << "x" << j << "=" << i * j << endl;
		}
		cout << endl;
	}
	*/

	//구구단2
	/*
	for (int i = 1; i < 10; i++)
	{
		for (int j = 2; j < 10; j++)
		{
			cout << j << "x" << i << "=" << j * i << "\t";
		}
		cout << endl;
	}
	*/

	int num;
	cout << "숫자입력 : ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = num; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num * 3 - i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
}
