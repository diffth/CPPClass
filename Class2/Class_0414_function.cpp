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

//�Լ��� ����� ���ÿ� ����
int Sum(int a, int b)	
{
	int temp = a + b;	//���� temp ����, a+b ���� ����
	return temp;		//�Լ��� ��� ���� temp �� ��ȯ
}

//int main()
//{
	/*
	int c;		// ���� c ����
	int a = 3;	//���� a ���� �� �ʱ�ȭ
	int b = 4;	//���� b ���� �� �ʱ�ȭ
	c = Sum(a, b);	//�Լ��� ȣ��
	cout << c << endl;		//c�� ���
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
	//printf("�Է�: %c\n", input);

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
	cout << "I am " << age << " years old\n"; //�� �ٲ�
	cout << "Goodbye!" << endl;
	*/

	//cout << Sum(10, 5) << std::endl; //����
	//cout << F::Sum(10, 5) << endl;
	//cout << M::Sum(5, 4) << endl;;

	//float r = 3;//������
	//float l;	//���� �ѷ� 
	//float s;	//���� ����
	//l = 2 * r * Pi; //�ѷ� ����
	//s = r * r * Pi; //���� ����

	//cout << l << endl;
	//cout << s << endl;

	//float a = 30; //deg �� �ǹ�
	//float b;
	//b = sin(a);
	//cout << "b�� : " << b << endl;

	//double aa = 30 * Pi / 180;
	//float bb = sin(aa);
	//cout << bb << endl;

	//CallMyself();
	//CallMyself(5);
	//cout << Factorial(5);
//}

void CallMyself(int num)
{
	cout << "�ڱ� �ڽ��� ȣ���ߴ�!" << endl;
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
