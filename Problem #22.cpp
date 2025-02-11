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

void ReadArray(int arr[100], int& arrLength)
{
	cout << "Please Enter number Of Elements" << endl;
	cin >> arrLength;

	cout << "Please Enter Array Elements ?" << endl;

	for (int i = 0; i < arrLength;i++)
	{
		cout << "Element [" << i + 1 << "] :";
		cin >> arr[i];
	}
	cout << "\n";
}

void PrintArray(int arr[100], int& arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int TimesRepeated(int Number, int arr[100], int arrLength)
{
	int Counter = 0;
	for (int i = 0; i <= arrLength - 1; i++)
	{
		if (Number == arr[i])
		{
			Counter++;
		}
	}

	return Counter;
}

int main()
{
	int arr[100], arrLength, NumberToCheck;

	ReadArray(arr, arrLength);
	NumberToCheck = ReadPositiveNumber("Please Enter a Positive Number ?");

	cout << "Original Array :" << endl;
	PrintArray(arr, arrLength);

	cout << NumberToCheck << " is Repeated " << TimesRepeated(NumberToCheck, arr, arrLength) << " Time(s) " << endl;
}

