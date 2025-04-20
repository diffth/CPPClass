#include <iostream>

using namespace std;

int* getArray(int length);

int main()
{
	//cout << "Hello" << endl;
	int* arr_ptr = nullptr;
	int length;
	cin >> length; //배열의 길이
	arr_ptr = getArray(length);

	cout << arr_ptr << endl;
}

int* getArray(int length)
{
	return new int[length];
}
