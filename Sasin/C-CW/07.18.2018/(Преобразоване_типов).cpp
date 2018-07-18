#include <iostream>

using namespace std;

class base
{
private:
	int baseI;
public:
	base(int i):baseI(i)
	{}
	virtual void print(void) const
	{
		cout << "Base int = " << baseI << endl;
	}



};

class level1 :public base
{
private:
	double level1D;
public:
	level1(int i, double d):level1D(d),base(i)
	{}
	void print(void) const override
	{
		cout << "Level1 double = " << level1D << endl; 
	}
};

// dynamic_cast 
class Base_dynamic
{
public:
	Base_dynamic()
	{}
	virtual ~Base_dynamic()
	{}
	void info()
	{
		cout << "Base::info()" << endl;
	}
};

class Derived : public Base_dynamic
{
public:
	Derived()
	{}
	~Derived()
	{}
	void info()
	{
		cout << "Derived::info()" << endl;
	}
};

void main(void)
{
	// const_cast
	/*
	const char constStr[] = "Hello. world!";
	char *ptrStr = const_cast<char*>(constStr);
	cout << ptrStr << endl;
	ptrStr[5] = ',';
	cout << ptrStr << endl;
	*/

	// static_cast
	/*
	int a = 13, b = 7;
	double res = 0.0;
	res = static_cast<double>(13) / static_cast<double>(7);
	cout << res << endl;
	*/

	//dynamic_cast
	/*
	Base_dynamic* base = new Derived();
	base->info();
	Derived * derived;
	derived = dynamic_cast<Derived*>(base);
	if (derived)
		derived->info();
	delete base;
	*/
	// reinterpret_cast
	const char constStr[] = "Hello. world!";
	int j = (int)constStr;
	int k = reinterpret_cast<int>(constStr);
	cout << "C-style = " << j << endl;
	cout << "reinterpret_cast = " << k << endl;


	/*base objBase(5);
	level1 objL1(3, 4.4);
	base *ptrBase;
	ptrBase = &objBase;
	cout << typeid(ptrBase).name() << endl;
	cout << typeid(*ptrBase).name() << endl;
	ptrBase->print();

	ptrBase = &objL1;
	cout << typeid(ptrBase).name() << endl;
	cout << typeid(*ptrBase).name() << endl;
	ptrBase->print();

	if (typeid(*ptrBase) == typeid(objBase))
	{
		cout << "Base class" << endl;
	}
	if (typeid(*ptrBase) == typeid(objL1))
	{
		cout << "Level1 class" << endl;
	}*/
	system("pause");
	return;
}