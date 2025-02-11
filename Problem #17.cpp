#include<cmath>
#include <iostream>
#include<string>
using namespace std;

string ReadPassword()
{
	string Password;
	cout << "Please Enter Your Password From 3 Capital Letters ?"<<endl;
	cin >> Password;
	return Password;
}

bool GeusingPassword(string OriginalPassword)
{
	string word = "";
	int Counter = 0;
	system("color 4F");
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				Counter++;
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
				
				cout << "Trial [" << Counter << "] : " << word << endl;

				if (word == OriginalPassword)
				{
					cout << "Password is : " << word << endl;
					cout << "Found After : " << Counter << " Trial(s)" << endl;
					system("color 2F");
					return true;
				}
				word = "";
			}
		}
	}
	return false;
}



int main()
{
	GeusingPassword(ReadPassword());
}

