#include <iostream>
#include <conio.h>
using namespace std;

class  worker
{
private:
	char *name;
	char *position; // TODO: enum
	unsigned int year;
	unsigned int salary; //money = x.xx * 100

public:
	worker():name(nullptr),position(nullptr),year(0),salary(0){}
	worker(char *name, char *position, unsigned int year, unsigned int salary);
	explicit worker(const worker &obj);
	~worker();
	unsigned int getYear(void) const;
	unsigned int getSalary(void) const;
	char* getName(void) const;
	char* getPosition(void) const;
};
worker::worker(char *name, char *position, unsigned int year, unsigned int salary)
{
	int temp = strlen(name)+1;
	this->name = new char[temp];
	strcpy_s(this->name, temp, name);
	
	// TODO: enum
	int temp1 = strlen(position) + 1;
	this->position = new char[temp1];
	strcpy_s(this->position, temp1, position);

	this->year = year;
	this->salary = salary;
}
worker::worker(const worker &obj)
{
	int tempSize = strlen(obj.name) + 1;
	this->name = new char[tempSize];
	strcpy_s(this->name, tempSize, name);

	// TODO: enum
	int temp1Size = strlen(obj.position) + 1;
	this->position = new char[temp1Size];
	strcpy_s(this->position, temp1Size, position);

	this->year = obj.year;
	this->salary = obj.salary;
}
worker::~worker()
{
	if (name != nullptr)
	{
		delete[]name;
	}
	if (position != nullptr)
	{
		delete[]position;
	}
}
unsigned int worker::getYear(void) const
{
	return year;
}
unsigned int worker::getSalary(void) const
{
	return salary;
}
char* worker::getName(void) const
{
	int SizeName = strlen(name) + 1;
	char *tempName = new char[SizeName];
	strcpy_s(tempName, SizeName, name);
	return tempName;
}
char* worker::getPosition(void) const;
{
	int SizePosition = strlen(position) + 1;
	char *tempPosition = new char[SizePosition];
	strcpy_s(tempPosition, SizePosition, position);
	return tempPosition;
}


 