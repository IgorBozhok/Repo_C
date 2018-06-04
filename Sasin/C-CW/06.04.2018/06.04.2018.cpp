#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
/*
Указатель this 
Процедурпгый подход (C-style)

*/
class SetShowData
{
private:
	char someName[128];
	int someAge;
public:
	SetShowData(char someName[], int someAge)
	{
		strcpy_s(this->someName, 128, someName);
		this->someAge = someAge;
	}
	void enterDate()
	{
		cout << "Enter name: ";
		cin.getline(someName, 128);
		cout << "enter age: ";
		cin >> someAge;
	}
	void showData()
	{
		cout << "\n" << someName << " " << someAge << endl << endl;
	}
};

void main()
{
	SetShowData obj("hyggyy", 56);

	obj.showData();
	system("pause");
	return;
}


class test
{
private:
	double * mass;
	int size;
public:
	void set(double * mass)
	{
		for (int i = 0; i < size; i++)
		{
			this->mass[i] = mass[i];
		}
	}
	double * get()
	{
		double*temp = new double[size];
		for (size_t i = 0; i < size; i++)
		{
			temp[i] = mass[i];
		}
		return temp;
	}
};