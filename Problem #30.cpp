#include<cmath>
#include <iostream>
#include<string>
#include<cstdlib>
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

int RandomNumber(int From, int To)
{
	// Function To Generate Random Number ;
	int RandNumber = rand() % (To - From + 1) + From;
	return RandNumber;
}

void FillArrayWithRandomNumber(int Arr[100], int ArrLength)
{

	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = RandomNumber(1, 100);
	}
}

void SumOf2Array(int Arr[100], int Arr2[100], int ArrSum[100], int ArrLenght)
{
	for (int i = 0; i < ArrLenght; i++)
	{
		ArrSum[i] = Arr[i] + Arr2[i];
	}
}

void PrintArray(int Arr[100], int ArrLenght)
{
	int Counter = 0;
	for (int i = 0; i < ArrLenght; i++)
	{
		cout << Arr[i] << " ";
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int Arr[100], Arr2[100], ArrSum[100];
	int ArrLenght = ReadPositiveNumber("How Many Elements ?");
	FillArrayWithRandomNumber(Arr, ArrLenght);
	FillArrayWithRandomNumber(Arr2, ArrLenght);
	SumOf2Array(Arr, Arr2, ArrSum, ArrLenght);

	cout << endl;

	cout << "Array 1 Elements : ";
	PrintArray(Arr, ArrLenght);

	cout << endl;

	cout << "Array 2 Elements : ";
	PrintArray(Arr2, ArrLenght);

	cout << "\n\n";

	cout << "Sum Of 2 Array Elements " << endl;
	PrintArray(ArrSum, ArrLenght);

	cout << endl;
}

