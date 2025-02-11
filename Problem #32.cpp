#include<cmath>
#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	int RandNumber = rand() % (To - From - 1) + From;
	return RandNumber;
}

void FillArrayWithRandomNumber(int arr[100], int& arrLength)
{
	cout << "Please Enter Elements Number ?" << endl;
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void CopyArrayInReversedOrder(int arrSource[100], int arrDestination[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arrDestination[i] = arrSource[arrLength - 1 - i];
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;
	FillArrayWithRandomNumber(arr, arrLength);
	int arr2[100];
	CopyArrayInReversedOrder(arr, arr2, arrLength);

	cout << "Elements Array 1 : ";
	PrintArray(arr, arrLength);

	cout << endl;

	cout << "Elements Array 2 : ";
	PrintArray(arr2, arrLength);

	cout << endl;


}

