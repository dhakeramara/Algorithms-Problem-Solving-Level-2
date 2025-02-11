#include<cmath>
#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int RandomNumber(int From, int To)
{
	int RandomNum = rand() % (To - From + 1) + From;
	return RandomNum;
}

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialLetter = 3, Digit = 4 };

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

string GenerateWord(enCharType Chartype, short Length)
{
	string word;
	for (int i = 1; i <= Length; i++)
	{
		word = word + GetRandomCharacter(Chartype);
	}
	return word;
}

string GenerateKey()
{
	string Key = "";

	Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

	return Key;
}

void GenerateKeys(short NumberOfKey)
{
	for (int i = 1; i <= NumberOfKey; i++)
	{
		cout << "Key [" << i << "] :  ";
		cout << GenerateKey() << endl;
	}
}

void FillArrayWithKey(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = GenerateKey();
	}
}

void PrintStringArray(string arr[100], int arrLength)
{
	cout << "Array Elements : " << endl << endl;
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Array [" << i << "] : ";
		cout << arr[i] << endl;
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	string arr[100];
	int arrLength = 0;

	arrLength = ReadPositiveNumber("Please Enter How Many keys To Generate ?");
	FillArrayWithKey(arr, arrLength);
	PrintStringArray(arr, arrLength);


	
}

