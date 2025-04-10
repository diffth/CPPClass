#include <iostream>

using namespace std;

int main()
{
	//int num;
	//cin >> num;

	//if문
	/*
	if (num < 5)
	{
		cout << "입력하신 수는 5보다 작다." << endl;
	}
	if (num == 5)
	{
		cout << "입력하신 수는 5 다." << endl;
	}
	if (num > 5)
	{
		cout << "입력하신 수는 5보다 크다." << endl;
	}
	*/

	//if else문
	/*
	if (num < 5)
	{
		cout << "입력하신 수는 5보다 작다." << endl;
	}
	else
	{
		if (num == 5)
		{
			cout << "입력하신 수는 5 다." << endl;
		}
		else
		{
			cout << "입력하신 수는 5보다 크다." << endl;
		}
	}
	*/

	//if elseif... else문
	/*
	if (num < 5)
	{
		cout << "입력하신 수는 5보다 작다." << endl;
	}
	else if(num == 5)
	{
		cout << "입력하신 수는 5 다." << endl;
	}
	else
	{
		cout << "입력하신 수는 5보다 크다." << endl;
	}
	*/

	/*
	switch (num)
	{
		case 1:
			cout << "입력하신 수는 1 이다." << endl;
			break;
		case 2:
			cout << "입력하신 수는 2 이다." << endl;
			break;
		case 3:
			cout << "입력하신 수는 3 이다." << endl;
			break;
		case 4:
			cout << "입력하신 수는 4 이다." << endl;
			break;
		case 5:
			cout << "입력하신 수는 5 이다." << endl;
			break;
		default:
			cout << "1부터 5까지의 수가 아닙니다." << endl;
			break;
	}
	*/

	int score;
	string grade;
	double gpa;

	cout << "점수를 입력하세요 (0 ~ 100): ";
	cin >> score;

	if (score >= 95) {
		grade = "A+";
		gpa = 4.5;
	}
	else if (score >= 90)
	{
		grade = "A0";
		gpa = 4.0;
	}
	else if (score >= 85)
	{
		grade = "B+";
		gpa = 3.5;
	}
	else if (score >= 80)
	{
		grade = "B0";
		gpa = 3.0;
	}
	else if (score >= 75)
	{
		grade = "C+";
		gpa = 2.5;
	}
	else if (score >= 70)
	{
		grade = "C0";
		gpa = 2.0;
	}
	else if (score >= 65)
	{
		grade = "D+";
		gpa = 1.5;
	}
	else if (score >= 60)
	{
		grade = "D0";
		gpa = 1.0;
	}
	else
	{
		grade = "F";
		gpa = 0.0;
	}
	cout << "당신의 학점은: " << grade << " (" << gpa << "점)" << endl;
}

