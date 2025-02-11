#include<cmath>
#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;

float MyAbs(float Number)
{
    if (Number > 0)
        return Number;
    else
        return Number * -1;
}

float ReadNumber()
{
    float Number;
    cout << "Please Enter a Number ?" << endl;
    cin >> Number;
    return Number;

}

int main()
{
    srand((unsigned)time(NULL));

    float Number = ReadNumber();
    cout << "My Abs Result is  = " << MyAbs(Number) << endl;
    cout << "C++ Abs Result is  = " << abs(Number) << endl;



}

