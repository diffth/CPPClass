// Class1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//C/C++ 언리얼 학습 진행
//1.변수(자료형 type)
//      정수(int...)
//      실수(float, double...)
//      문자형(char) -> 문자열(string) 클래스...
//      bool(boolean) 1/0, true/false
//      상수(const)
//2.연산자
//      산술연산자(+, -, *, /, %)
//      대입연산자(=, +=, -=, *=, /=, %=)
//      비교연산자(==, !=, >, >=, <, <=)
//      논리연산자(&&, ||, !)
//      증감연산자(++x, x++, --x, x--)
//      기타연산자
//          비트연산자(<<, >>....) 
//          쉼표(,)연산자
//          삼항연산자(조건식 ? A : B)
//          sizeof() 메모리크기반환 연산
//          ::범위지정연산자 std::cout
//          namespace 이름공간 (using namespace std;)
//3.제어문
//      조건문
//          if, if/else, if/else if/else
//          switch case
// 
//-----------------------------------------------------------
//4.함수
//5.객체

/* ctrl + shift + /
블록주석
*/

/* 가나다라 */
/* *(별, 아스티릭), 포인터, 블록주석, 곱셈연산자
*/

//한줄 복제 ctrl + d
//한줄이동 alt + ↑, alt + ↓

//한줄 주석 ctrl + /
//void max1();
//void max2();
//void max3();
//리턴타입 x 빈...

#include <iostream>

//리턴타입 int(정수) 형
/*
int main()
{
    //std::cout << "Hello World!\n";  // \n -> new line 줄바꿈
    //<< 출력연산자
    //>> 입력연산자
    //return 0;

    //A = B;    //대입연산자
    //A == B;   //== 값이 같다.
    //A === B;  //== 타입, 값이 같다.
    //5 == '5';   //true
    //5 === '5';  //false

    int length = 5;
    int height;
    height = 4; //변수 초기화 x -> 오류발생

    std::cout << length << std::endl;
    std::cout << height << std::endl;   //초기화되지 않은 'height' 지역 변수를 사용했습니다.
    //\n -> new line / endl -> endline 줄바꿈

    length = 10;
    height = 8;
    std::cout << length << std::endl;
    std::cout << height << std::endl;

    //int a = 10000000000000000; // int형은 4Byte ↑ Overflow
    //std::cout << "a의 값은 : " << a << std::endl;
    //return 0;

    char myChar = 'A';
    std::cout << myChar << std::endl;
    char myChar2 = 50;
    char myChar3 = 99;
    int myInt = 50;

    char myB = 'B';

    std::cout << myChar2 << std::endl;
    std::cout << myChar3 << std::endl;
    std::cout << myChar+ myB << std::endl;
    std::cout << myInt << std::endl;

}
*/

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
