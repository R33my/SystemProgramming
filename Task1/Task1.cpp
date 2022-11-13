#include <iostream>
#include <istream>
#include <conio.h>
#include <string>
#include <sstream>

//Lab 5. Variant 13. Task 1
using namespace std;
int main()
{
	int currlen = 0;
	int maxlen = 0;
	int st = -1;
	int amount = 0;

	string str;
	stringstream stream(str);
	cout << "Type something: ";
	getline(cin, str);

	cout << "Symbols after ':' - ";
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ':' && str[i - 1] != ':')
		{
			int temp = i + 1;
			for (temp; temp < str.size(); temp++)
			{
				cout << str[temp];
			}
		}
	}

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			if (currlen % 2 == 0)
			{
				amount++;
			}
			currlen = 0;
		}
		else
		{
			currlen++;
		}

		if (i == str.size() - 1)
		{
			if (currlen % 2 == 0)
			{
				amount++;
			}
		}
	}
	cout << "\nAmount of even words in sentence: " << amount << endl;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ',')
		{
			int temp = i + 2;
			for (temp; str[temp] != ' '; temp++)
			{
				str[temp] = '0';
			}
		}
	}

	cout << "\nSentence without words after ',': ";
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i];
	}

	return 0;
}