#include <iostream>
#include <string>

using namespace std;

int main()
{
	//int sum = 0;
	//// ���̰� 3�� int�� �迭�� ����� ���ÿ� �ʱ�ȭ
	//int grade[3] = { 85, 65, 90 };

	////�迭�� ���� = sizeof(�迭 �̸�) / sizeof(�迭 �̸�[0])
	////for (int i = 0; i < 3; i++)
	//int len = sizeof(grade) / sizeof(grade[0]);
	//for (int i = 0; i < len; i++)
	//{
	//	// �ε����� �̿��� �迭�� ����
	//	sum += grade[i];
	//}
	//cout << "������ ������ : " << sum << endl << "������ ������� : " << (float)sum / 3 << endl;


	int arr1[2][3] = { 10, 20, 30, 40 };
	int arr2[2][3] = {
		{10, 20, 30},
		{40, 50, 60}
	};

	cout << "arr1�� �迭 ����� ��" << endl;
	cout << arr1[0][0] << " ";
	cout << arr1[0][1] << " ";
	cout << arr1[0][2] << endl;
	cout << arr1[1][0] << " ";
	cout << arr1[1][1] << " ";
	cout << arr1[1][2] << endl << endl;

	cout << "arr2�� �迭 ����� ��" << endl;
	cout << arr2[0][0] << " ";
	cout << arr2[0][1] << " ";
	cout << arr2[0][2] << endl;
	cout << arr2[1][0] << " ";
	cout << arr2[1][1] << " ";
	cout << arr2[1][2] << endl << endl;

	//�� ����
	int arr1_col_len = sizeof(arr1[0]) / sizeof(arr1[0][0]);
	//�� ����
	int arr1_row_len = (sizeof(arr1) / arr1_col_len) / sizeof(arr1[0][0]);

	cout << "arr1�� �迭 ����� ��" << endl;
	for (int i = 0; i < arr1_row_len; i++)
	{

		for (int j = 0; j < arr1_col_len; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}

	string name, subject;
	cout << "�ڽ��� �̸��� �����ּ��� : ";

	getline(cin, name);
	cout << "���� �ڽ��ִ� ������ �����ּ��� : ";
	
	getline(cin, subject);
	cout << name << "���� ���� �ڽ��־� �ϴ� ������ �ٷ� " << subject << "�Դϴ�!";

}