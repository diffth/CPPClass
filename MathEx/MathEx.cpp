// MathEx.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	/* �̺�
	double time = 0;			//���� �ð�
	double timeInterval = 0.01;	//�ð� ����
	double fx[400];				//�Լ� Y��
	
	for (int i = 0; i < 400; i++)
	{
		time += timeInterval;
		fx[i] = 0.5 * time * time;
	}
	double fxDerivative[399];

	// dy/dt �� �迭�� ����
	for (int j = 0; j < 399; j++)
	{
		fxDerivative[j] = (fx[j + 1] - fx[j]) / timeInterval;
	}

	cout << "1���� �� �� " << fxDerivative[100] << endl;
	cout << "1.5���� �� �� " << fxDerivative[(int)(1.5/timeInterval)] << endl;
	*/

	/* ����
	*/
	double time = 0;			//���� �ð�
	double byTime = 4;			//������ ����
	double timeInterval = 0.01;	//�ð� ����
	double fx;
	double integral = 0;		//���а�, �ʱⰪ 0

	while (1)
	{
		time += timeInterval;
		if(time >= byTime)
		{
			break;
		}
		fx = 0.5 * time * time;
		integral += (fx * timeInterval);
	}

	cout << "4�ʱ����� ���а�: " << integral << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
