#include "io.h"

void IffunctionDesc() 
{
    int C1ondination1 = 100;
   
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



    
}

void IffunctionEx01() 
{ 
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

}

void IffunctionEx02() 
{
    // ����2) �������� �Է�, 90~100:A , 80~89:B , 70~79:C , 60~69:D , 60�̸�:F
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
    // ����3) ������ ������ ����µ�, ����ڰ� �λ����Ǹ� ���ߴ�. 
    // Ű�� �� 180�̻� ���� ������ ���� �԰� �־��ٰ� ���ߴ�. 
    // ������ ã�� ���ǹ��� �ۼ��Ͻÿ�. 
    // �ʻ� �Է°� : Black = B, White = W, Red = R ...

    int TallNumber = 0;
    char ClothColor = NULL;  // * NULL : ���ڰ��� �������� ����

    cin >> TallNumber;
    cin >> ClothColor;

    // TallNuber >= 180
    // ClothColor == 'B' ���������� ����  

    if (TallNumber >= 180 && ClothColor == 'B') {
        cout << "����" << endl;
    }
    else {
        cout << "�ù�" << endl;
}  


    }

void IfNestDesc() 
{
    // if ��÷ 
    /*
    if(���ǽ�1){
    // ���϶� ����
    if(���ǽ�2){
    }
    */
}

void IfNestEx01()
{
    /*
    * 180�̻��̰� ������ �� : ����
    * 180�����̰� ������ �� : ������
    * 180�̻��̰� �ٸ��� �� : ������
    * �� ���� ��� �ƴϸ� : �ù�

    */

    int TallNumber = 0;
    char ClothColor = NULL;  // * NULL : ���ڰ��� �������� ����

    cin >> TallNumber;
    cin >> ClothColor;

    if (TallNumber >= 180 && ClothColor == 'B') {
        cout << "����" << endl;
    }
    else if (TallNumber >= 180 || ClothColor == 'B') {
        cout << "������" << endl;
    }
    else {
        cout << "�ù�" << endl;
    }


}

void IfNestEx02() 
{  
    int TallNumber = 0;
    char ClothColor = NULL;  // * NULL : ���ڰ��� �������� ����

    cin >> TallNumber;
    cin >> ClothColor;
    
    // ��ø 
    if (TallNumber >= 180) {
    if (ClothColor == 'B') {
    cout << "����" << endl;
    }
    else {
    cout << "������" << endl;
        }
    }



}

void SwitchEx() 
{
 
}


    

    
