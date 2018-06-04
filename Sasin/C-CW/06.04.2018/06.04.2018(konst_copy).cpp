#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class MyClass
{

private:
	char* str = nullptr;
public:
	MyClass();
	~MyClass();
	MyClass(const MyClass &obj)
	{
		this->str = new char[20];
		strcpy_s(this->str, 20, obj.str);
	}

	void printSrr(void)
	{
		cout << str << endl;
	}
};

MyClass::MyClass()
{
	str = new char[20];
	cin.getline(str, 20);
}
MyClass::~MyClass()
{
	delete str;
}

void myStringTest(MyClass funObj)
{
	funObj.printSrr();
}



void main(void)
{
	MyClass obj;
	obj.printSrr();
	myStringTest(obj);
	obj.printSrr();
	system("pause");
	return;
}