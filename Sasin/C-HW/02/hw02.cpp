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
		str = new char[size] {'\0'};
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
	setlocale(LC_ALL, "RUS");
	
	cout << "1. ����������� �� ���������, ����������� ������� ������ ������ 80 �������� " << endl;
	String* obj = nullptr;
	obj = new String();
	cout << "������� ������: ";
	obj->setStr();
	obj->print();
	delete obj;
	
	cout << "2. �����������, ����������� ��������� ������ ������������� ������� " << endl;
	int size = 100;
	String* obj1 = nullptr;
	cout << "������� ������ ������: ";
	cin >> size;
	cout << "������� ������: ";
	cin >> size;
	obj1 = new String(size);
	obj1->setStr();
	obj1->print();
	delete obj1;


	cout << "3. �����������, ������� ������ ������ � �������������� � �������, ���������� �� ������������." << endl;
	char * str = nullptr;
	str = new char[100];
	cout << "������� ������: ";
	gets_s(str, 100);
	String* obj2 = nullptr;
	obj2 = new String(str);
	obj2->print();
	delete[]str;

	cout << "����� ������� ";
	String::CountStr();
	cout << " �������." << endl;
	system("pause");
	return;
}