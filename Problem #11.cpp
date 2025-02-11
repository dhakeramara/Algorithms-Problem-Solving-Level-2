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

int ReverseNumber(int Number)
{
	int Remainder = 0, ReverseNumber = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		ReverseNumber = ReverseNumber * 10 + Remainder;
	}
	return ReverseNumber;
}

bool isPalindromeNumber(int Number)
{
	return Number == ReverseNumber(Number);
}

int main()
{
	if (isPalindromeNumber(ReadPositiveNumber("Please Enter a Positive Number ?")))
		cout << "Yes , It's a Palindrome Number" << endl;
	else
		cout << "No , It's Not a Palindrome Number" << endl;
}

