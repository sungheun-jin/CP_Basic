// Ch_01 basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "io.h"
#include "DefineFunction.h"

//std::cout => cout 

    // 함수 정의 : main 함수 뒤에 정의 
    void DefineFunction();

    int main() 
    {
        // 함수 호출 
        // Cppbasic();
        // Variable();
        // ParameterFunction(10,20);
        // 다양한 정의 다양한 값을 낼 수 있다.
        // StructureArray();
        // Eunmeration();
        // EvenOdd();
        PrintEven();
        



        cout << 50 + ParamReturn(30, 40) << endl;
    }

    // 함수 정의 : main 함수 뒤에 정의 
    void DefineFunction() 
    {
        cout << "Hello Funcation" << endl;
     
    }

    // scope는 
    // 전역 변수 - Globl => 인식 가능
    // 지역 변수 - Local => 특정 영역에서만 가능


        





















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
