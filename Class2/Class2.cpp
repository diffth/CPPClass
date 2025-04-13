// Class2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <math.h>
#include <string.h>
#include <ctime>
#include <Windows.h>

#include "MyFirst.h"
#include "MyMath.h"
#include "MyDataType.h"
//int Sum(int a, int b);

#define Pi 3.14

using namespace F;
using namespace M;
using namespace std;

void CheckIncrement();
//void CallMyself();
void CallMyself(int);
int Factorial(int num);
int SumArrary(int arr[], int length);
void MyInfiLoop();

int global_A = 5;
static int static_A = 0;

//int main()
//{
    //std::cout << "Hello!\n";
    //std::cout << A::Sum(10, 5) << std::endl;
    //std::cout << B::Sum(5, 4);
    //std::cout << Sum(10, 5) << std::endl;
    /*
    cout << A::Sum(10, 5) << endl;
    cout << B::Sum(5, 4);
    */

    /*
    float r = 3;
    float l;
    l = 2 * r * Pi;
    cout << l;
    */

    /*
    double a = 30 * Pi / 180;
    float b = sin(a);
    cout << b << endl;
    */

    /*
    거듭제곱(𝑎 𝑏) 구하기
    ❖ a는1이아닌초기값을갖는다.
    ❖ b는사용자입력을받는다(scanf, cin 상관 없음).
    ❖ 결과를출력한다.
    ❖ 자료형은둘다double
    */

    /*
    double a = 2;
    double b;
    cin >> b;
    cout << "2의 " << b << "승은 ";
    cout << pow(a, b) << endl;
    */

    /*
    int local_A_main = 2;
    //cout << global_A << endl;
    //PrintVariable(10);
    PrintVariable(local_A_main);
    cout << "로컬A: " << local_A_main << endl;
    */

    /*
    CheckIncrement();
    CheckIncrement();
    CheckIncrement();
    */

    /*
    CallMyself();
    CallMyself(5);
    */

    //cout<< Factorial(5);

    /*
    //ClassType MyClass = JAVA;
    ClassType MyClass = C_3;
    //MyClass = C;
    cout << MyClass << endl;
    */

    /*
    Info MyInfo = { 10, 160.55, MAN };

    cout << MyInfo.Age << endl;
    MyInfo.Height = 180.4;
    cout << MyInfo.Height;
    */

    //MyClassType YourClass = UNREAL;

    /*
    int arr[5] = {1,5,4,6,2};
    //int arr[] = {1,5,4,6,2};
    int arr[5] = {0,};
    //int arr[5] = {2,};
    cout<< arr[1];
    */

    /*
    //char str[6] = { 'H', 'e', 'l', 'l', 'o' };
    char str[6] = { "Hello" };
    cout << str << endl;
    cout << str[2] << endl;
    */

    /*
    int MyArray[] = { 1,5,7,8 };
    //char MySentence[] = "Hello World";
    char MySentence[9];
    cin >> MySentence;

    //cout << MyArray << endl;
    //cout << MySentence << endl;
    cout << MySentence << endl;
    */

    /*
    Info MyInfo;
    MyInfo.Name = "Kim";
    */

    /*
    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    cout << arr[2][2]<<endl;    //요소 0부터 시작
    cout << arr[1][1]<<endl;

    char Fruits[3][10] = { "apple", "banana", "orange" };
    cout << Fruits[1] << endl;
    */

    /*
    int arr[5] = { 1,2,3 };
    cout << arr[3] << endl; //문법 오류는 없음
    */

    /*
    int length;
    cin >> length;
    int arr[length];
    */

    /*
    int arr[5];
    int ArrSize;    //배열의 크기
    int ArrLength;  //배열의 길이

    ArrSize = sizeof(arr);
    //ArrLength = sizeof(arr) / sizeof(int);
    //ArrLength = sizeof(arr) / sizeof(*arr);
    ArrLength = sizeof(arr) / sizeof(arr[0]);
    cout << "배열의 크기: " << ArrSize << endl;
    cout << "배열의 길이: " << ArrLength << endl;
    */

    /*
    int arr[5];
    int ArrLength;  //배열의 길이
    ArrLength = sizeof(arr) / sizeof(int);
    SumArrary(arr, ArrLength);
    */

    /*
    //std::string MyString;
    //string MyString = "Hello World";

    //cout << MyString[1] << endl;    //0부터 시작
    //cout << MyString.at(4) << endl;
    //cout << MyString.front() << endl;
    //cout << MyString.back() << endl;
    */

    /*
    string MyString;
    cin >> MyString;
    cout << MyString << endl;

    cout << "문자열의 크기: " << MyString.size() << endl;
    cout << "문자열의 길이: " << MyString.length() << endl;
    cout << "문자열의 용량: " << MyString.capacity() << endl;
    */

    /*
    string MyString = "Hello";
    //MyString.append(" World");
    MyString.append("World");
    MyString.append(1, '!');
    MyString.insert(5, " ");

    //MyString.clear();
    //MyString.erase(5);
    //MyString.assign("대체할 문자");
    //cout << MyString << endl;
    //cout << MyString.find("World") << endl;
    //cout << MyString.substr(5,10) << endl;
    cout << MyString.compare("Hello World!") << endl;
    */

    /*
    string MyString1 = "Hello";
    string MyString2 = "World";
    swap(MyString1, MyString2);
    cout << MyString1 << endl;

    MyString1 += MyString2;
    cout << MyString1 << endl;
    */

    /*
    ❖ 문자열을“Hello” 로 선언하고 크기, 길이, 메모리 크기를 출력해보세요.
       왜 크기와 길이가 같을까 생각해보세요.
    ❖ 문자열에“World 이것은 임시 ” 를 붙이고, 다시크기, 길이, 메모리 크기를출력해보세요.
    ❖ “이것은임시＂를삭제하세요.(erase 참고)
    ❖ 중간에“ My ” 를 붙여 “Hello My World”가 되게 하고, 출력해보세요.

    string MyString = "Hello";
    cout << "크기: " << MyString.size() << endl;
    cout << "길이: " << MyString.length() << endl;
    cout << "용량크기: " << MyString.capacity() << endl;

    MyString.append("World 이것은 임시 ");
    cout <<  MyString << endl;
    cout << "크기: " << MyString.size() << endl;
    cout << "길이: " << MyString.length() << endl;
    cout << "용량크기: " << MyString.capacity() << endl;

    MyString.erase(12);
    cout <<  MyString << endl;
    MyString.insert(5, " My ");
    cout <<  MyString << endl;
    */

    /*
    ClassType MyClass = C_3;
    //ClassType MyClass = UNREAL;
    switch (MyClass)
    {
        case CPP:
            cout << "C++ 클래스";
            break;
        case UNREAL:
            cout << "언리얼 클래스";
            break;
        case JAVA:
            cout << "자바 클래스";
            break;
        default:
            cout << "다른 클래스";
            break;
    }
    */

    /*
    int i = 5;
    //0 true
    //while (1)
    while (i>=0)
    {
        //cout << "반복문 실행" << endl;
        cout << "i 값은: " << i << endl;
        i--;
    }
    */

    /*
    int Num = 0;
    while (1)
    {
        Num++;
        cout << "Num 값은: " << Num << endl;
        if (Num >= 5)
        {
            break;
        }
    }
    */

    /*
    //int i;
    //for (;;)  무한루프
    for (int i = 1; i <= 10; i++)
    {
        cout << "i 값: " << i << endl;
        //i++;
    }
    */

    /*
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    cout << sum << endl;

    int fact = 1;
    int startNum = 5;
    for (int i = startNum; i > 0; --i)
    {
        fact *= i;
    }
    cout << fact << endl;
    */

    /*
    bool isTrue = false;
    //bool isTrue = true;
    do
    {
        cout << "실행됨" << endl;
    }
    while (isTrue);
    */

    /*
    char ch;
    while (1)
    {
        cout << "k를 입력하면 탈출: ";
        cin >> ch;
        if (ch == 'k')
        {
            break;
            cout << "무한루프 탈출 성공 " << endl;
        }
    }
    cout << "무한루프 탈출 성공! " << endl;
    */

    /*
    MyInfiLoop();
    */

    /*
    char ch1;
    char ch2;

    while (1)
    {
        while (1)
        {
            cout << "a를 입력하면 Loop1 탈출: ";
            cin >> ch2;
            if (ch2 == 'a')
            {
                break;
            }
        }
        cout << "루프1 탈출 성공" << endl;

        cout << "b를 입력하면 Loop2 탈출: ";
        cin >> ch1;
        if (ch1 == 'b')
        {
            break;
        }
    }
    cout << "루프2 탈출 성공" << endl;
    */

    /*
    int num = 0;
    while (num <= 20)
    {
        num++;  //위에 나와야함-아니면 무한루프
        if ((num%5) == 0)
        {
            continue;
        }
        cout << num << endl;
    }
    */

    /*
    for (int i = 2; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            cout << i << "x" << j << " = " << i * j << endl;
        }
        cout << "\t" << endl;
    }
    */

    /*
    for (int i = 1; i < 10; i++)
    {
        for (int j = 2; j < 10; j++)
        {
            cout << j << " x " << i << " = " << i * j << "\t";
        }
        cout << endl;
    }
    */

    /*
    //내용: 1씩 증가하는 수열과 합
    //❖초기값:1
    //❖10번 까지반복
    //❖수열의최종값출력
    //❖수열의합출력
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    */

    /*
    int arr[5] = { 0, };
    int arr_L = sizeof(arr) / sizeof(int);
    for (int i = 0; i < arr_L; i++)
    {
        arr[i] = i * 5;
    };
    for (int j = 0; j < arr_L; j++)
    {
        cout << j + 1 << "번째 요소:" << arr[j] << endl;
    }
    */

    /*
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = i * j;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
    */

    /*
    clock_t startTime = clock();

    //프로그램의 무언가
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            cout << "Hi" << endl;
        }
    }
    clock_t endTime = clock();
    cout << (double)(endTime - startTime) / 1000 << endl;

    //return 0;
    */

    /*
    cout << "5초 전 실행" << endl;
    Sleep(5000);
    cout << "5초 후 실행" << endl;
    */

    /*
    clock_t startTime;
    clock_t endTime;

    float timeInterval = 0.05; //시간간격(sec)
    float realTime = 0;
    float simEndTime = 10;  //종료시간

    while (realTime <= simEndTime)
    {
        realTime += timeInterval;   //시간진행
        startTime = clock();
        //
        cout << "시뮬레이션 시간: " << realTime << endl;
        endTime = clock();
        Sleep(timeInterval*1000-(endTime-startTime));
    }
    */

    /*
    내용: 값 N쉬프트
    ❖길이가 10이고, 다음과 같이 초기화된 배열이 있음
    [1 1 1 1 1 1 0 0 0 0 0]
    ❖정수N을 입력 받음
    ❖반복문을 이용하여, 2번째 인자부터 N칸 쉬프트한 결과를 출력
    [1 1 1 1 1 1 0 0 0 0 0]
    [1 0 1 1 1 1 1 0 0 0 0]  …. 1칸 쉬프트
    [1 1 1 1 1 1 0 0 0 0 0]
    [1 0 0 0 0 0 0 0 1 1 1]  …. 7칸 쉬프트
    ☞힌트: 배열의 인덱스를 넘어서는 참조할 수 없다. 반복은 감소식으로 하고, 제어문을 써줘야 한다.
    * 런타임 오류 뜰 수 있으니까, 그럴 때는 디버깅 정지버튼을 누르면 됨
    */

    /*
    int arr[10] = { 1, 1, 1, 1, 1, 1, 0, };
    int n;
    cin >> n;
    for (int i = 9; i > 0; --i)
    {
        if (i < 10)
        {
            if ((i + n) < 10)
            {
                arr[i + n] = arr[i];
            }
            arr[i] = 0;
        }
    }
    for (int j = 0; j < 10; ++j)
    {
        cout << arr[j] << " ";
    }
    return 0;
    */
//}

void CheckIncrement()
{
    static int static_B = 0;
    cout << ++static_B << endl;
}

//void CallMyself()
void CallMyself(int num)
{
    --num;
    cout << "자기 자신을 호출했다!" << endl;
    if (num >= 0)
    {
        CallMyself(num);
    }
    //CallMyself();

    //cout << Factorial(5) << endl;
}

int Factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    return num * Factorial(num - 1);
}

int SumArrary(int arr[], int length)
{
    return 1;
}

void MyInfiLoop()
{
    char ch;
    while (1)
    {
        cout << "k를 입력하면 탈출: ";
        cin >> ch;
        if (ch == 'k')
        {
            return;
            cout << "무한루프 탈출 성공 " << endl;
        }
    }
    cout << "무한루프 탈출 성공! " << endl;
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
