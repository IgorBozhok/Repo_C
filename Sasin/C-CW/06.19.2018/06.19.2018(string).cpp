#include <iostream>
#include <string>

using namespace std;



void main()
{
	/*
	string str;
	cout << "Enter your name: ";
	getline(cin, str);
	cout << "Hello, " << str << "!!!" << endl;
	if (str.size() == 0)
	{
		cout << "+" << endl;
	}

	if (str.empty())
	{
		cout << "+" << endl;
	}
	
	string str1("string1");
	string str2("string2");
	str2 = str1;
	if (str1 == str2)
	{
		cout << "Equality";
	}
	if (str1 != str2)
	{
		cout << "!Equality";
	}
	
	string str1("Hello");
	string str2 = "World";
	string str3 = "!!!";
	string res;
	res = str1 + ", ";
	res += str2 + str3;
	cout << res << endl;
	
	string str = "Heello!!!";
	const char *masC = str.c_str();
	cout << masC << endl;
	cout << endl;
	cout << str[0] << str[5];
	cout << endl;
	str[0] = 'G';
	cout << str;
	*/

	string str = "Hellow, World!!!";
	string substr = str.substr(7, 6);

	cout << substr << endl;



	system("pause");
	return;
}
