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

int ReadNumber()
{
    int Number;
    cout << "Please Enter a Number To Search For ?" << endl;
    cin >> Number;
    return Number;
}

void FillArrayWithRandomNumber(int arr[100], int& arrLength)
{
    cout << "Please Enter Number Of Elements ? " << endl;
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    int Counter = 0;
    for (int i = 0; i < arrLength; i++)
    {

        cout << arr[i] << " ";
    }

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

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;
    FillArrayWithRandomNumber(arr, arrLength);

    cout << "Array 1 Elements :";
    PrintArray(arr, arrLength);

    cout << endl;

    int Number = ReadNumber();
    cout << "The Number That You Are Looking For is : " << Number << endl;

    short NumberPosition = FindNumberPositionInArray(Number, arr, arrLength);

   /* if (NumberPosition == -1)
    {
        cout << "The Number is Not Found ! :/" << endl;
    }
    else
    {
        cout << "The Number Found in Position ( index )  : " << NumberPosition << endl;
        cout << "The Number Found in Order : " << NumberPosition + 1 << endl;
    }*/

    if(! isNumberInArray(Number,arr,arrLength))
        cout<<"No,The Number Not Found \n";
    else
        cout<<"Yes, Number is Found \n";
}

