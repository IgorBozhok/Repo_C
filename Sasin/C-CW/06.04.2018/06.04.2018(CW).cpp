#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Massiv
{
private:
	int size;
	double * mass;
public:
	Massiv()
	{
		size = 1;
		mass = new double[size] {0.0};
	}
	Massiv(int size)
	{
		this->size = size;
		mass = new double[size] {0.0};
	}
	Massiv(double * mass, int size)
	{
		this->size = size;
		this->mass = new double[size] {0.0};
		for (size_t i = 0; i < size; i++)
		{
			this->mass[i] = mass[i];
		}
	}
	~Massiv()
	{
		if (mass != nullptr)
		{
			delete[] mass;
		}
	}
	void setSize(int size)
	{
		this->size = size;
	}
	void setInitMass()
	{
		double num = 0.0;
		for (int i = 0; i < size; i++)
		{
			cout << "Enter num: ";
			cin >> num;
			this->mass[i] = num;
		}
	}
	int getSize()
	{
		return size;
	}
	double* getMass()
	{
		double* mass1 = nullptr;
		mass1 = new double[size] {0.0};
		for (int i = 0; i < size; i++)
		{
			mass1[i] = this->mass[i];

		}
		return mass1;
	}
	void out()
	{
		for (int  i = 0; i < size; i++)
		{
			cout << mass[i] << " "; 
		}
	}

};

void main()
{
	cout << "1" << endl;
	Massiv obj;
	obj.setInitMass();
	obj.out();

	cout << endl << "2" << endl;
	Massiv obj1(2);
	obj1.setInitMass();
	obj1.out();

	cout << endl<< "3" << endl;
	double mass[3] = { 0.6, 4.6 , 4.6 };
	Massiv obj2(mass, 3);
	obj2.out();

	system("pause");
	return;
}