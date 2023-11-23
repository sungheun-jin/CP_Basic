#include "io.h"

void IffunctionDesc() 
{
    int C1ondination1 = 100;
   
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



    
}

void IffunctionEx01() 
{ 
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

}

void IffunctionEx02() 
{
    // 문제2) 시험점주 입력, 90~100:A , 80~89:B , 70~79:C , 60~69:D , 60미만:F
    int NumTest = 0;
    cin >> NumTest;
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
}

void IffunctionEx03() 
{
    // 문제3) 상점에 도둑이 들었는데, 목격자가 인상착의를 말했다. 
    // 키는 약 180이상 옷은 검정색 옷을 입고 있었다고 말했다. 
    // 범인을 찾는 조건문을 작성하시오. 
    // 옷색 입력값 : Black = B, White = W, Red = R ...

    int TallNumber = 0;
    char ClothColor = NULL;  // * NULL : 문자값이 준재하지 않음

    cin >> TallNumber;
    cin >> ClothColor;

    // TallNuber >= 180
    // ClothColor == 'B' 논리연산으로 연결  

    if (TallNumber >= 180 && ClothColor == 'B') {
        cout << "범인" << endl;
    }
    else {
        cout << "시민" << endl;
}  


    }

void IfNestDesc() 
{
    // if 중첨 
    /*
    if(조건식1){
    // 참일때 실행
    if(조건식2){
    }
    */
}

void IfNestEx01()
{
    /*
    * 180이상이고 검저색 옷 : 범인
    * 180이하이고 검정색 옷 : 용의자
    * 180이상이고 다른색 옷 : 용의자
    * 두 조건 모두 아니면 : 시민

    */

    int TallNumber = 0;
    char ClothColor = NULL;  // * NULL : 문자값이 준재하지 않음

    cin >> TallNumber;
    cin >> ClothColor;

    if (TallNumber >= 180 && ClothColor == 'B') {
        cout << "범인" << endl;
    }
    else if (TallNumber >= 180 || ClothColor == 'B') {
        cout << "용의자" << endl;
    }
    else {
        cout << "시민" << endl;
    }


}

void IfNestEx02() 
{  
    int TallNumber = 0;
    char ClothColor = NULL;  // * NULL : 문자값이 준재하지 않음

    cin >> TallNumber;
    cin >> ClothColor;
    
    // 중첩 
    if (TallNumber >= 180) {
    if (ClothColor == 'B') {
    cout << "범인" << endl;
    }
    else {
    cout << "용의자" << endl;
        }
    }



}

void SwitchEx() 
{
 
}


    

    
