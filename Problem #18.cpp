#include<cmath>
#include <iostream>
#include<string>
using namespace std;

string ReadText()
{
	string Text;
	cout << "Please Enter Your Text Here ?" << endl;
	getline(cin, Text);
	return Text;
}

string EncryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)+Text[i] + EncryptionKey);
	}
	return Text;
}

string DecryptionText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)+Text[i] - EncryptionKey);
	}
	return Text;
}

int main()
{
	const short Encryptionkey = 2;

	string Text = ReadText();
	string TextAfterEncryption = EncryptText(Text, Encryptionkey);
	string TextAfterDecryption = DecryptionText(TextAfterEncryption, Encryptionkey);

	cout << "Text Before Encryption : " << Text << endl;
	cout << "Text After Encryption : " << TextAfterEncryption << endl;
	cout << "Text After Decryption : " << TextAfterDecryption << endl;

}

