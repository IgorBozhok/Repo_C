#include <iostream>
#include <cassert>
#include <string>

using namespace std;

class passpor
{
private:

protected:
	string name;
	unsigned int id;
public:
	passpor() :name(""), id(0)
	{}
	passpor(string name, int id)
	{
		this->id = id;
		this->name = name;
	}
	~passpor()
	{
	}
};

class foreingPassport : private passpor
{

private:
	struct visa
	{
		string country;
		unsigned int day;
	};
	visa masVias[10];
	unsigned int id;
	int countVISA;
protected:


public:
	foreingPassport() = delete;
	foreingPassport(string name, int idP, int idFP) : passpor(name, idP)
	{
		this->id = idFP;
		countVISA = 0;
	}
	void setVisa(string country, unsigned int day)
	{
		masVias[countVISA].country = country;
		masVias[countVISA].day = day;
		countVISA++;
	}
	void print(void)
	{
		cout << "Name: " << name << endl;
		cout << "Passport id: " << passpor::id << endl;
		cout << "Foreign id: " << id << endl;
		for (int i = 0; i < countVISA; i++)
		{
			cout << "Visa #" << i + 1 << endl;
			cout << masVias[i].country << " ";
			cout << masVias[i].day << endl;
		}
	}

};


void main(void)
{

	foreingPassport obj("Igor", 1234, 54243);
	obj.setVisa("country 1", 10);
	obj.setVisa("country 2", 5);
	obj.setVisa("country 2", 6);
	obj.print();

	system("pause");
	return;
}