#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
/*
class hello
{
private:
	char helloStr[80];
public:
	void initStr(void)
	{
		strcpy_s(helloStr, 80, "Hollo, world!!!");
	}
	inline void outputHello(void)
	{
		cout << helloStr << endl;
	}
	
};

void main(void)
{
	hello obj;
	obj.initStr();
	obj.outputHello();
	system("pause");
	return;
}
*/
/*
class Tel
{
private:
	int codeC;
	int COdeOper;
	int Nomer;
public:
	void intit(void);
	void out(void);

};
void Tel::intit(void)
{
	cout << "¬ведите код страны: ";
	cin >> codeC;
	cout << endl << "¬ведите код оператора: ";
	cin >> COdeOper;
	cout << endl << "¬ведите телефон: ";
	cin >> Nomer;
}
void Tel::out(void)
{
	cout << "+" << codeC << " " << COdeOper << " " << Nomer << endl;
}

void main(void)
{
	setlocale(LC_ALL, "RUS");
	Tel obj;
	obj.intit();
	obj.out();
	system("pause");
	return;
}
*/

class myString
{
private:
	char *myStr;
	int sizeMystr;
	int maxSizeMyStr;
public:
	myString()
	{
		myStr = nullptr;
		sizeMystr = 0;
		maxSizeMyStr = 0;
	}
	myString(int size)
	{
		myStr = new char[size] { '\0' };
		sizeMystr = size;
		maxSizeMyStr = 0;
	}
	myString(int sizeUserStr, char*userStr)
	{
		myStr = new char[sizeUserStr + 1];
		sizeMystr = sizeUserStr;
		maxSizeMyStr = sizeUserStr;
		strcpy_s(myStr, maxSizeMyStr, userStr);
		;
	}
	~myString()
	{
		if (myStr != nullptr)
		{
			delete myStr;
		}
	}


	void outoutMyStr(void)
	{
		if (myStr == nullptr)
		{
			cout << "Error" << endl;
			return;
		}
		cout << myStr << endl;
	}

};
void main(void)
{
	setlocale(LC_ALL, "RUS");
	myString obj(10);
	obj.outoutMyStr();
	system("pause");
	return;
}
