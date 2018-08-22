#include <iostream>
#include <fstream>
#include <string>
#include <map>

using std::cout;
using std::cin;
using std::endl;





int main()
{
	setlocale(LC_ALL, "Rus");
	std::ifstream file("Text.txt");
	std::string str;
	if (!file.is_open())
	{
		cout << "Eror" << endl;
		return 1;
	}

	
	int count = 0;

	std::map<std::string, int> dict;
	while (file >> str)
	{
		cout << str << endl;
		if (dict.count(str) == 0)
		{
			dict[str] = 1;
		}
		else
		{
			++dict[str];
		}
	}

	std::map<std::string, int>::iterator it;
	std::ofstream file2("Text1.txt");
	if (!file2.is_open())
	{
		cout << "Eror" << endl;
		return 1;
	}

	for (auto it = dict.begin(); it != dict.end(); it++)
	{
		file2 << it->first << ": " << it->second << endl;
	}
	file.close();
	file2.close();
	system("pause");
	return 0;
}
