#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class  myDouble
{
private:
	double d;
public:
	myDouble() :d(0.0) {}
	myDouble(double _d): d(_d) {}
	void print(void)
	{
		cout << d << endl;
	}
};

void maid(void)
{
	myDouble *obj1 = nullptr;
	myDouble *obj2 = nullptr;
	obj1 = new myDouble();
	obj2 = new myDouble(1.1);
	cout << "Singl " << endl;
	obj1->print();
	obj2->print();
	myDouble * mas1 = nullptr;
	mas1 = new myDouble[3];

	cout << "Mass: " << endl;
	mas1[0].print();
	mas1[1].print();
	mas1[2].print();

	myDouble **mas2 = nullptr;
	mas2 = new myDouble*[3];
	mas2[0] = new myDouble();
	mas2[1] = new myDouble(2.2);
	mas2[2] = new myDouble(3.9);

	cout << "Mass: " << endl;
	mas2[0]->print();
	mas2[1]->print();
	mas2[2]->print();
	delete mas2[1];
	system("pause");
	return;
}
 