#include <iostream>

using namespace std;

int main()
{
	//cout << "Hello" << endl;
	int* arr_ptr = nullptr;
	int length;
	cin >> length; //배열의 길이
	arr_ptr = new int[length];

	cout << arr_ptr << endl;

}