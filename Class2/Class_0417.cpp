#include <iostream>
#include <string>

using namespace std;

int main()
{
	int sum = 0;
	//배열길이 3, int형 배열선언, 초기화
	int grade[3] = { 85,67,90 }; //국,영,수
	
	//배열의 길이 = sizeof(배열이름) / sizeof(배열이름[0])
	int len = sizeof(grade) / sizeof(grade[0]);
	//for (int i = 0; i < 3; i++)
	for (int i = 0; i < len; i++)
	{
		sum += grade[i];
	}
	cout << "국영수 총  점수 : " << sum << endl;
	cout << "국영수 평균점수 : " << (float)sum/len << endl << endl;

	//행, 열
	int arr1[2][3] = { 10, 20, 30, 40 };
	int arr2[2][3] = {
						{10, 20, 30},
						{40, 50, 60}
					 };

	cout << "arr1의 배열 요소 값" << endl;
	cout << arr1[0][0] << " ";
	cout << arr1[0][1] << " ";
	cout << arr1[0][2] << endl;
	cout << arr1[1][0] << " ";
	cout << arr1[1][1] << " ";
	cout << arr1[1][2] << endl << endl;

	cout << "arr2의 배열 요소 값" << endl;
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

	cout << "arr1의 배열 요소 값" << endl;
	for (int i = 0; i < arr1_row_len; i++)
	{
		for (int j = 0; j < arr1_col_len; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	char fruits[3][10] = { "apple", "banana", "orange" };
	cout << "1번째 항목 : " << fruits[0] << endl;
	cout << "2번째 항목 : " << fruits[1] << endl;
	cout << "3번째 항목 : " << fruits[2] << endl;

	string name, subject;
	cout << "이름을 입력해주세요. : ";
	//cin >> name;
	getline(cin, name);
	cout << endl;
	cout << "좋아하는 과목을 입력해주세요. : ";
	//cin >> subject;
	getline(cin, subject);
	cout << name << " 님이 좋아하는 과목은 바로 " << subject << " 입니다." << endl;
}
