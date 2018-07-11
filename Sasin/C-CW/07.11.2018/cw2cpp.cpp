#include <iostream>
#include <string>

using namespace std;

class object
{
public:
	object()
	{
		cout << "Object Constructor" << endl;
	}
	~object()
	{
		cout << "Object Destructor" << endl;
	}
};

class base
{
public:
	base()
	{
		cout << "BAse Constructor" << endl;
	}
	virtual ~base() = 0;

};
base::~base()
{
	cout << "Base Destru" << endl;
}

class child : public base
{
private:
	object obj;
public:
	child()
	{
		cout << "Child Constructor" << endl;
	}
	~child()
	{
		cout << "Child Destructor" << endl;
	}
	virtual void print() {};



};


void main(void)
{
	base * obj = new child;
	delete obj;
	system("pause");
	return;
}