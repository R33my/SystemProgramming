#include <iostream>
#include <istream>
#include <conio.h>
#include <string>
#include <sstream>

//Lab 5. Variant 13. Task 1
using namespace std;
int main()
{
	string str;
	stringstream stream(str);
	cout << "Type something: ";
	getline(cin, str);

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

	while (cout << "Type something: " && getline(cin, str) && !str.empty()) {
		int  i = 0, k = 0;
		stringstream stream(str);
		string tmp, t;
		
		cout << "Symbols after ':' - " << endl;
		if (t[i] == ':' && t[i - 1] != ':')
		{
			for (i; i < str.size(); i++)
			{
				cout << t[i];
			}
		}
		i++;
	}
	return 0;
}