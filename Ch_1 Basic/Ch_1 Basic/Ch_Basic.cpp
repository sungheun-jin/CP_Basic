// Ch_01 basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "io.h"
#include "DefineFunction.h"

//std::cout => cout 

    // �Լ� ���� : main �Լ� �ڿ� ���� 
    void DefineFunction();

    int main() 
    {
        // �Լ� ȣ�� 
        // Cppbasic();
        // Variable();
        // ParameterFunction(10,20);
        // �پ��� ���� �پ��� ���� �� �� �ִ�.
        // StructureArray();
        // Eunmeration();
        // EvenOdd();
        PrintEven();
        



        cout << 50 + ParamReturn(30, 40) << endl;
    }

    // �Լ� ���� : main �Լ� �ڿ� ���� 
    void DefineFunction() 
    {
        cout << "Hello Funcation" << endl;
     
    }

    // scope�� 
    // ���� ���� - Globl => �ν� ����
    // ���� ���� - Local => Ư�� ���������� ����


        





















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
