#include <iostream>

using namespace std;

class Overcoat
{
private:
	char * overcoat;
	int cost;
public:
	Overcoat():overcoat(nullptr),cost(0){}
	Overcoat(char *clothes, int _cost)
	{
		int temp = strlen(clothes) + 1;
		this->overcoat = new char[temp];
		strcpy_s(this->overcoat, temp, clothes);
		this->cost = _cost;
	}
	Overcoat(const Overcoat &from)
	{
		int temp = strlen(from.overcoat) + 1;
		this->overcoat = new char[temp];
		strcpy_s(this->overcoat, temp, from.overcoat);
		this->cost = from.cost ;
	}
	Overcoat(const Overcoat &&from)
	{
		int temp = strlen(from.overcoat) + 1;
		this->overcoat = new char[temp];
		strcpy_s(this->overcoat, temp, from.overcoat);
		this->cost = cost;
	}
	Overcoat operator=(const Overcoat &right)
	{
		int temp = strlen(right.overcoat) + 1;
		this->overcoat = new char[temp];
		strcpy_s(this->overcoat, temp, right.overcoat);
		this->cost = right.cost;
		return *this;
	}
	Overcoat operator=(const Overcoat &&right)
	{
		int temp = strlen(right.overcoat) + 1;
		this->overcoat = new char[temp];
		strcpy_s(this->overcoat, temp, right.overcoat);
		this->cost = right.cost;
		return *this;
	}
	~Overcoat()
	{
		if (overcoat != nullptr)
		{
			delete[]overcoat;
		}
	}
	bool operator==(const Overcoat &right)
	{
		if (strcmp(this->overcoat, right.overcoat) == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator > (const Overcoat &right)
	{
		if (this->cost > right.cost)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator < (const Overcoat &right)
	{
		if (this->cost < right.cost)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void print()
	{
		cout << overcoat;
	}
	int get()
	{
		return cost;
	}
};

void main(void)
{
	Overcoat Coat("Coat", 100), Jacket("Jacket", 54), Cloak("Cloak", 75), copyCoat, copyJacket;
	
	copyCoat = Coat;
	copyJacket = Jacket;

	if (Coat == copyCoat)
	{
		Coat.print();
		cout << " and ";
		copyCoat.print();
		cout << " one type." << endl;
	}
	else
	{
		cout << "Clothes of the no one type." << endl;
	}

	if (Jacket == copyCoat)
	{
		cout << "Clothes of the same type." << endl;
	}
	else
	{
		Jacket.print();
		cout << " and ";
		copyCoat.print();
		cout << " not one type." << endl;
	}


	if (Coat > Jacket)
	{
		cout << "Cost ";
		Coat.print();
		cout << ": ";
		cout << Coat.get();
		cout << " $ > Cost ";
		Jacket.print();
		cout << ": ";
		cout << Jacket.get();
		cout << " $";
		cout << endl;
	}

	if (Jacket < Cloak)
	{
		cout << "Cost ";
		Jacket.print();
		cout << ": ";
		cout << Jacket.get();
		cout << " $ < Cost ";
		Cloak.print();
		cout << ": ";
		cout << Cloak.get();
		cout << " $";
		cout << endl;
	}
	cout << endl;

	system("pause");
	return;
}