#include "io.h"

void DefineStructure()
{
	// **변수 타입 선언 - 이것이 중요하다 
	// struct 는 소문자로 시작, 클래스랑 구분해 주기 위해서 camel case 사용, 구분을 해야 쉬운 인식, 가독이 가능 
	// 코드는 분석 쉽게 읽을 수 있는 가독성이 중요하다. 구분, 인지의 중요성 
	struct carData {
		int Number = 0;
		int Model = 0;
		char Word = NULL;
	};

	// 변수 선언 및 초기화 
	carData Sonata = {
		1234,
		'A'
	};

	// 변수 값 출력 
	cout << Sonata.Number << endl;
	cout << Sonata.Model << endl;


	// 변수 값 대입 
	Sonata.Number = 5678;
	Sonata.Model = 'B';

	cout << Sonata.Number << endl;
	cout << Sonata.Model << endl;







}

void StructureArray()
{
	struct phone {
		char CompanyCode = NULL;  // NULL 아무것도 없는 문자, 문자변수 초기화 
		int PhoneNumber = 0;
	};

	phone SK[2] = {
		
		{'A', 12345678},
		{'B', 98765432}
	};
		
	cout << SK[0].CompanyCode << endl;
	cout << SK[1].CompanyCode << endl;
	cout << "---------------" << endl;
	cout << SK[0].PhoneNumber << endl;
	cout << SK[1].PhoneNumber << endl;

}