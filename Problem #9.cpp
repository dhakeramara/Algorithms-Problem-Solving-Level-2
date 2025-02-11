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
		cin>>Number;
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

void PrintAllFrequencyDigits(int Number)
{
	for (int i = 0; i < 10; i++)
	{
		short DigitFrequency = 0;
		DigitFrequency = CountDigitFrequency(i, Number);
		
			if (DigitFrequency > 0)
			{
				cout << "Number " << i << " Frequency is " << DigitFrequency << " Time(s)" << endl;
			}
		
	}
}

int main()
{
	int Number = ReadPositiveNumber("Please Enter a Main Positive Number ?");
	cout << endl;
	PrintAllFrequencyDigits(Number);
	

}

