#include <iostream>
#include <string>

using namespace std;

class wheels
{
protected:
	string type;
	unsigned int R;
public:
	wheels():type(""),R(0)
	{}
	wheels(string type, unsigned int R)
	{
		this->type = type;
		this->R = R;
	}
	void printWheels(void)
	{
		cout << "Type wheels: " << type << " and radius: " << R;
	}
};

class engine
{
protected:
	unsigned int Hors;
	string nameHors;
public:
	engine() :nameHors(""), Hors(0)
	{}
	engine(string nameHors, unsigned int Hors)
	{
		this->nameHors = nameHors;
		this->Hors = Hors;
	}
	void printEngine(void)
	{
		cout << "Name engine: " << nameHors << " and power: " << Hors;
	}
};

class box
{
protected:
	string nameBox;
public:
	box() :nameBox("")
	{}
	box(string nameBox)
	{
		this->nameBox = nameBox;
	}
	void printBox(void)
	{
		cout << "Car body: " << nameBox;
	}
};

class Geely : public wheels, public engine, public box
{
protected:
	string brand;
public:
	Geely():brand("")
	{}
	Geely(string brand, string type, unsigned int R, string nameHors, unsigned int Hors, string nameBox) :wheels(type, R), engine(nameHors, Hors), box(nameBox)
	{
		this->brand = brand;
		wheels::type = type;
		wheels::R = R;
		engine::nameHors = nameHors;
		engine::Hors;
		box::nameBox;
	}
	void PrintCar()
	{
		cout << "Your car: " << brand << endl;
		cout << endl;
		box::printBox();
		cout << endl;
		engine::printEngine();
		cout << endl;
		wheels::printWheels();
		cout << endl;
	}

};

void main(void)
{
	Geely* Car = nullptr;
	Car = new Geely[2];

	Geely car0("Nisan", "summer",16, "1,6 Disel", 220, "sedan");
	Geely car1("BMV", "summer", 20, "4.0 Disel", 300, "sedan");
	
	Car[0] = car0;
	Car[0].PrintCar();
	cout << "======================" << endl;
	Car[1] = car1;
	Car[1].PrintCar();

	delete[] Car;

	system("pause");
	return;
}
