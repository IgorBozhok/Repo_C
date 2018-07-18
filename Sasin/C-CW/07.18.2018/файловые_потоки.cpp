#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class person
{

public:
	enum personGender
	{
		MALE = 0,
		FEMALE
	};
private:
	string name;
	unsigned age;
	personGender gender;
public:
	person();
	person(string name, int age, personGender gender);
	person(const person& from);
	void print(void) const;
	~person();
	friend ifstream& operator>>(ifstream& in, person& p);
	friend ofstream& operator<<(ofstream& out, person& p);
};


person::person() :name(" "), age(0), gender(MALE)
{}
person::person(string name, int age, personGender gender):name(name),age(age), gender(gender)
{}
person::person(const person& from)
{
	this->name = from.name;
	this->age = from.age;
	this->gender = from.gender;
}
person::~person()
{}
void person::print(void) const
{
	cout << "Person name: " << name << endl;
	cout << "Person age: " << age << endl;
	if (gender == MALE)
	{
		cout << "Person gerder: male" << endl;
	}
	else if (gender == FEMALE)
	{
		cout << "Person gerder: female" << endl;
	}
	return;
}
ifstream& operator >> (ifstream& in, person& p)
{
	int gender;
	in >> p.name;
	in >> p.age;
	in >> gender;
	if (gender == 0)
	{
		p.gender = person::personGender::MALE;
	}
	else if (gender == 1)
	{
		p.gender = person::personGender::FEMALE;
	}
	return in;
}
ofstream& operator<<(ofstream& out, person& p)
{
	int gender;
	out << p.name << endl;
	out << p.age << endl;
	if (p.gender == person::personGender::MALE)
	{
		gender = 0;
		out << gender << endl;
	}
	else if (p.gender == person::personGender::FEMALE)
	{
		gender = 1;
		out << gender << endl;
	}
	return out;
}
void main(void)
{

	person * mas = new person[5]{ {"ANNA",18,person::FEMALE},
	{"BOB",23, person::MALE},
	{"TOM",31, person::MALE},
	{"EMM",28,person::FEMALE},
	{"ALICE",22,person::FEMALE} };

	ofstream fileOut("itste.txt");
	if (fileOut.is_open())
	{
		for (int i = 0; i < 5; i++)
		{
			fileOut << mas[i];
		}
		fileOut.close();
	}

	person obj;
	ifstream fileIn("itste.txt");
	if (fileIn.is_open())
	{
		for (int i = 0; i < 5; i++)
		{
			fileIn >> obj;
			cout << "Person # " << i + 1 << endl;
			obj.print();
		}
		fileIn.close();
	}

	system("pause");
	return;
}