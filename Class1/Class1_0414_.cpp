#include <iostream>

using namespace std;

int main()
{
    //while문   
    //int i = 1;
    //while (i < 5)
    //{
    //    cout << "while 문이 " << i << " 번째 반복 실행중..." << endl;
    //    i++; //무한 루프 x 조건
    //}
    //cout << "while 문이 종료된 후 변수 i의 값 " << i << "..." << endl;

    //do while문
    //int i = 1;
    //do {
    //    cout << "do / while 문이 " << i << " 번째 반복 수행중..." << endl;
    //    i++; //무한 루프 x 조건
    //} while (i > 5);
    //cout << "do / while 문이 종료된 후 변수 i의 값 " << i << "..." << endl;

    //for문
    /*
    int i = 1;
    for (i = 1; i < 10; i++)
    {
        cout << "for 문이 현재 " << i << " 번째 반복 수행중..." << endl;
    }
    cout << "for 문이 종료된 후 변수 i의 값 " << i << "..." << endl;
    */

    /*
    int num = 0;
    while (1)
    {
        num++;
        cout << "Num 값은: " << num << endl;
        if (num >= 5)
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
    int exceptNum = 2;
    for (int i = 1; i <= 100; i++)
    {
        if (i % exceptNum == 0)
        {
            continue;
        }
        cout << i << "\t";
    }
    */

    /*
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    */

    /*
    //X
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
    //구구단1
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
    //구구단2
    for (int i = 1; i < 10; i++)
    {
        for (int j = 2; j < 10; j++)
        {
            cout << j << " x " << i << " = " << i * j << "\t";
        }
        cout << endl;
    }
    */
    
    //int num;
    //cout << "숫자입력 : ";
    //cin >> num;
    
    /*
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    */

    /*
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }*/

    /*
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num * 3 - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << (" *");
        }
        cout << endl;
    }
    */

}