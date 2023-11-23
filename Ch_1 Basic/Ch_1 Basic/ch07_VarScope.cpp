#include "io.h"

int GlobalNumber = 10;

void Sum()
{
	int FunctionLocalNumber = 20;

	for (int BlockLocalNumber = 0; BlockLocalNumber < 3; BlockLocalNumber++)
	{
		cout << "Global : " << GlobalNumber << endl;
		cout << "FunctionLocal : " << FunctionLocalNumber << endl;

	}

	// cout << "Global : " << GlobalNumber << endl; : i 인식 불가능 
	cout << "FunctionLocal : " << FunctionLocalNumber;
	cout << "Global : " << GlobalNumber << endl;
	cout << "FunctionLocal : " << FunctionLocalNumber << endl;

}

	