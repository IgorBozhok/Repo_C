#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student
{

private:
	string name;
	string sp;
	unsigned year;
	int *arr;
	unsigned size;
	unsigned simp;
public:
	Student();
	Student(string name, string sp, unsigned year, int *arr, unsigned size);
	Student(const Student& from);
	~Student();
	void print() const;
	friend ifstream& operator >> (ifstream& in, Student& p);
	friend ofstream& operator<<(ofstream& out, Student& p);
};

Student::Student():name(" "),sp(" "),year(0),arr(nullptr),size(0)
{}
Student::Student(string name, string sp, unsigned year, int *arr, unsigned size)
{
	this->name = name;
	this->sp = sp;
	this->year = year;
	this->size = size;
	this->simp = simp;
	this->arr = new int[this->size];
}
Student::Student(const Student& from)
{
	this->name = from.name;
	this->sp = from.sp;
	this->year = from.year;
	this->size = from.size;
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++)
	{
		this->arr[i] = from.arr[i];
	}
}
Student::~Student()
{
	delete[]arr;
}

void Student::print() const
{
	cout << "Student name: " <<name << endl;
	cout << "SP of student: " <<sp<< endl;
	cout << "Year: " <<year<< endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Mark of student: " << arr[i] << endl;
	}

	return;
}

ifstream& operator >> (ifstream& in, Student& p)
{
	in >> p.name;
	in >> p.sp;
	in >> p.year;
	for (int i = 0; i < p.size; i++)
	{
		in >> p.arr[p.simp];
	}

	return in;
}
ofstream& operator << (ofstream& out, Student& p)
{
	out << p.name;
	out << p.sp;
	out << p.year;
	for (int i = 0; i < p.size; i++)
	{
		out << p.arr[p.simp];
	}
	return out;
}

void main()
{
	int *mass;
	mass = new int[5]{ 1,2,3,4,5 };

	Student obj("Igor", "qwe", 1987, mass, 5);

	ofstream fileOut("itstep.txt");
	if (fileOut.is_open())
	{
		fileOut << obj;
	}

	ifstream fileIn("itstep.txt");
	if (fileIn.is_open())
	{
		fileIn >> obj;
		obj.print();
		fileIn.close();
	}

	system("pause");
	return;
	

}