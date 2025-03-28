// Class2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
// C/C++ 언리얼 학습 진행 
//v 1.변수(자료형 - type)
//		정수(short, int, long...)
//		실수(float, double...)
//		문자(char) -> 문자열(string)
//		상수(const)
//		bool(boolean) 1/0, true/false
// 2.연산자
//      산술연산자( +, -, *, /, % )
//      대입연산자( =, +=, -=, *=, /=, %=)
//      비교연산자( ==, !=, >, >=, <, <= )
//      논리연산자( &&, ||, ! )
// 3.함수
// 4.제어문
// 5.객체

#include <iostream>

int main()
{
    //std::cout << "Hello World!\n";
    /*
    int result = 0;
    result = 5 + 5 * 5; // * 우선순위
    std::cout << result << std::endl;

    result = (5 + 5) * 5;
    std::cout << result << std::endl;

    result = 5 / 5;
    std::cout << result << std::endl;

    result = 10 / 3;    // 나누기는 몫
    std::cout << result << std::endl;

    result = 5 % 2;     // 나머지연산자
    std::cout << result << std::endl;

    float result2 = 0.0;
    result2 = 10 / 3;   // 암시적(자동) 형변환
    //result2 = 10.0 / 3.0;
    result2 = (float)10 / 3;    //(float)10 -> 명시적 형변환
    std::cout << "result2 = " << result2 << std::endl;
    */

    int result = 5;
    //result = result + 2;
    //result += 2;
    //result -= 2;
    //result *= 2;
    //result /= 2;
    result %= 2;
    //std::cout << result << std::endl;

    // 한줄삭제 Shift + Delete 키
    int a = 10;
    int b = 3;
    int c = 5;
    std::cout << (a == b) << std::endl;
    std::cout << (a != b) << std::endl;
    std::cout << (a > b) << std::endl;
    std::cout << (a >= b) << std::endl;
    std::cout << (a < b) << std::endl;
    std::cout << (a <= b) << std::endl;

    std::cout << "AND " << ((a >= b) && (a >= c)) << std::endl;
    std::cout << "OR  " << ((a >= b) || (a >= c)) << std::endl;
    std::cout << "NOT " << !(a >= b) << std::endl;


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
