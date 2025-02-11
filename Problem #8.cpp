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

int CountDigitFrequency(short DigitCheck, int Number)
{
	int Remainder = 0, Frequency = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		if (DigitCheck == Remainder)
		{
			Frequency++;
		}

	}
	return Frequency;
}

int main()
{
	int Number = ReadPositiveNumber("Please Enter Positive Main Number ?");
	short DigitCheck = ReadPositiveNumber("Please Enter One Degit Number To Check ?");
	cout << endl;
	cout << "Frequency Of " << DigitCheck << " is = "<< CountDigitFrequency(DigitCheck, Number)<<" Time(s)"<<endl;
}

