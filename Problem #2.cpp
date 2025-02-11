#include<cmath>
#include <iostream>
#include<string>
using namespace std;

enum enPrimeNotPrime{Prime = 1 , NotPrime = 2};

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

enPrimeNotPrime CheckNumber(int Number)
{
	int M = round(Number / 2);
	for (int Counter = 2;Counter <= M;Counter++)
	{
		if (Number % Counter == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}

void PrintPrimeNumberFrom1ToN(int Number)
{
	cout << "\n";
	cout << "Prime Number From " << 1 << " To " << Number << " are  :" << endl;
	for (int i = 1; i <= Number;i++)
	{
		if (CheckNumber(i) == enPrimeNotPrime::Prime)
		{
			cout << i << endl;
		}
	}
}

int main()
{
	PrintPrimeNumberFrom1ToN(ReadPostiveNumber("Please Enter a Positive Number ?"));
}

