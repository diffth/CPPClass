#include <iostream>

using namespace std;

int main()
{
	//cout << "Hello" << endl;
	int* arr_ptr = nullptr;
	int length;
	cin >> length; //�迭�� ����
	arr_ptr = new int[length];

	cout << arr_ptr << endl;

}