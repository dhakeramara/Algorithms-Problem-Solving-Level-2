#include<cmath>
#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
    int RandNumber = rand() % (To - From + 1) + From;
    return RandNumber;
}

void FillArrayWithRandomNumbers(int arr[100], int& Length)
{
    cout << "Please Enter Number Of Array Elements : " << endl;
    cin >> Length;

    for (int i = 0; i < Length; i++)
    {
        arr[i] = RandomNumber(-100, 100);
    }
}

void PrintArray(int arr[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int OddCount(int arr[100], int Length)
{
    int Counter = 0;
    for (int i = 0; i < Length; i++)
    {
        if (arr[i] % 2 != 0)
        {
            Counter++;
        }
    }
    return Counter;
}

int EvenCount(int arr[100], int Length)
{
    int Counter = 0;
    for (int i = 0; i < Length; i++)
    {
        if (arr[i] % 2 == 0)
        {
            Counter++;
        }
    }
    return Counter;
}

int PositiveNumber(int arr[100], int Length)
{
    int Counter = 0;
    for (int i = 0; i < Length; i++)
    {
        if (arr[i] >= 0)
        {
            Counter++;
        }
            
    }
    return Counter;
}

int NigativeNumber(int arr[100], int Length)
{
    int Counter = 0;
    for (int i = 0; i < Length; i++)
    {
        if (arr[i] <= 0)
        {
            Counter++;
        }

    }
    return Counter;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], Length;
    FillArrayWithRandomNumbers(arr, Length);
    cout << "\n";
    cout << "Elements Of Array : ";
    PrintArray(arr, Length);
    cout << "\n";
    cout << "Odd Numbers Count in Array is : ";
    cout<<OddCount(arr, Length)<<endl;
    cout << "\n";
    cout << "Even Numbers Count in Array is : ";
    cout << EvenCount(arr, Length) << endl;
    cout << "\n";
    cout << "Positive Numbers Count in Array is : ";
    cout << PositiveNumber(arr, Length) << endl;
    cout << "\n";
    cout << "Nigative Numbers Count in Array is : ";
    cout << NigativeNumber(arr, Length) << endl;
}

