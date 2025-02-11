#include<cmath>
#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;

enum enPrimeNotPrime{Prime = 1 , NotPrime = 2};

enPrimeNotPrime CheckNumber(int Number)
{
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0) {
			return enPrimeNotPrime::NotPrime;
		}
	}
	return enPrimeNotPrime::Prime;
}

int RandomNumber(int From, int To)
{
	// Function To Generate Random Number ;
	int RandNumber =  rand() % (To - From + 1) + From;
	return RandNumber;
}

void FillArrayWithRandomNumber(int arr[100], int& arrLength)
{
	cout << "Please Enter Number Of Elements ? "<<endl;
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrLength)
{
	int Counter = 0;
	for (int i = 0; i < arrLength ; i++)
	{
		cout << arr[i] << " ";
	}
}

int MaxNumberInArray(int arr[100], int arrLength)
{
	int Max = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] > Max)
		{
			Max = arr[i];
		}
	}
	return Max;
}

int MinNumberInArray(int arr[100], int arrLength)
{
	int Min = 0;
	Min = arr[0];
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] < Min)
		{
			Min = arr[i];
		}
	}
	return Min;
}

int SumNumberArray(int arr[100], int arrLength)
{
	int Sum = 0;
	for (int i = 0; i < arrLength; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}

float AvrageNumberArray(int arr[100], int arrLength)
{
	return (float)SumNumberArray(arr, arrLength) / arrLength;
}

void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arrDestination[i] = arrSource[i];
}

void CopyPrimeNumber(int arrSource[100], int arrDestination[100], int arrLength, int& arr3Length)
{
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckNumber(arrSource[i]) == enPrimeNotPrime::Prime)
		{
			arrDestination[Counter] = arrSource[i];
			Counter++;
		}
	}
	arr3Length = --Counter;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	

	FillArrayWithRandomNumber(arr, arrLength);

	cout << endl;

	cout << "Array 1 Elements : ";
	PrintArray(arr, arrLength);

	cout << endl;

	int arr2[100];
	CopyArray(arr, arr2, arrLength);

	cout << "Array 2 Elements Copy : ";
	PrintArray(arr2, arrLength);

	cout << endl;

	int arr3[100], arr3Length = 0;
	CopyPrimeNumber(arr, arr3, arrLength,arr3Length);

	cout << "Array 3 Elements Prime : ";
	PrintArray(arr3, arr3Length);

	cout << endl;

	cout << "Sum Of Number in Elements is : ";
	cout << SumNumberArray(arr, arrLength)<<endl;

	cout << endl;

	cout << "Max Number in Elements : ";
	cout<<MaxNumberInArray(arr, arrLength)<<endl;

	cout << endl;

	cout << "Minimum Number in Elements is : ";
	cout << MinNumberInArray(arr, arrLength) << endl;

	cout << endl;

	cout << "Avrage Number in Elements is : ";
	cout << AvrageNumberArray(arr, arrLength) << endl;
}

