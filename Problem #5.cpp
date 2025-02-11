#include<cmath>
#include <iostream>
#include<string>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message <<endl ;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void PrintDegits(int Number)
{
	 int Remainder = 0;
	 while (Number > 0)
	 {
		 Remainder = Number % 10;
		 Number = Number / 10;
		 cout << Remainder << endl;
	 }
		
}

int main()
{
	PrintDegits(ReadPositiveNumber("Please Enter a Positive Number ?"));
}

