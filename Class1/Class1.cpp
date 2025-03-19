// Class1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int Sum(int x, int y);
bool IsNumLargertahnZero(int num);
bool IsCoin();

void MyCount()
{
    std::cout << "Hi";
}

/*
int Sum(int x, int y)
{
    int z;
    z = x + y;
    return z;
}
*/

int main()
{
    std::cout << "Hello World!\n";
    //입력 연산자 <<
    //출력 연산자 >>

    /*
    int length = 5;
    //int height; //선언
    //height = 0; //초기화
    std::cout << length << std::endl;

    length = 10;
    std::cout << length;
    */

    //int a = 1000000000;
    //unsigned long long a = 10000000000000;
    //std::cout << "a의 값은: " << a << std::endl;

    ////int MyInt = -10;
    ////long MyLong = -59423949595959;

    //float MyFloat = 10.255;
    //MyFloat = 150.233233233;

    //float A = 1.2;
    //float B = 1.2;

    ////std::cout << (A + B == 2.3) << std::endl;
    ////0 은 false
    //std::cout << (A == B) << std::endl;

    /*char MyChar = 'A';
    std::cout << MyChar << std::endl;
    char MyChar2 = 50;
    std::cout << MyChar2;*/

    /*bool isTrue = 0;
    std::cout << isTrue << std::endl;
    isTrue = true;
    std::cout << isTrue << std::endl;*/

    //const int Limit = 20;
    ////Limit = 10;
    //std::cout << Limit << std::endl;

    /*int a = (int)10.52323;
    std::cout << a << std::endl;*/

    //int result = 0;
    ////result = 5 + 5 * 5;
    ////result = (5 + 5) * 5;
    ////result = 5 / 5;
    ////result = 5 % 2;
    //result = 10 / 3;
    //std::cout << result << std::endl;

    //float result2 = 0.0;
    ////result2 = 10 / 3;
    //result2 = (float)10 / 3;
    //std::cout << result2;

    //int result = 5;
    ////result += 2;
    //result %= 2;
    //std::cout << result;

    /*int x = 5;
    int y = 10;
    int result = 0;

    result = Sum(x, y);
    std::cout << result;*/

    //MyCount();

    /*
    char initial = 'S';
    scanf_s("%c", &initial);
    //printf("Hello World!\n");
    //printf("Hello World!");
    //printf("My initial is %c%c %c", initial, initial, initial);
    printf("My initial is %c", initial);
    */

    /*
    std::cout << "Hello World!" << " Hello World " << 5 << std::endl;
    std::cout << "Hello World!\n";

    std::cout << "나이를 입력: ";
    int age;
    std::cin >> age;
    std::cout << "My Age is " << age;
    */

    /*
    char initial;
    unsigned int age;
    float height;
    float weight;
    float bmi;
    std::cout << "■ 인적정보(이니셜, 나이, 키, 무게)를 입력" << std::endl;
    std::cout << "이니셜입력: ";
    std::cin >> initial;
    std::cout << "나이입력: ";
    std::cin >> age;
    std::cout << "키입력: ";
    std::cin >> height;
    std::cout << "몸무게입력: ";
    std::cin >> weight;

    std::cout << "\n이니셜: " << initial << std::endl;
    std::cout << "나이: " << age << std::endl;
    std::cout << "키: " << height << std::endl;
    std::cout << "몸무게: " << weight << std::endl;
    std::cout << "BMI: " << (height - 100) / weight << std::endl;
    */
    /*
    int a = 2;
    int b = 5;
    std::cout << (a == b) << std::endl;
    std::cout << (a < b) << std::endl;
    */

    /*
    bool a = true;
    bool b = false;
    std::cout << (a&&b) << std::endl;
    std::cout << (a||b) << std::endl;
    std::cout << (!b) << std::endl;
    */

    /*
    int a = 5;
    int b = 2;
    int c = 10;
    std::cout << (a >= b) << std::endl;
    std::cout << ((a >= b)&&(a >= c)) << std::endl;
    */

    /*
    int x = 5;
    //int y = (++x) + 5;
    int y = (x++) + 5;
    std::cout << y << " : " << x << std::endl;
    */

    /*
    int a = 10, b = 5;
    int greater;
    greater = (a > b) ? a : b;
    std::cout << greater << std::endl;
    */

    /*
    int a;
    double b;
    //std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(b) << std::endl;
    */

    /*
    ///조건문
    int key;
    std::cin >> key;
    if (key == 5)
    {
        std::cout << "금고가 열렸습니다.";
    }
    */
    /*
    int key;
    std::cin >> key;
    if (key == 5)
    {
        std::cout << "금고가 열렸습니다.";
    }
    else
    {
        std::cout << "금고가 안열렸습니다.";
    }
    */

    /*
    int key;
    std::cin >> key;

    //if (IsNumLargertahnZero(key))
    if (key > 5)
    {
        //std::cout << "0 보다 크다";
        std::cout << "5 보다 크다";
    }
    else if (key <= 5)
    {
        std::cout << "5 같거나 작다";
    }
    else if(key<=0)
    {
        std::cout << "";
    }
    */

    /*
    int a = 5, b = 2;
    if (a > 0)
    {
        std::cout << "a 는 0보다 크다" << std::endl;
        if (b > 0)
        {
            std::cout << "b 는 0보다 크다" << std::endl;
        }
    }

    if ((a > 0) && (b > 0))
    {
        std::cout << "a, b는 0보다 크다" << std::endl;
    }
    */

    /***************************
    if (IsCoin())
    {
        //int water = 200, cMix = 50;
        //int water = 50, cMix = 50;
        //int water = 200, cMix = 5;
        int water = 50, cMix = 5;

        /*
        if (water >= 100 && cMix >= 10)
        {
            std::cout << "커피출력" << std::endl;
        }
        else if (water < 100 && cMix >= 10)
        {
            std::cout << "물 부족" << std::endl;
        }
        else if (water >= 100 && cMix < 10)
        {
            std::cout << "커피믹스부족" << std::endl;
        }
        else if (water < 100 && cMix < 10)
        {
            std::cout << "물, 커피믹스 부족" << std::endl;
        }
        */

        /*
        if ((water >= 100) && (cMix >= 10))
        {
            std::cout << "커피 출력" << std::endl;
        }
        else
        {
            if (water < 100) { std::cout << "물 부족" << std::endl; }
            if (cMix < 10) { std::cout << "커피믹스 부족" << std::endl; }
        }
        */
        
        /*
        if ((water < 100) && (cMix < 10))
        {
            std::cout << "물 부족" << std::endl;
            std::cout << "커피믹스 부족" << std::endl;
        }
        else if (water < 100)
        {
            std::cout << "물 부족" << std::endl;
        }
        else if (cMix < 10)
        {
            std::cout << "커피믹스 부족" << std::endl;
        }
        else
        {
            std::cout << "커피 출력" << std::endl;
        }
    }
    ***************************/
}

int Sum(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

bool IsNumLargertahnZero(int num)
{
    if (num > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsCoin()
{
    return true;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
