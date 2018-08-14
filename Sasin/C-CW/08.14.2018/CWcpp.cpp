#include <iostream>
#include <string>
#include <memory>
#include <fstream>

using namespace std;
class fileWork
{
private:
	char *BaffSt;
	unsigned int size;
	char *findSr;
	unsigned int findSize;
	char *changeSt;
	unsigned int changeSize;
	unsigned int countStr;

public:
	fileWork();
	void findStr();
	void changeStr();
	//friend istream& operator >> (istream& in, fileWork& p);
	//friend ostream& operator<<(ostream& out, fileWork& p);
	friend ifstream& operator >> (ifstream& in, fileWork& p);
	friend ofstream& operator<<(ofstream& out, fileWork& p);
	void invertFile();
	void printbuf()
	{
		cout << BaffSt;
	}


};

fileWork::fileWork() : BaffSt(nullptr), size(0), findSr(nullptr), findSize(0), countStr(0), changeSt(nullptr), changeSize(0)
{}
void fileWork::findStr()
{
	this->size = 256;
	BaffSt = new char[this->size];
	ifstream fileIn("itStap.txt");
	int i = 1;
	if (fileIn.is_open())
	{
		while (!fileIn.eof())
		{
			fileIn.getline(BaffSt,size);
			cout << endl;
			cout << i << ")";
			cout << BaffSt;
			i++;
		}
	}
	cout << endl;
	cout << "Enter a string to search for :";
	this->findSize = 256;
	findSr = new char[this->findSize];
	cin.getline(findSr, findSize);
	cout << endl;
	fileIn.seekg(0,ios_base::beg);
	i = 1;
	if (fileIn.is_open())
	{
		while (!fileIn.eof())
		{
			fileIn.getline(BaffSt, size);
			if (strcmp(findSr, BaffSt) == 0)
			{
				
				cout << i << ")" << BaffSt;
				cout << " String found !!!" << endl;
				countStr++;
			}
			i++;
		}
		if (countStr > 0)
		{
			cout << "Find str: " << countStr;
		}
		else
		{
			cout << "String not found !!!" << endl;
		}
		fileIn.close();
	}
}
void fileWork::changeStr()
{
	this->size = 256;
	BaffSt = new char[this->size];
	ifstream fileIn("itStap.txt");
	ofstream fileOut("Text.txt");
	int i = 1;
	if (fileIn.is_open())
	{
		while (!fileIn.eof())
		{
			fileIn.getline(BaffSt, size);
			cout << endl;
			cout << i << ")";
			cout << BaffSt;
			i++;
		}
	}
	cout << endl;
	unsigned int numStr;
	cout << "Enter the string number :";
	cin >> numStr;
	this->changeSize = 256;
	changeSt = new char[this->changeSize];
	cout << endl;
	cout << "Enter a string to search for :";
	cin.clear();
	cin.ignore();
	cin.getline(changeSt, changeSize);
	cout << endl;
	fileIn.seekg(0, ios_base::beg);
	countStr = 0;
	i = 1;
	if (fileIn.is_open())
	{
		while (!fileIn.eof())
		{
			fileIn.getline(BaffSt, size);
			if (fileOut.is_open())
			{ 
				if (i != numStr)
				{
					fileOut << BaffSt << '\n';

				}
				else if (i == numStr)
				{
					fileOut << changeSt << '\n';
					
					countStr++;
				}
				i++;
			}
		}
	}
	fileIn.close();
	fileOut.close();
	
	ifstream fileIn1("Text.txt");
	ofstream fileOut1("itStap.txt");
	i = 1;
	if (fileIn1.is_open())
	{
		while (!fileIn1.eof())
		{
			fileIn1.getline(BaffSt, size);
			if (fileOut1.is_open())
			{
				fileOut1 << BaffSt << '\n';
			}
		}
		fileIn1.close();
		fileOut1.close();
	}
	if (countStr > 0)
	{
		cout << "Find str: " << countStr;
	}
	else
	{
		cout << "String not change !!!" << endl;
	}
}
void main()
{

	//fileWork obj;
	//obj.findStr();

	fileWork obj2;
	obj2.changeStr();
	system("pause");
	return;
}
