#include <iostream>
#include <string>

using namespace std;

class  Employer
{

protected:
	string name;
public:
	Employer():name("")
	{}
	Employer(string name):name(name)
	{}
	virtual void print() = 0;
	virtual ~Employer()
	{}
};

class Prezident: public Employer
{
protected:
	int salary;
public:
	Prezident() = delete;
	Prezident(int salary, string name) : salary(salary), Employer(name)
	{}
	virtual void print()
	{
		cout << "Name Prezident: " << name << " and his salary : " << salary << " $" << endl;
	}
};
class Manager : public Prezident
{
protected:
	int experience;
public:
	Manager() = delete;
	Manager(int experience, int salary, string name) : experience(experience), Prezident(salary, name)
	{}
	virtual void print()
	{
		cout << "Name Manager: " << name << " his experience : " << experience << " years and " << salary << " $."<< endl;
	}
};

void main(void)
{

	Employer * massEmployer[2];
	massEmployer[0] =  new Prezident(5000, "Igor");
	massEmployer[1] = new Manager(5, 100, "Vadik");
	massEmployer[0]->print();
	massEmployer[1]->print();

	delete massEmployer[0];
	delete massEmployer[1];
	system("pause");
	return;

}
