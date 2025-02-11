#include<cmath>
#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	int RandomNum = rand() % (To - From + 1) + From;
	return RandomNum;
}

enum enCharType {SmallLetter = 1 , CapitalLetter = 2 , SpecialLetter = 3 , Digit = 4 };

char GetRandomCharacter(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::SmallLetter:
		return char(RandomNumber(97, 122));
		break;
	case enCharType::CapitalLetter:
		return char(RandomNumber(65, 90));
		break;
	case enCharType::SpecialLetter:
		return char(RandomNumber(33, 47));
		break;
	case enCharType::Digit:
		return char(RandomNumber(48, 57));
		break;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
	cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
	cout << GetRandomCharacter(enCharType::SpecialLetter) << endl;
	cout << GetRandomCharacter(enCharType::Digit) << endl;
}

