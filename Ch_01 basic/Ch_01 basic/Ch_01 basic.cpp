// Ch_01 basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "io.h"
#include "DefineFunction.h"

//std::cout => cout 


    
    
    
    //std::cout << "Hello World!\n";

    //std : standard 
    cout << "Hello C++\n";
    cout << "C++ Programing\n";
    cout << 500 << endl;  // endl : endline
    cout << NUMBER + 50 << endl;


    // 키워드, 예약어 : 선언문, 명령문 
    // 키워드 : 변수 타입 선언 

    int Number; // 변수 선언
    Number = 10; // 초기값 대입

    int Number2 = 10; // 변수 선언 및 초기화 

    int Number3 = 1, Number4 = 2;  // 줄이는 것으로 이렇게도 가능 

    Number3 = 5;

    // 상수(Constant)
    const int Number5 = 10;

    // Number5 = 30; // 값을 수정할 수 없음

    // 데이터 타입 - 숫자 데이터 타입 - 정수형, 실수형 타입이 있다. 

    // 정수형 타입(int : integer)
    int Num1 = 10;
    short Num2 = 10;
    long Num3 = 10;

    // 실수형 타입(float)
    float Num10 = 1.234f; //f가 붙으면 float 없으면 double 
    double Num11 = 1.234;


    // 문자 데이터 : 문자(문자1개), 문자열(2개이상)로 구분한다. 
    // char : character
    // char 타입 문자 표현 : ''사용
    // 문자열 : "" 사용 (언리얼이나 자바가 구분되어 있고, 나머지는 구분하지 않는다)
    char Letter = 'a';

    // bool 타입 데이터 
    // 참/거짓을 구분할때 사용하는 데이터 : True/False, Yes/No, On/Off 
    bool Condition = true;

    // auto 선언 키워드 
    auto AutoNum = 10;
    cout << 10 << endl;
    int Number1 = 5;
std:cout << Number1 << endl;

    int Arithmetic1 = 30;
    int Arithmetic2 = 17;

    cout << Arithmetic1 + Arithmetic2 << endl;
    cout << Arithmetic1 - Arithmetic2 << endl;
    cout << Arithmetic1 * Arithmetic2 << endl;
    cout << Arithmetic1 / Arithmetic2 << endl;
    cout << Arithmetic1 % Arithmetic2 << endl;

    // 증감 연산에는 반복 실행의 개념이 포함되어 있다. 
    int Inc = 30;

    Inc = Inc + 3;
    cout << Inc << endl;
    Inc = Inc + 3;
    cout << Inc << endl;
    Inc = Inc + 3;
    cout << Inc << endl;

    Inc = Inc + 3;
    Inc += 3;

    Inc = Inc + 1;
    Inc += 1;
    Inc++; // C => C++ => C++++

    Inc = Inc * 3;
    Inc *= 3;
    Inc /= 3;
    Inc %= 3;

    /* 비교 연산
       크기비교의 결과는 참/거짓 => 실체 출력 1/0ㅡ
       true : 참 : 1
       false : 거짓 : 0
    */

    int Compare1 = 10;
    int Compare2 = 20;

    // > : 크다. > : 작다 => 방향이 고정 

    cout << (Compare1 > Compare2) << endl;
    cout << (Compare1 < Compare2) << endl;
    cout << (Compare1 >= 100) << endl;
    cout << (100 <= Compare1) << endl;
    cout << (Compare1 == Compare2) << endl;
    cout << (Compare1 != Compare2) << endl;

    /* 비트 연산자
    눈리 연산 : bool 데이터 연산. 참 거짓을 가지고 연산하는 것
    AND : && ( & : AMPERAND )

    true && true : true
    true && false : fakse
    => bool 데이터가 모두 true 일때 결과가 ture


    OR : || ( | : pipe)

    false || true : true
    false || false : false
    => bool 데이터 중 하나만 true이면 결과가 true

    NOT : !

    !(false) => true

    */

    cout << ((Compare1 < Compare2) && (Compare1 < 50)) << endl;
    cout << (!(Compare1 < Compare2)) << endl;


    int condition1 = 100;

    /*
       조선식의 종류
       비교연산식
       bool 데이터
       true -> 1, false ->
       산술 연산식
    */

    if (condition1 >= 50) {
        // 참일때 실행구문 
        cout << condition1 << endl;

    }

    if (true) {}
    if (false) {}
    if (1) {}
    if (0) {}
    if (20) {}  // 0 : false, 이외외 정수 : true 
    int condition2 = 10;
    if (condition2 + 5) {}
    if (condition1 >= 50 && condition2 <= 10) {}

    /*
    if(조건식)}
    // 조건식이 참일때 실행 구문

    if(조건식2){
    // 조건식2가 참일때 실행구문
    } else {
    // 조건식2가 거짓일때 실행구문
    }

    if(고전식3){
    //조건식 3이 참일때 실행구문
    } else if(조건식4){
    //조건식 4가 참일때 실행구문
    } else if(조건식5){
    //조건식5가 참일때 실행구문
    } else {
    //조건식이 모두 거짓일때 실행구문
    }
 */



 // 문제1) A,B 두 수를 입력받아 비교해서 결과 출력
 // 출력 : A>B => ">" . A<B => "<" . A
    int NumA = 0;
    int NumB = 0;

    // cin >> NumA;
    // cin >> NumB;

    if (NumA > NumB) {
        cout << ">" << endl;
    }
    else if (NumA < NumB) {
        cout << "<" << endl;
    }


    // 문제2) 시험점주 입력, 90~100:A , 80~89:B , 70~79:C , 60~69:D , 60미만:F
    int NumTest = 0;
    //cin >> NumTest;
    if (NumTest >= 90) {
        cout << "A" << endl;
    }
    else if (NumTest >= 80) {
        cout << "B" << endl;
    }
    else if (NumTest >= 70) {
        cout << "C" << endl;
    }
    else if (NumTest >= 60) {
        cout << "D" << endl;
    }
    else {
        cout << "F" << endl;
    }


    // 문제3) 상점에 도둑이 들었는데, 목격자가 인상착의를 말했다. 
    // 키는 약 180이상 옷은 검정색 옷을 입고 있었다고 말했다. 
    // 범인을 찾는 조건문을 작성하시오. 
    // 옷색 입력값 : Black = B, White = W, Red = R ...

    int TallNumber = 0;
    char ClothColor = NULL;  // * NULL : 문자값이 준재하지 않음

    //cin >> TallNumber;
    //cin >> ClothColor;

    // TallNuber >= 180
    // ClothColor == 'B' 논리연산으로 연결  

    if (TallNumber >= 180 && ClothColor == 'B') {
        cout << "범인" << endl;
    }
    else {
        cout << "시민" << endl;
    }

    // if 중첨 
    /*
    if(조건식1){
    // 참일때 실행
    if(조건식2){
    }
    */

    /*
    * 180이상이고 검저색 옷 : 범인
    * 180이하이고 검정색 옷 : 용의자
    * 180이상이고 다른색 옷 : 용의자
    * 두 조건 모두 아니면 : 시만

    */

    if (TallNumber >= 180 && ClothColor == 'B') {
        cout << "범인" << endl;
    }
    else if (TallNumber >= 180 || ClothColor == 'B') {
        cout << "용의자" << endl;
    }
    else {
        cout << "시민" << endl;
    }

    // 중첩 
    if (TallNumber >= 180) {
        if (ClothColor == 'B') {
            cout << "범인" << endl;
        }
        else {
            cout << "용의자" << endl;
        }


        // 반복문 for : 반복 획수를 정해서 반복 실행 
        // 반복 : iterate, 정수 : integer => for 
        /*
        for(구문1; 구문2; 구문3){}

        구문1
        - for 구문이 처움 실행될 때 한번 실행되는 구문
        - 반복 횟수를 결정하는 변수 선언

        구문2
        - 반복 실행될 때 조건 비교식 구문
        - 조건 비교식의 결과값이 참일때 반복 실행

        구문3
        - 코드블럭이 반복 실행될 대마다 코드블럭 실행 이후에 실행되는 구문

        for(int i = 0; i < 10; i+=2){}

        */

    }

    // 조건식에 사용되는 범위 숫자가 반복 횟수를 나타내도록 
    for (int i = 0; i < 10; i++) {
        cout << "Hello World" << endl;
    }

    int Total = 0;
    for (int i = 0; i < 10; i++) {
        Total += i;
        cout << Total << endl;
    }
    cout << Total << endl;

    // 구구단 2단 
    int Dan2 = 0;
    for (int i = 1; i <= 9; i++) {
        Dan2 = 2 * i;
        cout << "2 X " << i << "=";
        cout << Dan2 << endl;
    }

    // 중첩 for 
    // 구구단 전체 
    int Dan = 0;
    for (int i = 2; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            Dan = i * j;
            cout << Dan << " X " << j << " = ";
            cout << Dan << endl;

        }

    }

    /*

      while : 조건식이 참인 경우에 실행하는 구문

      while(조건비교식) {}

      while(Total >= 200) {}
      while(true) {}
      white(!) {}

    */

    int iter = 0;
    while (iter < 10) {
        cout << "Hello World" << endl;
        iter++;
    }


    do {
        cout << "Hello World" << endl;
        iter++;

    } while (iter < 10);   // 틀별할 때 쓴다. 거의 사용은 하지 않는다. 

    \
        /*
        while (true) {
        로그인 시도
        이이디 / 비번 체크
        로그인 성공
        break;
        로그인 실패
        }
        */


        // 문제) 반복횟수를 입력받고, 반복 될대마다 
        // 두 수 A, B를 입력받아 A+B의 결과값을 표시

        int IterNumber = 0;
    int IterA = 0;
    int IterB = 0;


    //cin >> IterNumber;
    //for (int i = 0; i < IterNumber; i++) {
    //    cin >> IterA;
    //    cin >> IterB;
    //    cout << IterA + IterB << endl;
    //}

    // 문제) 마트에서 계산한 물건의 가격이 맞는지 확인하기 
    // 분해 - 문제를 쪼개 보라 

    /*
    1. 총금액 입력
    2. 물건 종정류의 수 입력 => 반복 횟수
    3. 반복 실행
    3-1. 각 물건 개당 가격 입력
    3-2. 각 물건의 개수 입력
    3-3. 각 물건 개당 가격 * 물건 개수
    3-4. 각 물건 전체 가격을 모두 덧셈
    4. 입력받은 총금액과 계산 결과 총합 비교
    5. 4번의 결과 true => yes / false => no
    */


    //1. 
    int TotalPrice = 0;
    cout << "총 금액을 입력해 주세요 : ";
    cin >> TotalPrice;


    //2.
    int SortNumber = 0;
    cout << "물건의 종류 수를 입력해 주세요 : ";
    cin >> SortNumber;

    //3. 
    int ProductPrice = 0;
    int ProductNumber = 0;
    int ProductTotalPrice = 0;
    int SumTotalPrice = 0;
    for (int i = 0; i< SortNumber; i++) {
        // 3-1. 
        cout << "물건의 개당 가격 : ";
        cin >> ProductPrice;
        // 3-2
        cout << "물건의 개수 : ";
        cin >> ProductNumber;
        // 3-3 
        ProductTotalPrice = ProductPrice * ProductNumber;
        // 3-4 
        SumTotalPrice = SumTotalPrice + ProductTotalPrice;

    }
    // 4,5.
    if (TotalPrice == SumTotalPrice) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    
    }
        
    // 문제) 총금액 입력 받고, 각 물건의 개수 
    // * 금액 총합이 총금액과 같아질 때 까지 반복실행해서 같은지 비교 
    // 분해 - 문제를 쪼개 보라 

    /*
    1. 총금액 입력 
    2. 반복실행(while) : 조건비교 (총금액 != 0)
    2-1. 각 물건 개당 가격 입력
    2-2. 각 물건의 개수 입력
    2-3. 각 물건 개당 가격 * 개수 = 물건당 금액 
    2-4. 총금액 - 물건당 금액 
    3. Yes 출력 
    */

    //1.
    int TotalPrice1 = 0;
    cout << "총 금액을 입력해 주세요 : ";
    cin >> TotalPrice;

    //2.
    int ProductPrice1 = 0;
    int ProductNumber1 = 0;
    int ProductTotalPrice1 = 0;
    bool Zero = 0;

    while (TotalPrice1 != 0) {

        if (TotalPrice1 < 0) {
            cout << "No" << endl;
            Zero = false;
        }

        //2-1.
        cout << "물건 개당 가격 입력 : ";
        cin >> ProductPrice1;
        //2-2
        cout << "물건 개수 입력 : ";
        cin >> ProductNumber1;
        //2-3
        ProductTotalPrice = ProductPrice1 * ProductNumber1;
        //2-4
        TotalPrice1 = TotalPrice1 - ProductTotalPrice;   
     cout << "Yes" << endl;
       
    
    
}











   




    // 비트와 바이트에 대한 이해 
    /* 여러가지 주석을 사용할 때 사용 가능 
       byt : 컴퓨터 데이터 저장의 최소단위 
       byte : 컴퓨터 정보 저장의 최소단위(8bit)
       1byte = 8bit 

       2진수 숫자 데이터 : 0,1 
       진법 계산
       1010 => 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10
       2^1 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024
       색표현, 문자표현, 아이피주소 표현 : 1byte 기준으로 확장 
       트루 컬러 24bit R=8, G=8, B=8 컬러 선택 

       연산 = 계산 
       다양한 데이터 처리, 원본 데이터 가공하여 원하는 데이터 만들어 낸다. 
       수식 - 연산식 
       대입연산 - 변산에 값을 할당하는 연산 '=' assign 할당을 말한다. 변수에 저장한다. 변수 메모리에 할당한다. 
       프로그래밍 언어에서는 대입하라는 뜻이다. 
       변수 = 데이터값 
       x <= y 
       a = 10 

       산술 연산자 = 사칙연산 
       +, -, *, /, %(나머지를 찾는 연산)






       
       encoding 코드화 시켜주는 것이다. 8개씩 끊어서 해주겠다. 
    
    */













// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file



   