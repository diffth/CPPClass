
#include <iostream>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//int Sum(int a, int b) {
	//int c;
	//c = a + b;
	//return c;
//}
int Sum(int a, int b);

int main()
{
	//int a = 5;
	//int b = 2;
	//int c = 10;

	//int a = 5, b = 2, c = 10;
	//int d, e;
	//d = a + b, e = a - b;
	//std::cout << (a >= b) << std::endl;

	//int x = 5;
	//int y = (++x) + 5;	//전위연산
	//int y = (x++) + 5;	//후위연산
	//std::cout << y << std::endl;

	//int aa = 10, bb = 5;
	//int greater;
	//greater = (aa > bb) ? aa : bb;
	//greater = (aa < bb) ? aa : bb;
	//std::cout << greater << std::endl;

	//int aaa;
	//double bbb;

	//std::cout << sizeof(aaa) << std::endl;
	//std::cout << sizeof(int) << std::endl;
	//std::cout << sizeof(bbb) << std::endl;

	//int x = 3;
	//int y = 4;
	//int z;
	//Sum(1, 2);
	//z = Sum(x, y);
	//std::cout << Sum(1, 2) << std::endl;
	//std::cout << z << std::endl;

	//printf("Hello");
	//printf("Hello\n");
	//printf("Hello\?");
	//printf("\"Hello\"");

	//char initial = 'S';
	//printf("Hello\n");
	//printf("My Name is %c\n", initial);
	//printf("I am %d years old\n", 15);
	//printf("Goodbye\n");
	//printf("%d %d %d", 10, 5, 20);

	//char initial;
	//scanf_s("%c", &initial);
	//printf("입력 : %c", initial);

	//std::cout << "Hi\n";
	//std::cout << "My Name is S. " << "I am 15 years old.\n";
	//std::cout << "Goodbye!\n\n";

	//int age = 25;
	//char initial = 'K';
	//std::cout << "Hi\n";
	//std::cout << "My Name is " << initial << ".\n";
	//std::cout << "I am " << age << " years old.\n";
	//std::cout << "Goodbye!";

	//int age = 25;
	//char initial = 'K';
	//std::cout << "Hi" << std::endl;
	//std::cout << "My Name is " << initial << std::endl;
	//std::cout << "I am " << age << " years old." << std::endl;
	//std::cout << "Goodbye!";

	//int age;
	//char initial;
	//std::cin >> age;
	//std::cin >> initial;

	//std::cout << "Hi" << std::endl;
	//std::cout << "My Name is " << initial << std::endl;
	//std::cout << "I am " << age << " years old\n";
	//std::cout << "Goodbye!" << std::endl;

	//int num;
	//char name;
	//std::cin >> num >> name;
	//std::cout << num << " " << name;

	
	//int key;
	//std::cin >> key;

	//if (key == 5)
	//{
		//std::cout << "금고가 열렸습니다." << std::endl;
	//}
	//else
	//{
		//std::cout << "금고가 열리지 않습니다." << std::endl;
	//}

	//int a = 7;
	//int a = 0;
	int a = 0;
	int b = 1;

	/*
	if (a > 5)
	{
		std::cout << "a는 5보다 크다." << std::endl;
	}
	else if (a <= 0)
	{
		std::cout << "a는 0보다 작거나 같다." << std::endl;
	}
	else
	{
		std::cout << "a는 5보다 작고, 0보다 크다." << std::endl;
	}*/

	/*
	if (a > 0)
	{
		std::cout << "a는 0보다 크다." << std::endl;

		if (b > 0)
		{
			std::cout << "b도 0보다 크다." << std::endl;		
		}
	}*/

	//AND &&
	if ((a > 0) && (b > 0))
	{
		std::cout << "a, b는 0보다 크다." << std::endl;
	}

	//OR ||
	if ((a > 0) || (b > 0))
	{
		std::cout << "a는 0보다 크거나, b는 0보다 크다." << std::endl;
	}

	//return 0;
}

int Sum(int a, int b) {
	int c;
	c = a + b;
	return c;
}
