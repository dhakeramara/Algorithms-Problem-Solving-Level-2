#include<cmath>
#include <iostream>
#include<string>
using namespace std;

int ReadPositveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

int ReverseNumber(int Number)
{
	int Remainder = 0, NumberReversed = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		NumberReversed = NumberReversed * 10 + Remainder;
	}
	return NumberReversed;
}

void PrintDigit(int Number)
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
	PrintDigit(ReverseNumber(ReadPositveNumber("Please Enter a Positive Number ?")));
}

