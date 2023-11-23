#include "io.h"

// 매개변수(전달하는 변수(절달기능)를 말한다
void ParameterFunction(int param1, int param2) // 괄호안에서 int 
{
	cout << param1 + param2 << endl;

}


// * 실제 매개 변수 : argument 
// * 형식 메개 변수 : parameter
// return 0; 메인 함수는 zero, 함수를 호출한 자에게 되돌려 준다.
// 에너지를 사용했는데 없어지는 것이 아니라, 무엇을 먹었을때 다시 생성 
// main 값의 맨 앞 왜 int 인가? 호출한 곳으로 o값을 되돌리기 때문에 int 


// 리턴값 
int ReturnFunction()
{
	int	NumberA = 10; 
	int NumberB = 20; 
	int Sum = 0; 

	Sum = NumberA + NumberB;

	return Sum;

}

// 매개 변수 + 리턴값 
int ParamReturn(int param1, int param2)
{
	int Sum = 0;

	Sum = param1 + param2;

	return Sum;
}