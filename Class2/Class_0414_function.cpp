#include <iostream>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

//int Sum(int a, int b);

//�Լ��� ����� ���ÿ� ����
int Sum(int a, int b)	
{
	int temp = a + b;	//���� temp ����, a+b ���� ����
	return temp;		//�Լ��� ��� ���� temp �� ��ȯ
}

int main()
{
	int c;		// ���� c ����
	int a = 3;	//���� a ���� �� �ʱ�ȭ
	int b = 4;	//���� b ���� �� �ʱ�ȭ
	c = Sum(a, b);	//�Լ��� ȣ��
	cout << c << endl;		//c�� ���
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
	printf("�Է�: %c", initial);


}
