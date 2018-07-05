#include <iostream>
#include <cassert>
#include <string>

using namespace std;

class base
{
protected:
	int dataB;
public:
	base() = default;
	base(int dataB):dataB(dataB)
	{}
	void print()
	{
		cout << dataB << endl;
	}
};

class  leveL1A:virtual public base
{
protected:
	int dataL1A;
public:
	leveL1A() = default;
	leveL1A(int dataB, int dataL1A) :base(dataB), dataL1A(dataL1A)
	{}
	void print()
	{
		cout << dataB << endl;
		cout << dataL1A << endl;
	}
};


class  leveL1B :virtual public base
{
protected:
	int dataL1A;
public:
	leveL1B() = default;
	leveL1B(int dataB, int dataL1B) :base(dataB), dataL1A(dataL1B)
	{}
	void print()
	{
		cout << dataB << endl;
		cout << dataL1A << endl;
	}
};

class level2:public leveL1A, public leveL1B
{
protected:
	int dataL2;
public:
	level2(int dataB, int dataL1A, int dataL1B, int dataL2)
	{
		this->dataB = dataB;
		this->dataL1A = dataL1A;
		this->dataL1B = dataL1B;

	}

};


 
