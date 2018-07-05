#include <iostream>
#include <cassert>
#include <string>

using namespace std;

class vehicle
{
private:
protected:
	unsigned int cost=0;
	unsigned int numOfPass=0;
	unsigned int numfBag=0;
	unsigned int km=0;
public:
	vehicle() = delete;
	vehicle(unsigned int numOfPass, unsigned int numfBag,unsigned int km)
	{
		this->numfBag = numfBag;
		this->numOfPass = numOfPass;
		this->km = km;
	}
	void printCost()
	{
		cout << "Cout: " << cost << " $";
	}
};

class Car:public vehicle
{
private:
	int costPas = 5;
	int costMinBag = 10;
	int costPassKm = 1;
	int costBagKm = 2;
	void costPass()
	{
		if (numOfPass > 1 && numOfPass < 5)
		{
			if (km > 3)
			{
				cost = 5 + ((km - 3) * costPassKm);
			}
			else
			{
				cost = 5;
			}
		}
	}
	void costBag()
	{
		cost = 10 + (km*costBagKm);
	}
	
protected:
public:
	Car(unsigned int numOfPass, unsigned int numfBag, unsigned int km) :vehicle(numOfPass, numfBag, km)
	{
	}
	bool printPass(void)
	{
		if (numOfPass < 5)
		{
			costPass();
			cout << "Количество людей: " << numOfPass <<"ч."<< endl;
			cout << "Километраж: " << km <<"км."<< endl;
			printCost();
			cout << endl;
			return true;
		}
		else
		{
			cout << "Паасажиров больше 5" << endl;
			return false;
		}
	}
};

void main()
{
	setlocale(LC_ALL, "RUS");
	Car obj(4, 5, 2);
	obj.printPass();
	system("pause");

	return;
}

