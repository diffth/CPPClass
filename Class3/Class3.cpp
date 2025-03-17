// Class3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

struct HR
{
    double value;
    int Age;
    double Height;
    double Weight;
};

/*
HR 구조체 멤버
- 이름 : string
- 나이 : unsigned int
- 키 : float
- 몸무게 : float
*/
struct HR2
{
    string name;
    unsigned int age;
    float height;
    float weight;
};

void ChangeByValue(int a);
void ChangeByAddress(int* a_p);
void SwapByAddress(int* a, int* b);
int SumArrayElement(int arr[], int length);
void ChangeArrayToZero(int arr[], int length);
int SumArrayElement2D(int arr[][3], int row, int col);
void SumArray(int arr1[], int* arr2, int arr_r[], int length);
int* SumArray_Retrun(int arr1[], int* arr2, int arr_r[], int length);

int* ReturnArray()
{
    static int arr_R[3] = { 1, 2, 3 };
    return arr_R;
}

int* getDynamicAllocate()
{
    return new int(10);
}

int* SumArray_Dynamic(int* arr1, int* arr2, int length)
{
    int* arr_ptr = new int[length]();
    for (int i = 0; i < length; i++)
    {
        arr_ptr[i] = arr1[i] + arr2[i];
    }
    return arr_ptr;
}

void ChangeByReference(int& a_ref)
{
    a_ref = 10;
    cout << a_ref << endl;
}

void SwapByReference(int& a, int& b)
{
    int temp = b;
    b = a;
    a = temp;
}

void MyFunction(int a = 1, int b = 2, int c = 3)
{
    cout << a << " " << b << " " << c << " " << endl;
}

void MySwap(int*, int*);
void MySwap(double*, double*);
void MySwap(int* arr1, int* arr2, int leng);

void MyAdd(int, int);
void MyAdd(double, double);
void MyAdd(int* arr1, int* arr2, int leng);
void MyAdd(int* arr1, int* arr2, int* arr_R, int leng);

void PrintHello(void);

template <typename T>
T Add(T a, T b)
{
    return a + b;
}


int main()
{
    /*
    int a = 10;
    //cout << a << endl;
    cout << &a << endl;
    cout << *&a << endl;
    cout << *(&a) << endl;
    */

    /*
    int value = 10;
    int* ptr = &value;  //의미가 있어짐
    //int *ptr;

    cout << "원래의 값: " << *ptr << " : " << &ptr << endl;
    *ptr = 5;
    cout << "원래의 값: " << *ptr << " : " << &ptr << endl;
    */

    /*
    int a = 2;
    int b = 5;
    int* a_ptr = &a;
    int* b_ptr = &b;

    int c = (*a_ptr) * (*b_ptr);
    cout << c << endl;
    */

    /*
    int MyInt = 10;
    int* MyInt_ptr = &MyInt;

    cout << MyInt << endl;
    cout << *MyInt_ptr << endl;
    cout << MyInt_ptr << endl;
    cout << &MyInt << endl;
    cout << &MyInt_ptr << endl; //주소 다름
    */

    /*
    char* ptr1;
    int* ptr2;
    double* ptr3;

    cout << "char형 포인터 크기: " << sizeof(ptr1) << endl;
    cout << "int형 포인터 크기: " << sizeof(ptr2) << endl;
    cout << "double형 포인터 크기: " << sizeof(ptr3) << endl;
    */

    /*
    int* ptr1 = NULL;
    int* ptr2 = nullptr;

    //cout << ptr1 << endl;
    //cout << ptr2 << endl;
    if (ptr2 == nullptr)
    {
        cout << "ptr가 nullptr 이다" << endl;;
    }
    */

    /*
    float length = 10.53;
    float* ptr = &length;
    float** pptr = &ptr;

    cout << length << endl;
    cout << ptr << " : " << *ptr << endl;
    cout << pptr << " : " << **pptr << endl;

    cout << pptr << endl;   //pptr 주소
    cout << *pptr << endl;  //ptr 주소
    */

    /*
    int value1 = 5;
    double value2 = 10.5;

    int* ptr1 = &value1;
    double* ptr2 = &value2;

    cout << ptr1 << " : " << sizeof(ptr1) << endl;
    cout << ++ptr1 << " : " << sizeof(++ptr1) << endl; //4만큼 증가
    cout << ptr2 << " : " << sizeof(ptr2) << endl;
    cout << ++ptr2 << " : " << sizeof(++ptr2) << endl; //8만큼 증가
    */

    /*
    int arr[3] = { 1,2,3 };
    int* arr_ptr = arr;

    //cout << arr << endl;
    //cout << arr_ptr << endl;

    //cout << ++arr_ptr << endl;
    //cout << *(++arr_ptr) << endl;
    cout << *(arr_ptr+2) << endl;
    */

    /*
    int arr[3] = { 1, 2, 3 };
    int* arr_ptr = arr;

    cout << arr << " : " << *arr << endl;
    cout << &arr[0] << " : " << *(&arr[0]) << endl;
    cout << &arr[1] << " : " << *(&arr[1]) << endl;
    cout << &arr[2] << " : " << *(&arr[2]) << endl;

    cout << arr_ptr << " : " << *(arr_ptr) << endl;
    cout << arr_ptr+1 << " : " << *(arr_ptr+1) << endl;
    cout << arr_ptr+2 << " : " << *(arr_ptr+2) << endl;
    */

    /*
    int arr[] = { 1,2,3 };
    int* arr_ptr = arr;
    cout << "배열 포인터의 크기는 : " << sizeof(arr_ptr) << endl;
    cout << "배열의 크기는 : " << sizeof(arr) << endl;
    */

    /*
    int a = 5;
    ChangeByValue(a);
    cout << a;
    */

    /*
    int a = 10, b = 5;
    cout << a << " " << b << endl;;
    int temp;
    temp = b;
    b = a;
    a = temp;
    cout << a << " " << b << endl;
    */

    /*
    int a = 5;
    ChangeByAddress(&a);
    cout << a << endl;
    */

    /*
    int a = 10, b = 5;
    cout << a << " " << b << endl;;
    SwapByAddress(&a, &b);
    cout << a << " " << b << endl;
    */

    /*
    int arr[3] = { 1, 2, 3 };
    cout<< SumArrayElement(arr, sizeof(arr)/sizeof(int));
    ChangeArrayToZero(arr, 3);
    */

    /*
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);
    //int(*arr_ptr)[3] = arr;
    cout << row << " " << col << endl;
    cout << SumArrayElement2D(arr, row, col);
    */


    /*
    int arr1[3] = { 1,2,3 };
    int arr2[3] = { 4,5,6 };
    int arr_R[3];
    //int arr_R;
    int length = sizeof(arr_R) / sizeof(arr_R[0]);
    //int length = sizeof(arr1) / sizeof(arr1[0]);

    SumArray(arr1, arr2, arr_R, length);
    //arr_R = SumArray_Retrun(arr1, arr2, length);
    for (int i = 0; i < length; i++)
    {
        cout << arr_R[i] << endl;
    }
    */

    /*
    int* arr_R;
    arr_R = ReturnArray();

    for (int i = 0; i < 3;i++)
    {
        arr_R[i];
        cout << arr_R[i] << endl;
    }
    */

    /*
    int* arr_ptr[3];
    int a = 1, b = 2, c = 3;
    arr_ptr[0] = &a;
    arr_ptr[1] = &b;
    arr_ptr[2] = &c;

    cout << *arr_ptr[0] << endl;
    cout << *arr_ptr[1] << endl;
    cout << *arr_ptr[2] << endl;
    */


    /*
    int arr[3] = { 1,2,3 }; //배열
    int* arr_ptr[3];        //포인터 배열

    for (int i = 0; i < 3; ++i)
    {
        arr_ptr[i] = &arr[i];   //각 배열 요소의 주소를 포인터 배열 요소에 대입
    }
    cout << *arr_ptr[2] << endl;

    double arr_d[3] = { 1,2,3 };
    double* arr_ptr_d[3];
    for (int i = 0; i < 3; ++i)
    {
        arr_ptr_d[i] = &arr_d[i];
    }
    cout << "포인터 배열크기: " << sizeof(arr_ptr) << endl;
    cout << "배열크기:" << sizeof(arr) << endl;
    cout << "포인터 배열크기: " << sizeof(arr_ptr_d) << endl;
    cout << "배열크기:" << sizeof(arr_d) << endl;
    */

    /*
    HR KimHR = { 2, 10, 5, 2 };
    HR SungHR = { 2, 10, 5, 2 };

    HR* HRList[2];
    HRList[0] = &KimHR;
    HRList[1] = &SungHR;

    cout << sizeof(HRList) << endl;
    cout << sizeof(KimHR) + sizeof(SungHR) << endl;

    HR* KimHR_ptr = &KimHR;
    (*KimHR_ptr).Age;
    //또는
    KimHR_ptr->Age;
    HRList[0]->Age;
    cout << HRList[0]->Age << endl;
    */

    /*
    int* ptr_dynamic = new int(5);
    cout << *ptr_dynamic << endl;
    delete ptr_dynamic;
    //cout << *ptr_dynamic << endl;
    */

    /*
    int* ptr_Dynamic;
    ptr_Dynamic = getDynamicAllocate();
    cout << *ptr_Dynamic;
    delete ptr_Dynamic;
    //cout << *ptr_Dynamic;
    */

    /*
    int* arr_ptr = new int[5]();
    cout << arr_ptr[2] << endl;
    delete[] arr_ptr;   //[] 사용안할시 메모리 누수...
    //cout << arr_ptr[2] << endl;
    */

    /*
    int* arr_ptr = nullptr;
    int length;
    cin >> length;
    arr_ptr = new int[length]();

    for (int i = 0; i < length; i++)
    {
        cout << arr_ptr[i] << endl;
    }
    */

    /*
    내용: 차원이 같은1차원배열의+ 연산함수작성(+동적할당,return사용)
    - 요소가3인1차원배열을2개선언하고초기화
    - 행렬의+ 연산처럼수행해주는함수를호출해서반환
    - 반환은return과 동적할당을 이용
    - 행렬결과값출력
    */

    /*
    int arr1[3] = { 1, 2, 3 };
    int arr2[3] = { 1, 2, 3 };
    int* arr_R = nullptr;
    arr_R = SumArray_Dynamic(arr1, arr2, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << arr_R[i] << endl;
    }
    delete[] arr_R;
    */

    /*
    내용: 간단한 전산프로그램
    ❖ 함수 세팅
    - 인적사항 구조체 만들기
    - 인적사항 정보를 입력 받아 동적 할당하고 반환하는 함수 작성
    *두 가지 사항을 같은 파일(.h, ,cpp)에 작성
    ❖ main 문
    - 인적사항 타입으로 길이가 2인 ‘포인터 배열’을 생성
    1. 위 함수를 통해 반환 받은 주소를 포인터 배열에 저장
    2. 2번 반복
    - 반복이 끝났으면 포인터 배열로 인적사항 출력
    - 동적할당 받은 변수들을 해제하고 주석처리
    */

    /*
    HR2* CreateHRObj()
    {
        HR2 HR_t;
        cout << "이름을 입력: ";
        cin >> HR_t.name;
        cout << "나이를 입력: ";
        cin >> HR_t.age;
        cout << "몸무게를 입력: ";
        cin >> HR_t.weight;
        cout << "키를 입력: ";
        cin >> HR_t.height;

        return new HR2(HR_t);
    }


    HR2* HRList[2];
    int l = sizeof(HRList) / sizeof(HR2*);
    for (int i = 0; i < l; i++)
    {
        HRList[i] = CreateHRObj();
        cout << endl;
    }
    for (int i = 0; i < l; i++)
    {
        cout << HRList[i]->age << endl;
        cout << HRList[i]->age << endl;
        cout << HRList[i]->weight << endl;
        cout << HRList[i]->height << endl;
    }

    //사용 끝나면 메모리 해제
    for (int i = 0; i < l; i++)
    {
        delete HRList[i];
    }
    */

    /*
    int a = 5;
    int& a_ref = a;
    a = 10;
    cout << a_ref << endl;
    a_ref = 15;
    cout << a << endl;
    cout << &a << endl;
    cout << &a_ref << endl;

    int b = 10;
    a_ref = b;
    a_ref = 15;

    cout << a_ref << endl;
    cout << b << endl;
    */

    /*
    int a = 5;
    ChangeByReference(a);
    cout << a << endl;
    */

    /*
    const int arr[2] = { 1, 2 };

    */

    /*
    int value = 10;
    const int* ptr = &value;    //포인터 상수
    //*ptr = 5;
    value = 5;
    cout << value << endl;

    int value2 = 5;
    int* const ptr2 = &value;   //상수 포인터
    //ptr2 = &value2;
    *ptr2 = 10;

    const int* const ptr = &value;  //참조값 변경 불가 and 참조대상 변경 불가
    */

    /*
    MyFunction();
    MyFunction(1, 2, 4);
    MyFunction(5, 6);
    */

    /*
    int a[2] = {1, 2};
    int b[2] = {3, 4};
    MySwap(1, 5);
    MySwap(1.52, 5.52);
    MySwap(a, b, 2);
    */

    /*
    double a = 10.53;
    double b = 5.5;
    MySwap(&a, &b);
    cout << a << " " << b << endl;

    int arr1[3] = { 1,2, 3 };
    int arr2[3] = { 4, 5, 6 };
    MySwap(arr1, arr2, 3);

    for (int i = 0; i < arr1; i++)
    {

    }
    */

    /*
    내용: 위의 예제들직접정의하고사용해보기
    ❖파일하나만들기
    ❖MyAdd: 두개의 값을 더함
    //❖MySwap: 두개의 값을 Swap
    */

    /*
    int arr1[3] = { 1,2, 3 };
    int arr2[3] = { 4, 5, 6 };
    MyAdd(arr1, arr2, 3);
    */

    /*
    int a = 5, b = 10;
    double c = 10.5, d = 5.4;

    cout << Add(a, b) << endl;
    cout << Add(c, d) << endl;
    */

    /*
    void (*ptr_MyFunc)(void);
    ptr_MyFunc = PrintHello;
    cout << ptr_MyFunc << endl;
    (*ptr_MyFunc)();
    */

    /*
    HW #1 자판기예제(절차지향프로그래밍맛보기)
    ❖ 자판기시퀀스
    1. “1-자판기 사용, 2- 자판기 사용 안함(프로그램 종료)” 출력
    2. “1– 바나나우유:500, 2- 초코우유:1000, 3– 딸기우유:200” 출력
    3. “ 돈을 넣으세요:” 출력
    4. 돈이가격보다작으면돈이부족하다표시하고3.으로이동. 같거나크면해당거스름돈출력
    5. 반환된음료는strin형으로 ‘동적 생성’하고, 인덱스가 10 인 ‘포인터 배열’에 저장 및 출력
    6. 위의절차반복
    */



}

void ChangeByValue(int a_v)
{
    a_v = 10;
    cout << a_v << endl;
}

void ChangeByAddress(int* a_p)
{
    *a_p = 10;
    cout << *a_p << endl;
}

void SwapByAddress(int* a, int* b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

//int SumArrayElement(int arr[])
int SumArrayElement(int* arr, int length)
{
    int sum = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        sum += arr[i];
    }
    return sum;
}

void ChangeArrayToZero(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

//int SumArrayElement2D(int (*arr)[3], int row, int col)
int SumArrayElement2D(int arr[][3], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
            //sum+= *(arr+i)[j];
        }
    }
    return sum;
}

void SumArray(int arr1[], int* arr2, int arr_r[], int length)
{
    for (int i = 0; i < length; i++)
    {
        *(arr_r + i) = *(arr1 + i) + *(arr2 + i);
    }
}

/*
int* SumArray_Retrun(int arr1[], int* arr2, int arr_r[], int length)
{
    int* arr_R;
    for (int i = 0; i < length; i++)
    {
        *(arr_r + i) = arr1[i] + arr2[i];
    }
    return arr_R;
}
*/

void MySwap(int* a, int* b) {
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
    cout << "int 형 스왑" << endl;
}

void MySwap(double* a, double* b)
{
    double temp;
    temp = *b;
    *b = *a;
    *a = temp;
    cout << "double 형 스왑" << endl;
}

void MySwap(int* arr1, int* arr2, int leng)
{
    int temp;
    for (int i = 0; i < leng; i++)
    {
        temp = arr2[i];
        arr2[i] = arr1[i];
        arr1[i] = temp;

    }
    cout << "arr형 스왑" << endl;
}

void MyAdd(int* arr1, int* arr2, int leng)
{
    int* result = new int[leng]();
    for (int i = 0; i < leng; i++)
    {
        result[i] = arr1[i] + arr2[i];
        cout << result[i] << " ";

    }
    cout << "arr Add" << endl;
}

void MyAdd(int* arr1, int* arr2, int* arr_R, int leng)
{
    //int arr_R[3]; xxx
    for (int i = 0; i < leng; i++)
    {
        arr_R[i] = arr1[i] + arr2[i];
    }
}

void PrintHello()
{
    cout << "Hello" << endl;
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
