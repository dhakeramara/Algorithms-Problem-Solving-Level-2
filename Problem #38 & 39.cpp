#include<cmath>
#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;


bool IsPrime(int Number)
{
    int M = Number / 2;
    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return false;
    }
    return true;
}

int RandomNumber(int From, int To)
{
    int RandNumber = rand() %  (To - From + 1) + From;
    return RandNumber;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "Please Enter The Elements Of Array ? " << endl;
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}

void CopyOddNumberOfArray(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arrSource[i] % 2 != 0)
        {
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
        }
        
    }
}

void CopyEvenNumberOfArray(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arrSource[i] % 2 == 0)
        {
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
        }
        
    }
}

void CopyPrimeNumberOfArray(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (IsPrime(arrSource[i]))
        {
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
        }

    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0 , arr2Length = 0 , arr3Length = 0 , arr4Length =0;
    FillArrayWithRandomNumbers(arr, arrLength);
    int arr2[100];
    CopyOddNumberOfArray(arr, arr2, arrLength, arr2Length);
    int arr3[100];
    CopyEvenNumberOfArray(arr, arr3, arrLength, arr3Length);
    int arr4[100];
    CopyPrimeNumberOfArray(arr, arr4, arrLength, arr4Length);

    cout << "Array Numbers Elements is : ";
    PrintArray(arr, arrLength);
    cout << endl;
    cout << "Odd Numbers in  Array Elements : ";
    PrintArray(arr2, arr2Length);
    cout << endl;
    cout << "Even Numbers in Array Elements : ";
    PrintArray(arr3, arr3Length);
    cout << endl;
    cout << "Prime Numbers in Array Elements : ";
    PrintArray(arr4, arr4Length);
    cout << endl;

    return 0;
}





enum enPrimeOrNotPrime { Prime = 1, NotPrime = 2 };

enPrimeOrNotPrime CheckPrimeOrNot(int Number)
{
    int M = round(Number / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
        {
            return enPrimeOrNotPrime::NotPrime;
        }
    }
    return enPrimeOrNotPrime::Prime;

}

