#include<cmath>
#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;

void FillArray(int arr[100], int& Length)
{
    Length = 6;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

bool IsPalindromeArray(int arr[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        if (arr[i] != arr[Length - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], Length = 0;
    FillArray(arr, Length);
    cout << "Array Element : ";
    PrintArray(arr, Length);
    cout << endl;
    if (IsPalindromeArray(arr, Length))
        cout << "Yes , It's a Palindrome Array \n";
    else
        cout << "No , It's Not a Palindrome Array \n";
}

