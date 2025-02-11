#include<cmath>
#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;

void HardNumberArray(int arr[100] , int& arrLength)
{
    arrLength = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    //This Function Will Search number position in Array and Return  it 's Index,
    //Or Return -1 if it Does Not Exists

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;
    }
    return -1;
}

bool isNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1; // True or False  .
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}

void CopyDistincNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int& DistinationLength)
{
    for (int i = 0; i < SourceLength; i++)
    {
        if (!isNumberInArray(arrSource[i], arrDestination, DistinationLength))
        {
            AddArrayElement(arrSource[i], arrDestination, DistinationLength);
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arrSource[100], SourceLength = 0, arrDestination[100], DistinationLength = 0;
    HardNumberArray(arrSource, SourceLength);
    cout << "Array 1 Elements : \n";
    PrintArray(arrSource, SourceLength);

    CopyDistincNumbersToArray(arrSource, arrDestination, SourceLength, DistinationLength);

    cout << "Array 2 District Elemnets : \n";
    PrintArray(arrDestination, DistinationLength);
}

