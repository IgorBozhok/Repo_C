#include <iostream>
#include <conio.h>
using namespace std;

class  constructor
{
private:
	int i;
public:
	constructor():i(0){}
	explicit constructor(int i)
	{
		this->i = i;
	}
	explicit constructor(double i)
	{
		if ((i - (int)i) >= 0.5)
		{
			this->i = i;
			this->i += i;
		}
		else
		{
			this->i = i;
		}
	}
	explicit constructor(constructor &from)
	{
		this->i = from.i;
	}
	void print() const
	{
		cout << i << endl;
	}
};

void main()
{
	constructor obj1(10);
	constructor obj2(20);
	constructor obj3(15.5);
	constructor obj4(obj2);
	obj1.print();
	obj2.print();
	obj3.print();
	obj4.print();

	system("pause");
	return;
}
