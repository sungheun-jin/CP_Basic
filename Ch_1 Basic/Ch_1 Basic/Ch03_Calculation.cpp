#include "io.h"

void Arithmatic()
{
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
}
void Increment()
{  // 증감 연산에는 반복 실행의 개념이 포함되어 있다. 
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

}
void CompareFunction()
{ /* 비교 연산
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


}
void Logical()
{



}