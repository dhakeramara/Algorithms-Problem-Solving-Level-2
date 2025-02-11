#include<cmath>
#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;

int ReadNumber()
{
    int Number = 0;
    cout << "Please Enter a Number ?" << endl;
    cin >> Number;
    return Number;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}

void InPutUserNumberInArray(int arr[100], int& arrLength)
{
    bool AddMore = true;
    do
    {
        AddArrayElement(ReadNumber(), arr, arrLength);
        cout << "Do You Want To Add More Numbers ? [0] No , [1] Yes ?  ";
        cin >> AddMore;
    } while (AddMore);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0;
    InPutUserNumberInArray(arr, arrLength);
    cout << "Array Length is : " << arrLength << endl;
    cout << "Array Elements is : ";
    PrintArray(arr, arrLength);


}

