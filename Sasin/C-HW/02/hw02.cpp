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
	
	cout << "1. Конструктор по умолчанию, позволяющий создать строку длиной 80 символов " << endl;
	String* obj = nullptr;
	obj = new String();
	cout << "Введите строку: ";
	obj->setStr();
	obj->print();
	delete obj;
	
	cout << "2. Конструктор, позволяющий создавать строку произвольного размера " << endl;
	int size = 100;
	String* obj1 = nullptr;
	cout << "Введите размер строки: ";
	cin >> size;
	cout << "Введите строку: ";
	cin >> size;
	obj1 = new String(size);
	obj1->setStr();
	obj1->print();
	delete obj1;


	cout << "3. Конструктор, который создаёт строку и инициализирует её строкой, полученной от пользователя." << endl;
	char * str = nullptr;
	str = new char[100];
	cout << "Введите строку: ";
	gets_s(str, 100);
	String* obj2 = nullptr;
	obj2 = new String(str);
	obj2->print();
	delete[]str;

	cout << "Всего создано ";
	String::CountStr();
	cout << " объекта." << endl;
	system("pause");
	return;
}