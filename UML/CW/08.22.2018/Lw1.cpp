#include <iostream>
#include <fstream>
#include <string>
#include <map> 

using std::cout;
using std::cin;
using std::endl;

class frequencyDictionary
{
private:
	std::string buffer;
	std::map<std::string, int> dict;
	std::map<std::string, int>::iterator it;
public:
	frequencyDictionary() = default;
	int readFromFile(std::string userFile);
	int writeToFile(std::string userFile);
};

int frequencyDictionary::readFromFile(std::string userFile)
{
	std::ifstream file(userFile);
	if (!file.is_open())
	{
		cout << "Eror" << endl;
		return 1;
	}
	while (file >> buffer)
	{
		cout << buffer << " ";
	}
	cout << endl;
	file.close();
	return 0;
}
int frequencyDictionary::writeToFile(std::string userFile)
{
	std::ifstream file(userFile);
	if (!file.is_open())
	{
		cout << "Eror" << endl;
		return 1;
	}
	while (file >> buffer)
	{
		if (dict.count(buffer) == 0)
		{
			dict[buffer] = 1;
		}
		else
		{
			++dict[buffer];
		}
	}

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
	return 0;
}

int main()
{
	frequencyDictionary obj;
	obj.readFromFile("Text.txt");
	obj.writeToFile("Text.txt");
	obj.readFromFile("Text1.txt");

	system("pause");
	return 0;
}