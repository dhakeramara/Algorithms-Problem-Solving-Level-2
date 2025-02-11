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

int MyRound(float Number)
{
    int IntPart;
    IntPart = int(Number);

    float FractionPart = GetFractionPart(Number);

    if (abs(FractionPart) >= 0.5)
    {
        if (Number > 0)
            return ++IntPart;
        else
            return --IntPart;
    }
    else
    {
        return IntPart;
    }

    
}

int main()
{
    srand((unsigned)time(NULL));

    float Number = ReadNumber();
    cout << "My Round Fanction result is : " << MyRound(Number) << endl;
    cout << "Round Fanction in C++ result is : " << round(Number) << endl;
}

