#include <iostream>

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
	cout << c;		//c�� ���
	return 0;

}
