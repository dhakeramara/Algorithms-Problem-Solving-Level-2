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

float MyFloor(float Number)
{
    if (Number > 0)
        return int(Number);
    else
        return int(Number) - 1;
}

int main()
{
    float Number = ReadNumber();
    cout << "My Floor Function Result is : " << MyFloor(Number) << endl;
    cout << "Floor Function in C++ Result is : " << floor(Number) << endl;

}

