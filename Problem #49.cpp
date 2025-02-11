#include<cmath>
#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;

float ReadNumber()
{
    float Number;
    cout << "Please Enter a Number ?" << endl;
    cin >> Number;
    return Number;
}

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

float MyCeil(float Number)
{
    if (abs(GetFractionPart(Number)) > 0)
        if (Number > 0)
            return int(Number) + 1;
        else
            return int(Number);
    else
        return Number;
}

int main()
{
    float Number = ReadNumber();
    cout << "My Ceiling Result is : " << MyCeil(Number) << endl;
    cout << "Ceiling Result in C++ is : " << ceil(Number) << endl;
}

