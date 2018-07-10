#include <iostream>
#include <string>

using namespace std;

class base
{
protected:
	string name;
public:
	base()
	{
		name = "base class";
	}
	virtual void printName()
	{
		cout << name << endl;
	}
};

class level1 :public base
{
protected:
	string nameL1;
public:
	level1()
	{
		nameL1 = "level 1 class";
	}
	void printName()
	{
		cout << nameL1 << endl;
	}
};
class level2 :public base
{
protected:
	string nameL2;
public:
	level2()
	{
		nameL2 = "level 2 class";
	}
	void printName()
	{
		cout << nameL2 << endl;
	}
};

void printAllNames(base *massBass[], int size);

void main(void)
{
	base objBase;
	level1 objLevel1;
	level2 objLevel2;

	base *ptrBase = nullptr;
	ptrBase = &objBase;
	ptrBase = &objLevel1;
	ptrBase = &objLevel2;

	level1 *ptrLevel1 = nullptr;
	ptrLevel1 = &objLevel1;
	//ptrlevel1 = &objLevel2;

	level2 * ptrLevel2 = nullptr;
	ptrLevel2 = &objLevel2;

	base *massBase[3];
	massBase[0] = &objBase;
	massBase[1] = &objLevel1;
	massBase[2] = &objLevel2;

	printAllNames(massBase, 3);
	system("pause");
	return;
}
void printAllNames(base *massBass[], int size)
{
	for (int i = 0; i < size; i++)
	{
		massBass[i]->printName();
	}
	return;
}