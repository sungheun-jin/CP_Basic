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


    // Ű����, ����� : ����, ��ɹ� 
    // Ű���� : ���� Ÿ�� ���� 

    int Number; // ���� ����
    Number = 10; // �ʱⰪ ����

    int Number2 = 10; // ���� ���� �� �ʱ�ȭ 

    int Number3 = 1, Number4 = 2;  // ���̴� ������ �̷��Ե� ���� 

    Number3 = 5;

    // ���(Constant)
    const int Number5 = 10;

    // Number5 = 30; // ���� ������ �� ����

    // ������ Ÿ�� - ���� ������ Ÿ�� - ������, �Ǽ��� Ÿ���� �ִ�. 

    // ������ Ÿ��(int : integer)
    int Num1 = 10;
    short Num2 = 10;
    long Num3 = 10;

    // �Ǽ��� Ÿ��(float)
    float Num10 = 1.234f; //f�� ������ float ������ double 
    double Num11 = 1.234;


    // ���� ������ : ����(����1��), ���ڿ�(2���̻�)�� �����Ѵ�. 
    // char : character
    // char Ÿ�� ���� ǥ�� : ''���
    // ���ڿ� : "" ��� (�𸮾��̳� �ڹٰ� ���еǾ� �ְ�, �������� �������� �ʴ´�)
    char Letter = 'a';

    // bool Ÿ�� ������ 
    // ��/������ �����Ҷ� ����ϴ� ������ : True/False, Yes/No, On/Off 
    bool Condition = true;

    // auto ���� Ű���� 
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

    // ���� ���꿡�� �ݺ� ������ ������ ���ԵǾ� �ִ�. 
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

    /* �� ����
       ũ����� ����� ��/���� => ��ü ��� 1/0��
       true : �� : 1
       false : ���� : 0
    */

    int Compare1 = 10;
    int Compare2 = 20;

    // > : ũ��. > : �۴� => ������ ���� 

    cout << (Compare1 > Compare2) << endl;
    cout << (Compare1 < Compare2) << endl;
    cout << (Compare1 >= 100) << endl;
    cout << (100 <= Compare1) << endl;
    cout << (Compare1 == Compare2) << endl;
    cout << (Compare1 != Compare2) << endl;

    /* ��Ʈ ������
    ���� ���� : bool ������ ����. �� ������ ������ �����ϴ� ��
    AND : && ( & : AMPERAND )

    true && true : true
    true && false : fakse
    => bool �����Ͱ� ��� true �϶� ����� ture


    OR : || ( | : pipe)

    false || true : true
    false || false : false
    => bool ������ �� �ϳ��� true�̸� ����� true

    NOT : !

    !(false) => true

    */

    cout << ((Compare1 < Compare2) && (Compare1 < 50)) << endl;
    cout << (!(Compare1 < Compare2)) << endl;


    int condition1 = 100;

    /*
       �������� ����
       �񱳿����
       bool ������
       true -> 1, false ->
       ��� �����
    */

    if (condition1 >= 50) {
        // ���϶� ���౸�� 
        cout << condition1 << endl;

    }

    if (true) {}
    if (false) {}
    if (1) {}
    if (0) {}
    if (20) {}  // 0 : false, �̿ܿ� ���� : true 
    int condition2 = 10;
    if (condition2 + 5) {}
    if (condition1 >= 50 && condition2 <= 10) {}

    /*
    if(���ǽ�)}
    // ���ǽ��� ���϶� ���� ����

    if(���ǽ�2){
    // ���ǽ�2�� ���϶� ���౸��
    } else {
    // ���ǽ�2�� �����϶� ���౸��
    }

    if(������3){
    //���ǽ� 3�� ���϶� ���౸��
    } else if(���ǽ�4){
    //���ǽ� 4�� ���϶� ���౸��
    } else if(���ǽ�5){
    //���ǽ�5�� ���϶� ���౸��
    } else {
    //���ǽ��� ��� �����϶� ���౸��
    }
 */



 // ����1) A,B �� ���� �Է¹޾� ���ؼ� ��� ���
 // ��� : A>B => ">" . A<B => "<" . A
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


    // ����2) �������� �Է�, 90~100:A , 80~89:B , 70~79:C , 60~69:D , 60�̸�:F
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


    // ����3) ������ ������ ����µ�, ����ڰ� �λ����Ǹ� ���ߴ�. 
    // Ű�� �� 180�̻� ���� ������ ���� �԰� �־��ٰ� ���ߴ�. 
    // ������ ã�� ���ǹ��� �ۼ��Ͻÿ�. 
    // �ʻ� �Է°� : Black = B, White = W, Red = R ...

    int TallNumber = 0;
    char ClothColor = NULL;  // * NULL : ���ڰ��� �������� ����

    //cin >> TallNumber;
    //cin >> ClothColor;

    // TallNuber >= 180
    // ClothColor == 'B' ���������� ����  

    if (TallNumber >= 180 && ClothColor == 'B') {
        cout << "����" << endl;
    }
    else {
        cout << "�ù�" << endl;
    }

    // if ��÷ 
    /*
    if(���ǽ�1){
    // ���϶� ����
    if(���ǽ�2){
    }
    */

    /*
    * 180�̻��̰� ������ �� : ����
    * 180�����̰� ������ �� : ������
    * 180�̻��̰� �ٸ��� �� : ������
    * �� ���� ��� �ƴϸ� : �ø�

    */

    if (TallNumber >= 180 && ClothColor == 'B') {
        cout << "����" << endl;
    }
    else if (TallNumber >= 180 || ClothColor == 'B') {
        cout << "������" << endl;
    }
    else {
        cout << "�ù�" << endl;
    }

    // ��ø 
    if (TallNumber >= 180) {
        if (ClothColor == 'B') {
            cout << "����" << endl;
        }
        else {
            cout << "������" << endl;
        }


        // �ݺ��� for : �ݺ� ȹ���� ���ؼ� �ݺ� ���� 
        // �ݺ� : iterate, ���� : integer => for 
        /*
        for(����1; ����2; ����3){}

        ����1
        - for ������ ó�� ����� �� �ѹ� ����Ǵ� ����
        - �ݺ� Ƚ���� �����ϴ� ���� ����

        ����2
        - �ݺ� ����� �� ���� �񱳽� ����
        - ���� �񱳽��� ������� ���϶� �ݺ� ����

        ����3
        - �ڵ���� �ݺ� ����� �븶�� �ڵ�� ���� ���Ŀ� ����Ǵ� ����

        for(int i = 0; i < 10; i+=2){}

        */

    }

    // ���ǽĿ� ���Ǵ� ���� ���ڰ� �ݺ� Ƚ���� ��Ÿ������ 
    for (int i = 0; i < 10; i++) {
        cout << "Hello World" << endl;
    }

    int Total = 0;
    for (int i = 0; i < 10; i++) {
        Total += i;
        cout << Total << endl;
    }
    cout << Total << endl;

    // ������ 2�� 
    int Dan2 = 0;
    for (int i = 1; i <= 9; i++) {
        Dan2 = 2 * i;
        cout << "2 X " << i << "=";
        cout << Dan2 << endl;
    }

    // ��ø for 
    // ������ ��ü 
    int Dan = 0;
    for (int i = 2; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            Dan = i * j;
            cout << Dan << " X " << j << " = ";
            cout << Dan << endl;

        }

    }

    /*

      while : ���ǽ��� ���� ��쿡 �����ϴ� ����

      while(���Ǻ񱳽�) {}

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

    } while (iter < 10);   // Ʋ���� �� ����. ���� ����� ���� �ʴ´�. 

    \
        /*
        while (true) {
        �α��� �õ�
        ���̵� / ��� üũ
        �α��� ����
        break;
        �α��� ����
        }
        */


        // ����) �ݺ�Ƚ���� �Է¹ް�, �ݺ� �ɴ븶�� 
        // �� �� A, B�� �Է¹޾� A+B�� ������� ǥ��

        int IterNumber = 0;
    int IterA = 0;
    int IterB = 0;


    //cin >> IterNumber;
    //for (int i = 0; i < IterNumber; i++) {
    //    cin >> IterA;
    //    cin >> IterB;
    //    cout << IterA + IterB << endl;
    //}

    // ����) ��Ʈ���� ����� ������ ������ �´��� Ȯ���ϱ� 
    // ���� - ������ �ɰ� ���� 

    /*
    1. �ѱݾ� �Է�
    2. ���� �������� �� �Է� => �ݺ� Ƚ��
    3. �ݺ� ����
    3-1. �� ���� ���� ���� �Է�
    3-2. �� ������ ���� �Է�
    3-3. �� ���� ���� ���� * ���� ����
    3-4. �� ���� ��ü ������ ��� ����
    4. �Է¹��� �ѱݾװ� ��� ��� ���� ��
    5. 4���� ��� true => yes / false => no
    */


    //1. 
    int TotalPrice = 0;
    cout << "�� �ݾ��� �Է��� �ּ��� : ";
    cin >> TotalPrice;


    //2.
    int SortNumber = 0;
    cout << "������ ���� ���� �Է��� �ּ��� : ";
    cin >> SortNumber;

    //3. 
    int ProductPrice = 0;
    int ProductNumber = 0;
    int ProductTotalPrice = 0;
    int SumTotalPrice = 0;
    for (int i = 0; i< SortNumber; i++) {
        // 3-1. 
        cout << "������ ���� ���� : ";
        cin >> ProductPrice;
        // 3-2
        cout << "������ ���� : ";
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
        
    // ����) �ѱݾ� �Է� �ް�, �� ������ ���� 
    // * �ݾ� ������ �ѱݾװ� ������ �� ���� �ݺ������ؼ� ������ �� 
    // ���� - ������ �ɰ� ���� 

    /*
    1. �ѱݾ� �Է� 
    2. �ݺ�����(while) : ���Ǻ� (�ѱݾ� != 0)
    2-1. �� ���� ���� ���� �Է�
    2-2. �� ������ ���� �Է�
    2-3. �� ���� ���� ���� * ���� = ���Ǵ� �ݾ� 
    2-4. �ѱݾ� - ���Ǵ� �ݾ� 
    3. Yes ��� 
    */

    //1.
    int TotalPrice1 = 0;
    cout << "�� �ݾ��� �Է��� �ּ��� : ";
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
        cout << "���� ���� ���� �Է� : ";
        cin >> ProductPrice1;
        //2-2
        cout << "���� ���� �Է� : ";
        cin >> ProductNumber1;
        //2-3
        ProductTotalPrice = ProductPrice1 * ProductNumber1;
        //2-4
        TotalPrice1 = TotalPrice1 - ProductTotalPrice;   
     cout << "Yes" << endl;
       
    
    
}











   




    // ��Ʈ�� ����Ʈ�� ���� ���� 
    /* �������� �ּ��� ����� �� ��� ���� 
       byt : ��ǻ�� ������ ������ �ּҴ��� 
       byte : ��ǻ�� ���� ������ �ּҴ���(8bit)
       1byte = 8bit 

       2���� ���� ������ : 0,1 
       ���� ���
       1010 => 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10
       2^1 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024
       ��ǥ��, ����ǥ��, �������ּ� ǥ�� : 1byte �������� Ȯ�� 
       Ʈ�� �÷� 24bit R=8, G=8, B=8 �÷� ���� 

       ���� = ��� 
       �پ��� ������ ó��, ���� ������ �����Ͽ� ���ϴ� ������ ����� ����. 
       ���� - ����� 
       ���Կ��� - ���꿡 ���� �Ҵ��ϴ� ���� '=' assign �Ҵ��� ���Ѵ�. ������ �����Ѵ�. ���� �޸𸮿� �Ҵ��Ѵ�. 
       ���α׷��� ������ �����϶�� ���̴�. 
       ���� = �����Ͱ� 
       x <= y 
       a = 10 

       ��� ������ = ��Ģ���� 
       +, -, *, /, %(�������� ã�� ����)






       
       encoding �ڵ�ȭ �����ִ� ���̴�. 8���� ��� ���ְڴ�. 
    
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



   