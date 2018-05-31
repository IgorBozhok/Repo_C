#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class String
{
private:
	static int count;
	int size;
	char *str;
public:
	String() : String(80) {}
	
	String(int _Size) : size(_Size)
	{
		str = new char[_Size] {'\0'};
		count++;
	}
	String(char *_str)
	{
		size = sizeof(_str);
		str = _str;
		count++;
	}
	~String()
	{
		if (str != nullptr)
		{
			delete[] str;
		}
	}
	static void CountStr()
	{
		cout << count;
	}
	
	void setStr()
	{
		gets_s(str, size);
	}
	void print()
	{
		cout << str << endl;
	}

};
int String::count = 0;

void main()
{
	String* obj= nullptr;
	obj = new String();
	String::CountStr();
	cout << ".";
	obj->setStr();
	obj->print();

	String* obj1 = nullptr;
	obj1 = new String(10);
	String::CountStr();
	cout << ".";
	obj1->setStr();
	obj1->print();

	String* obj3 = nullptr;
	obj3 = new String("abc");
	String::CountStr();
	cout << ".";
	obj3->print();
	

	system("pause");
	return;
}
