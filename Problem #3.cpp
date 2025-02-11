#include<cmath>
#include <iostream>
#include<string>
using namespace std;

int ReadPostiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

bool isPerfectNumber(int Number)
{
	int sum = 0;
	for (int i = 1;i < Number;i++)
	{
		if (Number % i == 0)
		{
			sum += i;
		}
	}
	return Number == sum;
}

void PrintResult(int Number)
{
	if (isPerfectNumber(Number))
		cout <<Number<< " Is a perfect Number";
	else
		cout <<Number<< " Is Not a Perfect Number";
}



int main()
{
	PrintResult(ReadPostiveNumber("Please Enter a Positive Number ?"));
}

