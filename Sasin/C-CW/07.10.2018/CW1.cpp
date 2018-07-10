#include <iostream>
#include <string>

using namespace std;

class animal
{
protected:
	string voice;
	string name;
	string honor;
public:
	animal(): voice(""), name(""), honor("")
	{}
	animal(string voice, string name, string honor)
	{
		this->voice = voice;
		this->name = name;
		this->honor = honor;
	}
	virtual void sound()
	{
		cout << "Voice: " << voice << " " << voice << "." << endl;
	}
	virtual void show()
	{
		cout << "Name animal: " << name << "." << endl;
	}
	virtual void type()
	{
		cout << "Honor animal: " << honor << "." << endl;
	}
	virtual void printAll()
	{
		show();
		sound();
		type();
	}
};

class dog: public animal
{
private:
	string breed;
public:
	dog():breed("")
	{}
	dog(string breed, string voice, string name, string honor) :animal(voice, name, honor)
	{
		this->breed = breed;
	}
	
	virtual void sound()
	{
		cout << "Voice: " << voice << " " << voice << "." << endl;
	}
	virtual void show()
	{
		cout << "Name animal: " << name << "." << endl;
	}
	virtual void type()
	{
		cout << "Honor animal: " << honor << "." << endl;
	}
	void printAll()
	{
		
		cout << "Breed of dogs: " << breed << endl;
		show();
		sound();
		type();
	}
};

class cat : public animal
{
private:
	int age;
public:
	cat() :age(0)
	{}
	cat(int age, string voice, string name, string honor) :animal(voice, name, honor)
	{
		this->age = age;
	}

	virtual void sound()
	{
		cout << "Voice: " << voice << " " << voice << "." << endl;
	}
	virtual void show()
	{
		cout << "Name animal: " << name << "." << endl;
	}
	virtual void type()
	{
		cout << "Honor animal: " << honor << "." << endl;
	}
	void printAll()
	{
		show();
		cout << "Age cat: " << age << endl;
		sound();
		type();
	}
};

void printAllNames(animal *massBass[], int size);


void main(void)
{
	dog objDog("Vest", "Gaf", "lexxx", "run");
	cat objCat(5, "M9ly", "Myr", "sleep");
	

	animal *massBase[2];
	massBase[0] = &objDog;
	massBase[1] = &objCat;
	printAllNames(massBase,2);

	system("pause");
	return;
}
void printAllNames(animal *massBass[], int size)
{
	for (int i = 0; i < size; i++)
	{
		massBass[i]->printAll();
		cout << endl;
	}
	return;
}