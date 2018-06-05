#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <math.h>

using namespace std;

class reader
{
private:
	char FIO[50] ;
	int date[3];
	int sizeSpisok;
	char** Spisok ;
public:
	reader(): sizeSpisok(0), Spisok(nullptr) {}
	reader(int sizeSpisok);
	reader(const reader &obj);
	~reader();
	void initFIO();
	void outFIO();
	char* getFIO();
	void initDate();
	void outDate();
	void setSizeSpisok();
	void creSpisok();
	void initSpisok();
	void outSpisok();

};

reader::reader(int sizeSpisok)
{
	this->Spisok = new char*[sizeSpisok];
	for (int i = 0; i < sizeSpisok; i++)
	{
		Spisok[i] = new char[50];
	}
}
reader::reader(const reader &obj)
{
	this->Spisok = new char*[obj.sizeSpisok];
	for (int i = 0; i < obj.sizeSpisok; i++)
	{
		Spisok[i] = new char[50];
	}
	for (int i = 0; i < obj.sizeSpisok; i++)
	{
		Spisok[i] = obj.Spisok[i];
	}
	for (int i = 0; i < 50; i++)
	{
		this->FIO[i] = obj.FIO[i];
	}
	for (int i = 0; i < 3; i++)
	{
		this->date[i] = obj.date[i];
	}
}
reader::~reader()
{
	if (Spisok != nullptr)
	{
		delete[]Spisok;
	}
}

void reader::initFIO()
{
	cout << "Enter FIO: ";
	cin.getline(FIO, 50);
}
char* reader::getFIO()
{
	return FIO;
}
void reader::outFIO()
{
	cout << FIO << endl;
	
}

void reader::initDate()
{
	cout << "Enter a date: ";
	cin >> date[0];
	cout << "Enter a month: ";
	cin >> date[1];
	cout << "Enter a year: ";
	cin >> date[2];
	cout << endl;
}
void reader::outDate()
{
	cout << date[0] << "." << date[1] << "." << date[2] << " years" << endl;
}

void reader::setSizeSpisok()
{
	cout << "Enter size spisok: ";
	cin >> sizeSpisok;
}
void reader::creSpisok()
{
	Spisok = new char*[sizeSpisok];
	for (int i = 0; i < sizeSpisok; i++)
	{
		Spisok[i] = new char[50];
	}
}

void reader::initSpisok()
{
	char a = getchar();
	for (int i = 0; i < sizeSpisok; i++)
	{
		cout << i + 1 << ": ";
		cin.getline(Spisok[i], 50);
	}
}
void reader::outSpisok()
{
	for (int i = 0; i < sizeSpisok; i++)
	{
		cout << i + 1 << ". " << Spisok[i] << endl;
	}
}

class Book 
{
private:
	char Author[15];
	char nameBook[20];
	int dateBook;
	char reader1[50];
public:
	Book() {}
	Book(char Author[15]);
	Book(const Book &obj);
	void initAuthor();
	void outAuthor();
	void initNameBook();
	void outBook();
	void initYear();
	void outYear();
	void initReader(reader &obj);
	void outReader();

};
Book::Book(char Author[15])
{
	for (int i = 0; i < 15; i++)
	{

		this->Author[i] = Author[i];
	}
}
Book::Book(const Book &obj)
{
	for (int i = 0; i < 15; i++)
	{
		this->Author[i] = obj.Author[i];
	}
	for (int i = 0; i < 20; i++)
	{
		this->nameBook[i] = obj.nameBook[i];
	}
	for (int i = 0; i < 50; i++)
	{
		this->reader1[i] = obj.reader1[i];
	}
}
void Book::initAuthor()
{
	cout << "Enter Author: ";
	cin.getline(Author, 15);
}
void Book::outAuthor() 
{
	cout << Author << endl;
}

void Book::initNameBook()
{
	cout << "Enter name book: ";
	cin.getline(nameBook, 20);
}
void Book::outBook()
{
	cout << nameBook << endl;
}

void Book::initYear()
{
	cout << "Enter year book: ";
	cin >> dateBook;
}
void Book::outYear()
{
	cout << dateBook << endl;
}

void Book::initReader(reader &obj)
{
	strcpy_s(reader1, 50, obj.getFIO());
}
void Book::outReader()
{
	cout << reader1 << endl;
}


void main(void)
{
	reader obj;
	obj.initFIO();
	obj.initDate();
	obj.setSizeSpisok();
	obj.creSpisok();
	obj.initSpisok();
	obj.outFIO();
	obj.outDate();
	obj.outSpisok();
	
	reader obj1(obj);
	obj1.outFIO();
	obj1.outDate();
	obj1.outSpisok();


	Book obj2;
	obj2.initAuthor();
	obj2.initReader(obj);
	obj2.outReader();
	obj2.outAuthor();
	

	system("pause");
	return;
}