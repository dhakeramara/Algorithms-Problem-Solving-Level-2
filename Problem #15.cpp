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

void PrintLetterPattern(int Number)
{
	for (int i = 65; i <= Number + 65 - 1;i++)
	{
		for (int j = 1; j <= i - 65 + 1;j++)
		{
			cout << char(i);
		}
		cout << "\n";
	}
}

int main()
{
	PrintLetterPattern(ReadPositiveNumber("Please Enter a Positive Number ?"));
}

