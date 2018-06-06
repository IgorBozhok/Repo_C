#include <iostream>
#include <conio.h>
using namespace std;

class Stik
{
private:
	char* stikStr;
public:
	Stik() : stikStr(nullptr) {}
	Stik(const Stik &obj);
	~Stik();
	void creStr();
	void set();
	char* get()const;
	void outStik()const;
};

Stik::Stik(const Stik &obj)
{
	stikStr = new char[100];
	for (int i = 0; i < 100; i++)
	{
		this->stikStr[i] = obj.stikStr[i];
	}
}
Stik::~Stik()
{
	if (stikStr != nullptr)
	{
		delete[]stikStr;
	}
}
void Stik::creStr()
{
	stikStr = new char[100];
}
void Stik::set()
{
	cout << "Enter Stiker: ";
	cin.getline(stikStr, 100);
}
char* Stik::get() const
{	
	char * tempStr = nullptr;
	tempStr = new char[100];
	strcpy_s(tempStr, 100, stikStr);
	return tempStr;
}

void Stik::outStik() const
{
	cout << stikStr;
}
void main()
{
	
	Stik * obj;
	obj = new Stik[3];

	for (int i = 0; i < 3; i++)
	{
		obj[i].creStr();
		obj[i].set();
	}
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1<< ". " ;
		obj[i].outStik();
		cout << endl;
		cout << i + 1 << ". ";
		cout<< obj[i].get();
		cout << endl;
	}

	delete[]obj;
	system("pause");
	return;
}