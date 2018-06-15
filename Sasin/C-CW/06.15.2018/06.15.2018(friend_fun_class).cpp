#include <iostream>

using namespace std;
class number;


class myString
{
private:
	char* str;
	int size;
public:
	myString() = delete;
	myString(const myString &from) = delete;
	~myString()
	{
		delete[]str;
	}
	myString(char* str, int size)
	{
		this->size = size;
		this->str = new char[this->size + 1];
		strcpy_s(this->str, this->size + 1, str);
	}
	void printMyStrin()
	{
		cout << str << endl;
	}
	friend void printMyStrin(myString &obj)
	{
		cout << "Len: " << obj.size << endl;
		cout << obj.str << endl;
	}
	friend void myStrToNumber(myString & mySt, number & num);
};
class number
{
private:
	int interger;
public:
	number() = default;
	explicit number(int interger): interger(interger) {}
	number(const number &from) = default;
	void printfNumber(void)
	{
		cout << "Number = " << interger << endl;
	}
	friend void myStrToNumber(myString & mySt, number & num)
	{
		num.interger = atoi(mySt.str);
	}
};

void main(void)
{
	char userStr[] = "3454";
	myString obj(userStr, strlen(userStr));
	number num;
	myStrToNumber(obj, num);
	num.printfNumber();
	system("pause");
	return;
}
