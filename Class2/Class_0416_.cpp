#include <iostream>
#include <string>

using namespace std;

int main()
{
	//int sum = 0;
	//// 길이가 3인 int형 배열의 선언과 동시에 초기화
	//int grade[3] = { 85, 65, 90 };

	////배열의 길이 = sizeof(배열 이름) / sizeof(배열 이름[0])
	////for (int i = 0; i < 3; i++)
	//int len = sizeof(grade) / sizeof(grade[0]);
	//for (int i = 0; i < len; i++)
	//{
	//	// 인덱스를 이용한 배열의 접근
	//	sum += grade[i];
	//}
	//cout << "국영수 총점수 : " << sum << endl << "국영수 평균점수 : " << (float)sum / 3 << endl;


	int arr1[2][3] = { 10, 20, 30, 40 };
	int arr2[2][3] = {
		{10, 20, 30},
		{40, 50, 60}
	};

	cout << "arr1의 배열 요소의 값" << endl;
	cout << arr1[0][0] << " ";
	cout << arr1[0][1] << " ";
	cout << arr1[0][2] << endl;
	cout << arr1[1][0] << " ";
	cout << arr1[1][1] << " ";
	cout << arr1[1][2] << endl << endl;

	cout << "arr2의 배열 요소의 값" << endl;
	cout << arr2[0][0] << " ";
	cout << arr2[0][1] << " ";
	cout << arr2[0][2] << endl;
	cout << arr2[1][0] << " ";
	cout << arr2[1][1] << " ";
	cout << arr2[1][2] << endl << endl;

	//열 길이
	int arr1_col_len = sizeof(arr1[0]) / sizeof(arr1[0][0]);
	//행 길이
	int arr1_row_len = (sizeof(arr1) / arr1_col_len) / sizeof(arr1[0][0]);

	cout << "arr1의 배열 요소의 값" << endl;
	for (int i = 0; i < arr1_row_len; i++)
	{

		for (int j = 0; j < arr1_col_len; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}

	string name, subject;
	cout << "자신의 이름을 적어주세요 : ";

	getline(cin, name);
	cout << "가장 자신있는 과목을 적어주세요 : ";
	
	getline(cin, subject);
	cout << name << "님이 가장 자신있어 하는 과목은 바로 " << subject << "입니다!";

}