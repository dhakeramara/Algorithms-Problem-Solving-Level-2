#include<cmath>
#include <iostream>
#include<string>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

int PrintResevedNumber(int Number)
{
	int Remainder = 0, ReversedNumber = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		ReversedNumber = ReversedNumber * 10 + Remainder;
	}
	return ReversedNumber;
}

int main()
{
	cout << "Reversed Number is = " << PrintResevedNumber(ReadPositiveNumber("Please Enter a Positive Number ?"));
}

