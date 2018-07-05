#include <iostream>
#include <cassert>
#include <string>

using namespace std;

template<typename userType>
class base
{
protected:
	userType dataB;
public:
	base(userType dataB):dataB(dataB) 
	{}
	void print()
	{
		cout << dataB << endl;
	}
};

class level1 : public base<int>
{
protected:
	int dataL1;
	level1(int dataB, int dataL1):base(dataB), dataL1(dataL1)
	{}
	void print()
	{
		base::print();
		cout << dataL1 << endl;
	}
};

template<typename userTypeL2>
class level2:public level1
{
protected:
	userTypeL2 dataL2;
public:
	level2(int dataB,int dataL1,userTypeL2 dataL2):level1(dataB,dataL1),dataL2(dataL2)
	{}
	void print()
	{
		level1::print();
		cout << dataL2 << endl;
	}

};
template<typename userTypeL3>
class level3 :public level2<userTypeL3>
{
protected:
	userTypeL3 dataL3;
public:
	level3(int dataB, int dataL1, userTypeL3 dataL2, userTypeL3 dataL3) :level2(dataB, dataL1, dataL2), dataL3(dataL3)
	{
	}
	void print()
	{
		level2::print();
		cout << dataL3 << endl;
	}
};

void main()
{
	level3<int> objInt(1, -2, 3, -4);
	level3<char> objChar(-1, 2, 'a', 'z');
	level3<string> objString(0, 0, "Hello", "World");
	cout << "string: "<< endl;
	objString.print();
	cout << "int: " << endl;
	objInt.print();
	cout << "char: " << endl;
	objChar.print();

	system("pause");
	return;
}

