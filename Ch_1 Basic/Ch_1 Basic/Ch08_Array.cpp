#include "io.h"

void PrintArray() 
{
	int ArrayNumber[3] = { 1,2,3 };

	cout << ArrayNumber[0] << endl;

	for (int i = 0; i < 3; i++) {
		cout << ArrayNumber[i];
	}

	int ArrayInit[3];
	for (int i = 0; i < 3; i++) {
		ArrayNumber[i] = i + 1;
	}
	for (int i = 0; i < 3; i++) {
		cout << ArrayInit[i];
	}

	cout << endl;

	char Word[] = { 'H','e','l','l','o',' ','W','o','r','d' };

	cout << Word[0] << endl;

	for (int i = 0; i < 11; i++) {
		cout << Word[i];
	}
}

void SumArray()
{
	// 문제) 반복횟수를 입력받고, 반복 될대마다 
	// 두 수 A, B를 입력받아 A+B의 결과값을 표시

	int IterNumber = 5;
	int IterA = 0;
	int IterB = 0;

	//cin >> IterNumber;

	int IterArray[5];


	for (int i = 0; i < IterNumber; i++) {
		cin >> IterA;
		cin >> IterB;

		IterArray[i] = IterA + IterB;


		for (int i = 0; i < IterNumber; i++) {
			cout << IterArray[i] << endl;
		}
	}
}
		
// 성적 표시 함수 
char Grade(int NumTest)
{

	if (NumTest >= 90) {
		return 'A';
	}
	else if (NumTest >= 80) {
		return 'B';
	}
	else if (NumTest >= 70) {
		return 'C';
	}
	else if (NumTest >= 60) {
		return 'D';
	}
	else {
		return 'E';
	}
}
  
// 성적 처리 함수
void ProcessScore()
{
	int Score[5] = { 95, 85, 55, 67, 73 };
	char GradeCharacter[5];

	for (int i = 0; i < 5; i++) {
		GradeCharacter[i] = Grade(Score[i]);
	}

	for (int i = 0; i, 5; i++) {
		cout << GradeCharacter[i] << " : ";

	}
}
	
// 성적 처리 함수
void StringArray()
	{
		char Word[6] = "Hello";   // \0이 들어 있기에 6

		char Word2[] = "Bubble";

	}

// 버블 정렬(Sort)
void BubbleSort()
{
	// 숫자 개수 10개 
    int Number[10] = { 3,6,8,1,10,4,2,5,9,7 };
	int Temp = 0; 

	for (int i = 9; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (Number[j] > Number[j+1]) {
				// 바꾸기 
				Temp = Number[j];
				Number[j] = Number[j + 1];
				Number[j + 1] = Temp;
				

			}



		}
	}

	for (int i = 0; i < 10; i++) {
		cout << Number[1] << ":";
	}

}

// 2차원 배열 
void MultiArray() {
	int Number1[2][3] = { {1,2,3 },{4,5,6} };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << Number1[i][j] << ":";
			
		}
	
	}
		
		

}
	
	
	
	


