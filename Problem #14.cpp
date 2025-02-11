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

void PrintInvertedLetterPattern(int Number)
{
	for (int i = 65 + Number - 1; i >= 1; i--)
	{
		for (int j = 1; j <= Number - (Number + 65 - 1 - i); j++)
		{
			cout << char(i);
		}
		cout << "\n";
	}
}

int main()
{
	PrintInvertedLetterPattern(ReadPositiveNumber("Please Enter a Positive Number ?"));
}

