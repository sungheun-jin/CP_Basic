#include "io.h"

// �Ű�����(�����ϴ� ����(���ޱ��)�� ���Ѵ�
void ParameterFunction(int param1, int param2) // ��ȣ�ȿ��� int 
{
	cout << param1 + param2 << endl;

}


// * ���� �Ű� ���� : argument 
// * ���� �ް� ���� : parameter
// return 0; ���� �Լ��� zero, �Լ��� ȣ���� �ڿ��� �ǵ��� �ش�.
// �������� ����ߴµ� �������� ���� �ƴ϶�, ������ �Ծ����� �ٽ� ���� 
// main ���� �� �� �� int �ΰ�? ȣ���� ������ o���� �ǵ����� ������ int 


// ���ϰ� 
int ReturnFunction()
{
	int	NumberA = 10; 
	int NumberB = 20; 
	int Sum = 0; 

	Sum = NumberA + NumberB;

	return Sum;

}

// �Ű� ���� + ���ϰ� 
int ParamReturn(int param1, int param2)
{
	int Sum = 0;

	Sum = param1 + param2;

	return Sum;
}