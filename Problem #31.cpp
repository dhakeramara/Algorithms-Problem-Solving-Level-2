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

int RandomNumber(int From , int To)
{
	int RandNumber = rand() % (To - From - 1) + From;
	return RandNumber;
}

void FillArrayWith1ToN(int arr[100], int arrLenght)
{
	for (int i = 0; i < arrLenght; i++)
	{
		arr[i] = i + 1;
	}
}

void PrintArray(int arr[100], int arrLenght)
{
	for (int i = 0; i < arrLenght; i++)
	{
		cout << arr[i] << " ";
	}
}

void Swap(int& A, int& B)
{
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
}

void ShuffleArray(int arr[100], int arrLenght)
{
	for (int i = 0; i < arrLenght; i++)
	{
		Swap(arr[RandomNumber(1, arrLenght) - 1], arr[RandomNumber(1, arrLenght) - 1]);
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrLenght = ReadPositiveNumber("Please Enter An Elements Array Number ?");

	FillArrayWith1ToN(arr, arrLenght);
	cout << "Array Elements Before Shuffle :";
	PrintArray(arr, arrLenght);

	ShuffleArray(arr, arrLenght);
	cout << endl;

	cout << "Array Elements After Shuffle : ";
	PrintArray(arr, arrLenght);
	cout << endl;

}

