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
	worker() :name(nullptr), position(nullptr), year(0), salary(0) {}
	worker(char *name, char *position, unsigned int year, unsigned int salary);
	explicit worker(const worker &obj);
	~worker();
	unsigned int getYear(void) const;
	unsigned int getSalary(void) const;
	char* getName(void) const;
	char* getPosition(void) const;
	void setYesr(unsigned int year);
	void setSalary(unsigned int salary);
	void SetName(const char  *const name);
	void SetPosition(const char *const Position);
	void InitWorker(char *name, char *position, unsigned int year, unsigned int salary);
};

worker::worker(char *name, char *position, unsigned int year, unsigned int salary)
{
	int temp = strlen(name) + 1;
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
char* worker::getPosition(void) const
{
	int SizePosition = strlen(position) + 1;
	char *tempPosition = new char[SizePosition];
	strcpy_s(tempPosition, SizePosition, position);
	return tempPosition;
}
void worker::setYesr(unsigned int year)
{
	this->year = year;
}
void worker::setSalary(unsigned int salary)
{
	this->salary = salary;
}
void worker::SetName(const char  *const name)
{
	if (name == nullptr)
	{
		return;
	}
	int tempSizeName = strlen(name) + 1;
	if (tempSizeName == 1)
	{
		return;
	}
	if (this->name != nullptr)
	{
		delete[] this->name;
	}
	this->name = new char[tempSizeName];
	strcpy_s(this->name, tempSizeName, name);
}
void worker::SetPosition(const char *const Position)
{
	if (Position == nullptr)
	{
		return;
	}
	int tempSizePosition = strlen(Position) + 1;
	if (tempSizePosition == 1)
	{
		return;
	}
	if (this->position != nullptr)
	{
		delete[] this->position;
	}
	this->position = new char[tempSizePosition];
	strcpy_s(this->position, tempSizePosition, Position);
}
void worker::InitWorker(char *name, char *position, unsigned int year, unsigned int salary)
{
	int temp = strlen(name) + 1;
	this->name = new char[temp];
	strcpy_s(this->name, temp, name);

	// TODO: enum
	int temp1 = strlen(position) + 1;
	this->position = new char[temp1];
	strcpy_s(this->position, temp1, position);

	this->year = year;
	this->salary = salary;
}


class iterFace
{
private:
	worker **mas;
	unsigned int sizeMas;
public:
	iterFace();
	~iterFace();
	void printAll(int number = -1) const;
	void print(unsigned int zp) const;

};
iterFace::iterFace()
{

	sizeMas = 7;
	mas = new worker*[7];
	char tempname[] = "Name1";
	char tempPosition[][5] = { "Pos1","Pos2","Pos3" };

	for (int i = 0; i < sizeMas; i++)
	{
		mas[i] = new worker(tempname, tempPosition[i % 3], (2018 - (i % 3)), (i + 1) * 1000);
		tempname[4]++;
	}

}
iterFace::~iterFace()
{
	if (mas != nullptr)
	{
		for (int i = 0; i < sizeMas; i++)
		{
			if (mas[i] != nullptr)
			{
				delete mas[i];
			}
		}
		delete[]mas;
	}
}
void iterFace::printAll(int number) const
{
	if (mas == nullptr)
	{
		cout << "Mas == nullptr" << endl;
		return;
	}
	if (number < 0)
	{
		for (int i = 0; i < sizeMas; i++)
		{
			if (mas[i] != nullptr)
			{
				cout << "Worker " << i + 1 << endl;
				cout << mas[i]->getName() << " ";
				cout << mas[i]->getPosition() << " ";
				cout << mas[i]->getYear() << " ";
				cout << mas[i]->getSalary() << endl << endl;
			}
			else
				cout << "WOlker #" << i + 1 << "Empty" << endl;
		}
	}
	else
	{
		//TODO: print mas[number] , if number >= 0
	}
}
void iterFace::print(unsigned int zp) const
{
	if (mas == nullptr)
	{
		cout << "Mas == nullptr" << endl;
		return;
	}
	for (int i = 0; i < sizeMas; i++)

	{
		if (mas[i]->getSalary() >= zp)
		{
			cout << "Worker " << i + 1 << endl;
			cout << mas[i]->getName() << " ";
			cout << mas[i]->getPosition() << " ";
			cout << mas[i]->getYear() << " ";
			cout << mas[i]->getSalary() << endl << endl;
		}
	}
}


void main(void)
{
	iterFace obj;
	//obj.printAll();
	obj.print(3000);

	


	system("pause");
	return;
}