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

float MySqrt(float Number)
{
    return pow(Number, 0.5);
}

int main()
{
    float Number = ReadNumber();
    cout << "My Sqrt Function Result is " << MySqrt(Number) << endl;
    cout << "Sqrt Function in C++ Result is : " << sqrt(Number) << endl;
}

